/******************************************************************************
 * (c) Copyright, Real-Time Innovations, Copyright 2010
 *
 * All rights reserved.
 *
 * No duplications, whole or partial, manual or electronic, may be made
 * without express written permission.  Any such copies, or
 * revisions thereof, must display this notice unaltered.
 * 
 * This code contains trade secrets of Real-Time Innovations, Inc.
 *
 * This file contains the types used by RTI Data Distribution Service to monitor
 * applications.
 *
 * THE CONTENTS OF THIS FILE, AS WELL AS THE EXISTENCE OF THIS FILE, 
 * ARE SUBJECT TO CHANGE WITHOUT ANY NOTICE.
 *
 * For any questions please contact support@rti.com
 *****************************************************************************/

#ifndef _DDS_TYPEDEFS_H
#define _DDS_TYPEDEFS_H

/* QoS */
typedef struct DDS_DomainParticipantQos 	DDS_DomainParticipantQos;
typedef struct DDS_TopicQos			        DDS_TopicQos;
typedef struct DDS_PublisherQos			    DDS_PublisherQos;
typedef struct DDS_SubscriberQos		    DDS_SubscriberQos;
typedef struct DDS_DataReaderQos		    DDS_DataReaderQos;
typedef struct DDS_DataWriterQos		    DDS_DataWriterQos;

/* Statuses */
typedef struct DDS_LivelinessChangedStatus		        DDS_LivelinessChangedStatus;
typedef struct DDS_SampleRejectedStatus		        	DDS_SampleRejectedStatus;
typedef struct DDS_RequestedDeadlineMissedStatus 	    DDS_RequestedDeadlineMissedStatus;
typedef struct DDS_RequestedIncompatibleQosStatus	    DDS_RequestedIncompatibleQosStatus;
typedef struct DDS_SampleLostStatus	                    DDS_SampleLostStatus;
typedef struct DDS_SubscriptionMatchedStatus	        DDS_SubscriptionMatchedStatus;
typedef struct DDS_DataReaderCacheStatus	            DDS_DataReaderCacheStatus;
typedef struct DDS_DataReaderProtocolStatus	            DDS_DataReaderProtocolStatus;
typedef struct DDS_LivelinessLostStatus	                DDS_LivelinessLostStatus;
typedef struct DDS_OfferedDeadlineMissedStatus	        DDS_OfferedDeadlineMissedStatus;
typedef struct DDS_OfferedIncompatibleQosStatus	        DDS_OfferedIncompatibleQosStatus;
typedef struct DDS_PublicationMatchedStatus	            DDS_PublicationMatchedStatus;
typedef struct DDS_ReliableWriterCacheChangedStatus	    DDS_ReliableWriterCacheChangedStatus;
typedef struct DDS_ReliableReaderActivityChangedStatus	DDS_ReliableReaderActivityChangedStatus;
typedef struct DDS_DataWriterCacheStatus	            DDS_DataWriterCacheStatus;
typedef struct DDS_DataWriterProtocolStatus	            DDS_DataWriterProtocolStatus;

