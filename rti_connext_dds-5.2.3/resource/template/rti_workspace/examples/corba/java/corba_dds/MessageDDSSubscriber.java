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
import com.rti.dds.subscription.*;
import com.rti.dds.topic.*;
import com.rti.ndds.config.*;

// ===========================================================================

public class MessageDDSSubscriber {
    private int domainId;
    private boolean end;

    // -----------------------------------------------------------------------
    // Public Methods
    // -----------------------------------------------------------------------
    
    /*
    */
    public MessageDDSSubscriber(int domainId) {
        this.domainId = domainId;
    }           

    /*
    */
    public boolean run() {
        DomainParticipant participant = null;
        Subscriber subscriber = null;
        Topic topic = null;
        DataReaderListener listener = null;
        MessageDataReader reader = null;

        try {
            /* Create participant */
            participant = DomainParticipantFactory.TheParticipantFactory.
                create_participant(
                    domainId, DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
                    null /* listener */, StatusKind.STATUS_MASK_NONE);

            if (participant == null) {
                throw new Exception("Error creating participant");
            }
                    
            /* Create subscriber */
            subscriber = participant.create_subscriber(
                DomainParticipant.SUBSCRIBER_QOS_DEFAULT, null /* listener */,
                StatusKind.STATUS_MASK_NONE);

            if (subscriber == null) {
                throw new Exception("Error creating subscriber");
            }

            /* Register type before creating topic */
            String typeName = MessageTypeSupport.get_type_name(); 
            MessageTypeSupport.register_type(participant, typeName);

            /* Create topic */
            topic = participant.create_topic(
                "Message",
                typeName, DomainParticipant.TOPIC_QOS_DEFAULT,
                null /* listener */, StatusKind.STATUS_MASK_NONE);
        
            // --- Create reader --- //
            listener = new MessageListener();

            /* To customize data reader QoS, use
               subscriber.get_default_datareader_qos() */
            reader = (MessageDataReader)
                subscriber.create_datareader(
                    topic, Subscriber.DATAREADER_QOS_DEFAULT, listener,
                    StatusKind.STATUS_MASK_ALL);
        
            /* Wait for data */
           System.out.println("DDS Subscriber is now ready to receive requests...");

            while (!((MessageListener)listener).end) {
                Thread.sleep(1000);
            }

            return true;
        } catch (Exception e) {
            return false;
        } finally {
            /* Shutdown */
            if(participant != null) {
                participant.delete_contained_entities();

                DomainParticipantFactory.TheParticipantFactory.
                    delete_participant(participant);
            }
        }
    }
    
    // -----------------------------------------------------------------------
    // Private Types
    // -----------------------------------------------------------------------
        
    private static class MessageListener extends DataReaderAdapter {            
        public boolean end;
        MessageSeq _dataSeq = new MessageSeq();
        SampleInfoSeq _infoSeq = new SampleInfoSeq();
        Message msg;

        public MessageListener() {
            end = false;
        }

        public void on_data_available(DataReader reader) {
            MessageDataReader MessageReader =
                (MessageDataReader)reader;
            
            try {
                MessageReader.take(
                    _dataSeq, _infoSeq,
                    ResourceLimitsQosPolicy.LENGTH_UNLIMITED,
                    SampleStateKind.ANY_SAMPLE_STATE,
                    ViewStateKind.ANY_VIEW_STATE,
                    InstanceStateKind.ANY_INSTANCE_STATE);

                for(int i = 0; i < _dataSeq.size(); ++i) {
                    SampleInfo info = (SampleInfo)_infoSeq.get(i);

                    if (info.valid_data) {
                        msg = (Message)_dataSeq.get(i);

                        if (msg.msg.equals("quit")) {
                            end = true;
                        } else if (!end) {
                            System.out.println(
                                "[" + msg.time.month + "/" + 
                                      msg.time.day + "/" +
                                      msg.time.year + " " +
                                      msg.time.hour + ":" +
                                      msg.time.minute + ":" +
                                      msg.time.second +
                                "] " + msg.msg);
                        }
                    }
                }
            } catch (RETCODE_NO_DATA noData) {
                // No data to process
            } finally {
                MessageReader.return_loan(_dataSeq, _infoSeq);
            }
        }
    }
}

