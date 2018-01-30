/*
 (c) Copyright, Real-Time Innovations, 2010-2016.
 All rights reserved.
 No duplications, whole or partial, manual or electronic, may be made
 without express written permission.  Any such copies, or
 revisions thereof, must display this notice unaltered.
 This code contains trade secrets of Real-Time Innovations, Inc.
*/

#include "ThroughputQos.h"

void DataWriterQos_setMulticast(
    DDS_DataWriterQos &qos, int /*reader_queue_size*/,
    int nack_coalesce_time_min_in_ms,
    int nack_coalesce_time_max_in_ms) {
    /* qos.protocol.rtps_reliable_writer.max_bytes_per_nack_response
       = -reader_queue_size; */
    qos.protocol.rtps_reliable_writer.max_bytes_per_nack_response = 32*1024;
    qos.protocol.rtps_reliable_writer.min_nack_response_delay.sec = 0;
    qos.protocol.rtps_reliable_writer.min_nack_response_delay.nanosec =
        nack_coalesce_time_min_in_ms * NANOSEC_PER_MILLISEC;
    qos.protocol.rtps_reliable_writer.max_nack_response_delay.sec = 0;
    qos.protocol.rtps_reliable_writer.max_nack_response_delay.nanosec =
        nack_coalesce_time_max_in_ms * NANOSEC_PER_MILLISEC;
}

void DataReaderQos_setMulticast(
    DDS_DataReaderQos &qos, const char* mcast_user_data_address,
    int multicast_reader_count) {

    struct DDS_TransportMulticastSettings_t* multicast_locator = NULL;
    /* DDS_TransportMulticastSettingsSeq_ensure_length(&, 1, 1); */
    qos.multicast.value.ensure_length(1,1);
    /* DDS_TransportMulticastSettingsSeq_get_reference(&qos.multicast.value,
                               0); */
    multicast_locator = &qos.multicast.value[0];

    DDS_String_replace(&multicast_locator->receive_address,
                       mcast_user_data_address);

    qos.resource_limits.initial_samples *= multicast_reader_count;
    if (qos.resource_limits.initial_samples >
        qos.resource_limits.max_samples) {
        qos.resource_limits.max_samples =
            qos.resource_limits.initial_samples;
    }
    qos.reader_resource_limits.max_samples_per_remote_writer =
        qos.resource_limits.initial_samples;
}

DDS_ReturnCode_t configure_factory_qos(
    DDS_DomainParticipantFactoryQos &factory_qos,
    DDSDomainParticipantFactory *factory) {
    DDS_ReturnCode_t return_code = DDS_RETCODE_OK;
    /* We need to disable participants so that we can plug in a new/modified
       transport */
    return_code = factory->get_qos(factory_qos);
    if (return_code != DDS_RETCODE_OK) {
        AppLog_exception("Error get factory QoS\n");
    }

    factory_qos.entity_factory.autoenable_created_entities =
        DDS_BOOLEAN_FALSE;
    return_code = factory->set_qos(factory_qos);
    if (return_code != DDS_RETCODE_OK) {
        AppLog_exception("Error set factory QoS\n");
    }
    return return_code;
}