/* Infrastructure */
typedef struct DDS_Duration_t			                DDS_Duration_t;
typedef struct DDS_ProductVersion_t		                DDS_ProductVersion_t;
typedef struct DDS_InconsistentTopicStatus              DDS_InconsistentTopicStatus;
typedef struct DDS_Time_t                               DDS_Time_t;
typedef struct DDS_StringSequence                       DDS_StringSequence;
typedef struct DDS_QosPolicyCount                       DDS_QosPolicyCount;
typedef struct DDS_ReliableWriterCacheEventCount        DDS_ReliableWriterCacheEventCount;
typedef struct DDS_UserDataQosPolicy                    DDS_UserDataQosPolicy;
typedef struct DDS_TopicDataQosPolicy                   DDS_TopicDataQosPolicy;
typedef struct DDS_GroupDataQosPolicy                   DDS_GroupDataQosPolicy;
typedef struct DDS_TransportPriorityQosPolicy           DDS_TransportPriorityQosPolicy;
typedef struct DDS_LifespanQosPolicy                    DDS_LifespanQosPolicy;
typedef struct DDS_DurabilityQosPolicy                  DDS_DurabilityQosPolicy;
typedef struct DDS_PresentationQosPolicy                DDS_PresentationQosPolicy;
typedef struct DDS_DeadlineQosPolicy                    DDS_DeadlineQosPolicy;
typedef struct DDS_LatencyBudgetQosPolicy               DDS_LatencyBudgetQosPolicy;
typedef struct DDS_OwnershipQosPolicy                   DDS_OwnershipQosPolicy;
typedef struct DDS_OwnershipStrengthQosPolicy           DDS_OwnershipStrengthQosPolicy;
typedef struct DDS_LivelinessQosPolicy                  DDS_LivelinessQosPolicy;
typedef struct DDS_TimeBasedFilterQosPolicy             DDS_TimeBasedFilterQosPolicy;
typedef struct DDS_PartitionQosPolicy                   DDS_PartitionQosPolicy;
typedef struct DDS_ReliabilityQosPolicy                 DDS_ReliabilityQosPolicy;
typedef struct DDS_DestinationOrderQosPolicy            DDS_DestinationOrderQosPolicy;
typedef struct DDS_HistoryQosPolicy                     DDS_HistoryQosPolicy;
typedef struct DDS_ResourceLimitsQosPolicy              DDS_ResourceLimitsQosPolicy;
typedef struct DDS_EntityFactoryQosPolicy               DDS_EntityFactoryQosPolicy;
typedef struct DDS_WriterDataLifecycleQosPolicy         DDS_WriterDataLifecycleQosPolicy;
typedef struct DDS_ReaderDataLifecycleQosPolicy         DDS_ReaderDataLifecycleQosPolicy;
typedef struct DDS_DurabilityServiceQosPolicy           DDS_DurabilityServiceQosPolicy;
typedef struct DDS_SystemResourceLimitsQosPolicy        DDS_SystemResourceLimitsQosPolicy;
typedef struct DDS_ProfileQosPolicy                     DDS_ProfileQosPolicy;
typedef struct DDS_DomainParticipantFactoryQos          DDS_DomainParticipantFactoryQos;
typedef struct DDS_RtpsWellKnownPorts_t                 DDS_RtpsWellKnownPorts_t;
typedef struct DDS_Locator_t                            DDS_Locator_t;
typedef struct DDS_WireProtocolQosPolicy                DDS_WireProtocolQosPolicy;
typedef struct DDS_TransportBuiltinQosPolicy            DDS_TransportBuiltinQosPolicy;
typedef struct DDS_TransportUnicastSettings_t           DDS_TransportUnicastSettings_t;
typedef struct DDS_TransportUnicastQosPolicy            DDS_TransportUnicastQosPolicy;
typedef struct DDS_DiscoveryQosPolicy                   DDS_DiscoveryQosPolicy;
typedef struct DDS_AllocationSettings_t                 DDS_AllocationSettings_t;
typedef struct DDS_DomainParticipantResourceLimitsQosPolicy DDS_DomainParticipantResourceLimitsQosPolicy;
typedef struct DDS_ThreadSettings_t                     DDS_ThreadSettings_t;
typedef struct DDS_EventQosPolicy                       DDS_EventQosPolicy;
typedef struct DDS_ReceiverPoolQosPolicy                DDS_ReceiverPoolQosPolicy;
typedef struct DDS_DatabaseQosPolicy                    DDS_DatabaseQosPolicy;
typedef struct DDS_BuiltinTopicReaderResourceLimits_t   DDS_BuiltinTopicReaderResourceLimits_t;
typedef struct DDS_RtpsReliableReaderProtocol_t         DDS_RtpsReliableReaderProtocol_t;
typedef struct DDS_RtpsReliableWriterProtocol_t         DDS_RtpsReliableWriterProtocol_t;
typedef struct DDS_DiscoveryBuiltinReaderFragmentationResourceLimits_t  DDS_DiscoveryBuiltinReaderFragmentationResourceLimits_t;
typedef struct DDS_PublishModeQosPolicy                 DDS_PublishModeQosPolicy;
typedef struct DDS_DiscoveryConfigQosPolicy             DDS_DiscoveryConfigQosPolicy;
typedef struct DDS_Property_t                           DDS_Property_t;
typedef struct DDS_PropertyQosPolicy                    DDS_PropertyQosPolicy;
typedef struct DDS_EntityNameQosPolicy                  DDS_EntityNameQosPolicy;
typedef struct DDS_TypeSupportQosPolicy                 DDS_TypeSupportQosPolicy;
typedef struct DDS_ExclusiveAreaQosPolicy               DDS_ExclusiveAreaQosPolicy;
typedef struct DDS_UserObjectSettings_t                 DDS_UserObjectSettings_t;
typedef struct DDS_UserObjectQosPolicy                  DDS_UserObjectQosPolicy;
typedef struct DDS_TopicProtocolQosPolicy               DDS_TopicProtocolQosPolicy;
typedef struct DDS_GUID_t                               DDS_GUID_t;
typedef struct DDS_DataWriterProtocolQosPolicy          DDS_DataWriterProtocolQosPolicy;
typedef struct DDS_TransportSelectionQosPolicy          DDS_TransportSelectionQosPolicy;
typedef struct DDS_BatchQosPolicy                       DDS_BatchQosPolicy;
typedef struct DDS_TransportMulticastSettings_t         DDS_TransportMulticastSettings_t;
typedef struct DDS_ChannelSettings_t                    DDS_ChannelSettings_t;
typedef struct DDS_MultiChannelQosPolicy                DDS_MultiChannelQosPolicy;
typedef struct DDS_DataWriterResourceLimitsQosPolicy    DDS_DataWriterResourceLimitsQosPolicy;
typedef struct DDS_TransportEncapsulationSettings_t     DDS_TransportEncapsulationSettings_t;
typedef struct DDS_TransportEncapsulationQosPolicy      DDS_TransportEncapsulationQosPolicy;
typedef struct DDS_ServiceQosPolicy                     DDS_ServiceQosPolicy;
typedef struct DDS_AsynchronousPublisherQosPolicy       DDS_AsynchronousPublisherQosPolicy;
typedef struct DDS_PublisherProtocolQosPolicy           DDS_PublisherProtocolQosPolicy;
typedef struct DDS_DataReaderResourceLimitsQosPolicy    DDS_DataReaderResourceLimitsQosPolicy;
typedef struct DDS_DataReaderProtocolQosPolicy          DDS_DataReaderProtocolQosPolicy;
typedef struct DDS_TransportMulticastQosPolicy          DDS_TransportMulticastQosPolicy;
typedef struct DDS_SubscriberProtocolQosPolicy          DDS_SubscriberProtocolQosPolicy;
typedef struct DDS_SequenceNumber_t                     DDS_SequenceNumber_t;
typedef struct DDS_SampleInfo                           DDS_SampleInfo;

#endif /* _DDS_TYPEDEFS_H */
