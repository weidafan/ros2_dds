/* 
 (c) Copyright, Real-Time Innovations, 10/01/2006 
 All rights reserved.
 No duplications, whole or partial, manual or electronic, may be made
 without express written permission.  Any such copies, or
 revisions thereof, must display this notice unaltered.
 This code contains trade secrets of Real-Time Innovations, Inc.

===================================================================== */

import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.Arrays;

import com.rti.dds.domain.*;
import com.rti.dds.infrastructure.*;
import com.rti.dds.publication.*;
import com.rti.dds.topic.*;
import com.rti.ndds.config.*;

// ===========================================================================

public class MessageDDSPublisher {
    private DomainParticipant participant = null;
    private Publisher publisher = null;
    private Topic topic = null;
    private MessageDataWriter writer = null;
    private int domainId;

    // -----------------------------------------------------------------------
    // Public Methods
    // -----------------------------------------------------------------------

    /*
    */
    public MessageDDSPublisher(int domainId) {
        this.domainId = domainId;
    }

    /*
    */
    public boolean start() {
        String typeName;

        try {
            /* Create participant */                       
            participant = DomainParticipantFactory.TheParticipantFactory.
                create_participant(
                    domainId, DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
                    null /* listener */, StatusKind.STATUS_MASK_NONE);

            if (participant == null) {
                throw new Exception("Error creating participant");
            }
        
            /* Create publisher */
            publisher = participant.create_publisher(
                DomainParticipant.PUBLISHER_QOS_DEFAULT, null /* listener */,
                StatusKind.STATUS_MASK_NONE);

            if (publisher == null) {
                throw new Exception("Error creating publisher");
            }
        
            /* Register type before creating topic */
            typeName = MessageTypeSupport.get_type_name();
            MessageTypeSupport.register_type(participant, typeName);

            /* Create topic */
            topic = participant.create_topic(
                "Message",
                typeName, DomainParticipant.TOPIC_QOS_DEFAULT,
                null /* listener */, StatusKind.STATUS_MASK_NONE);

            if (topic == null) {
                throw new Exception("Error creating topic");
            }
        
            /* Create writer */
            writer = (MessageDataWriter)
                publisher.create_datawriter(
                    topic, Publisher.DATAWRITER_QOS_DEFAULT,
                    null /* listener */, StatusKind.STATUS_MASK_NONE);

            if (writer == null) {
                throw new Exception("Error creating writer");
            }
        
            return true;
        } catch (Exception e) {
            stop();
            return false;
        }
    }

    /*
    */
    public void stop() {
        try {
            if(participant != null) {
                participant.delete_contained_entities();
                writer = null;
                topic = null;
                publisher = null;
                DomainParticipantFactory.TheParticipantFactory.
                    delete_participant(participant);
                participant = null;
            }
        } catch (Exception e) {
        }
    }

    /*
    */
    public boolean publish(Message msg) {
        InstanceHandle_t instance_handle = InstanceHandle_t.HANDLE_NIL;

        try {
            if (writer == null) {
                return false;
            }

            writer.write(msg,instance_handle);
            return true;
        } catch (Exception e) {
            System.out.println(e.getMessage());
            return false;
        }
    }
}