DDS_ReturnCode_t configure_publisher_participant_qos(
    DDS_DomainParticipantQos &participant_qos,
    DDSDomainParticipantFactory *factory, ThroughputPublisherArgs &args) {
    DDS_ReturnCode_t return_code = DDS_RETCODE_OK;
    int i;

    factory->get_default_participant_qos(participant_qos);

    /* Override this, since we can't set via XML -- values are system specific */
    printf("Modifying RTI DDS event thread priorities from priority = %d to %d\n",
           participant_qos.event.thread.priority, RTI_OSAPI_THREAD_PRIORITY_HIGH);
    participant_qos.event.thread.priority = RTI_OSAPI_THREAD_PRIORITY_HIGH;

    /* Someone may decide to start another publisher
       so take participant index from arguments */
    participant_qos.wire_protocol.participant_id = args.participant_id;

    participant_qos.transport_builtin.mask = 0; /* clear all xport first */
    if (args.transport_to_use() & DDS_TRANSPORTBUILTIN_UDPv4) {
        participant_qos.transport_builtin.mask |= DDS_TRANSPORTBUILTIN_UDPv4;
    }
#ifdef RTI_SHARED_MEMORY
    if (args.transport_to_use() & DDS_TRANSPORTBUILTIN_SHMEM) {
        participant_qos.transport_builtin.mask |= DDS_TRANSPORTBUILTIN_SHMEM;
    }
#endif /* RTI_SHARED_MEMORY */
#ifdef RTI_IPV6
    if (args.transport_to_use() & DDS_TRANSPORTBUILTIN_UDPv6) {
        participant_qos.transport_builtin.mask |= DDS_TRANSPORTBUILTIN_UDPv6;
    }
#endif
    participant_qos.event.max_count = MAX_EVENT_COUNT;

    if (args.max_peer_index > 0) {
        const char* initial_peer_array[THROUGHPUT_TEST_MAX_NODES];
        for (int i = 0; i < args.max_peer_index; ++i) {
            initial_peer_array[i] = args.get_peer_host(i);
        }
        participant_qos.discovery.initial_peers.from_array(
            initial_peer_array, args.max_peer_index);
        participant_qos.discovery.multicast_receive_addresses.ensure_length(0,0);
    }
    if (args.test_verbosity >= TEST_VERBOSITY_MESSAGES) {
        for (i = 0; i < participant_qos.discovery.initial_peers.length();
            ++i) {
            AppLog_warn("Peers %d = %s\n", i,
                        participant_qos.discovery.initial_peers[i]);
        }
    }
    return return_code;
}

DDS_ReturnCode_t configure_subscriber_participant_qos(
    DDS_DomainParticipantQos &participant_qos,
    DDSDomainParticipantFactory *factory, ThroughputSubscriberArgs &args) {
    DDS_ReturnCode_t return_code = DDS_RETCODE_OK;
    int i;

    factory->get_default_participant_qos(participant_qos);

    /* Override this, since we can't set via XML -- values are system specific */
    printf("Modifying RTI DDS event thread priorities from priority = %d to %d\n",
           participant_qos.event.thread.priority, RTI_OSAPI_THREAD_PRIORITY_HIGH);
    participant_qos.event.thread.priority = RTI_OSAPI_THREAD_PRIORITY_HIGH;

    /* Someone may decide to start another subscriber so take
       participant index from arguments */
    participant_qos.wire_protocol.participant_id = args.participant_id;

    participant_qos.transport_builtin.mask = 0; /* clear all xport first */

    if (args.transport_to_use() & DDS_TRANSPORTBUILTIN_UDPv4) {
        participant_qos.transport_builtin.mask |= DDS_TRANSPORTBUILTIN_UDPv4;
    }
#ifdef RTI_SHARED_MEMORY
    if (args.transport_to_use() & DDS_TRANSPORTBUILTIN_SHMEM) {
        participant_qos.transport_builtin.mask |= DDS_TRANSPORTBUILTIN_SHMEM;
    }
#endif /* RTI_SHARED_MEMORY */
#ifdef RTI_IPV6
    if (args.transport_to_use() & DDS_TRANSPORTBUILTIN_UDPv6) {
        participant_qos.transport_builtin.mask |= DDS_TRANSPORTBUILTIN_UDPv6;
    }
#endif
    
    if (args.max_peer_index > 0) {
        const char* initial_peer_array[THROUGHPUT_TEST_MAX_NODES];
        for (int i = 0; i < args.max_peer_index; ++i) {
            initial_peer_array[i] = args.get_peer_host(i);
        }
        participant_qos.discovery.initial_peers.from_array(
            initial_peer_array, args.max_peer_index);
        participant_qos.discovery.multicast_receive_addresses.ensure_length(0,0);
    }
    if (args.test_verbosity >= TEST_VERBOSITY_MESSAGES) {
        for (i = 0; i < participant_qos.discovery.initial_peers.length();
             ++i) {
            AppLog_warn("Peers %d = %s\n",i,
                        participant_qos.discovery.initial_peers[i]);
        }
    }
    return return_code;
}

DDS_ReturnCode_t configure_throughput_writer_qos(
    DDS_DataWriterQos &throughput_writer_qos,
    DDS_Long *samples_per_trigger, DDS_Boolean large_data,
    DDS_Boolean use_multicast, DDS_Long max_gather_send_buffers,
    DDSPublisher *publisher, ThroughputPublisherArgs &args) {
    const DDS_Duration_t three_second = {3,0};
    DDS_ReturnCode_t return_code = DDS_RETCODE_OK;

    if (!args.is_reliable()) {
        return_code = DDSTheParticipantFactory->get_datawriter_qos_from_profile(
            throughput_writer_qos, "Throughput_Library", "Throughput_Data");
        if (return_code != DDS_RETCODE_OK) {
            printf("get_datawriter_qos_from_profile error %d\n", return_code);
            return return_code;
        }

        if (large_data || args.asynchronous) {
            /* max_blocking_time is only relevant when sending asynchronously */
            throughput_writer_qos.reliability.max_blocking_time = three_second;
        }
    } else {
        return_code = DDSTheParticipantFactory->get_datawriter_qos_from_profile(
            throughput_writer_qos, "Throughput_Library", "Throughput_Data_ReliableBursty");
        if (return_code != DDS_RETCODE_OK) {
            printf("get_datawriter_qos_from_profile error %d\n", return_code);
            return return_code;
        }

        /* override max_blocking_time */
        throughput_writer_qos.reliability.max_blocking_time = args.get_max_blocking_time();
        throughput_writer_qos.protocol.push_on_write = !args.no_push_on_write;

        if (large_data || args.asynchronous) {
            /* An asynchronous writer coalesces all piggyback HBs into a
               single HB that gets appended when sending the last asynchronous
               sample in the queue, so it is ok to request one piggyback
               HB with every sample. */
            throughput_writer_qos.protocol.rtps_reliable_writer.
                heartbeats_per_max_samples = throughput_writer_qos.resource_limits.max_samples;
            throughput_writer_qos.reliability.max_blocking_time = three_second;
        }

        if (use_multicast) {
            DataWriterQos_setMulticast(throughput_writer_qos, 32, 0, 1);
        }
    }

    /* Large data is sent asynchronously and subject to flow control */
    if (large_data || args.asynchronous) {
        throughput_writer_qos.publish_mode.kind =
            DDS_ASYNCHRONOUS_PUBLISH_MODE_QOS;
        throughput_writer_qos.publish_mode.flow_controller_name =
            DDS_String_dup("throughput test flow_controller");
    }

    /* Create as many instances as we need */
    if (args.mi_instance_count > 0) {
        throughput_writer_qos.resource_limits.max_instances = args.mi_instance_count;
        throughput_writer_qos.resource_limits.initial_instances =
            throughput_writer_qos.resource_limits.max_instances;
    }

    /* When asynchronously writing small samples, we need to trigger the flow
       controller faster than every 10ms, as the number of samples that
       can be put on the wire every 10ms greatly exceeds
       the writer's send queue size.
       Approach: send message once all gather buffers are used up.
       Need 1 buffer for RTPS header and >= 2 per issue submessage. */
    *samples_per_trigger = (max_gather_send_buffers-1)/2;
    /* Trigger at least 4 times per send queue. */
    if (*samples_per_trigger >
        throughput_writer_qos.resource_limits.max_samples/4) {
        *samples_per_trigger =
            throughput_writer_qos.resource_limits.max_samples/4;
    }
    return return_code;
}

DDS_ReturnCode_t configure_throughput_reader_qos(
    DDS_DataReaderQos &throughput_reader_qos,
    DDSSubscriber *subscriber, ThroughputSubscriberArgs &args) {
    DDS_ReturnCode_t return_code = DDS_RETCODE_OK;

    if (!args.is_reliable()) {
        return_code = DDSTheParticipantFactory->get_datareader_qos_from_profile(
            throughput_reader_qos, "Throughput_Library", "Throughput_Data");
    } else {
        return_code = DDSTheParticipantFactory->get_datareader_qos_from_profile(
            throughput_reader_qos, "Throughput_Library", "Throughput_Data_ReliableBursty");
    }
    if (return_code != DDS_RETCODE_OK) {
        printf("get_datareader_qos_from_profile error %d\n", return_code);
        return return_code;
    }
    

    if (args.mcast_recv_addr != NULL) {
        DataReaderQos_setMulticast(throughput_reader_qos,
                                   args.mcast_recv_addr, 1);
    }

    if (args.mi_instance_count > 0) {
        throughput_reader_qos.resource_limits.max_instances = args.mi_instance_count;
        throughput_reader_qos.resource_limits.initial_instances =
            throughput_reader_qos.resource_limits.max_instances;
    }

    return return_code;
}

