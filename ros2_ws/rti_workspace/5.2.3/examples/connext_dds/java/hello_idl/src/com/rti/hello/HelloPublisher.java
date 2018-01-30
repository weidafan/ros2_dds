// ****************************************************************************
//         (c) Copyright, Real-Time Innovations, All rights reserved.       
//                                                                          
//         Permission to modify and use for internal purposes granted.      
// This software is provided "as is", without warranty, express or implied. 
//                                                                          
// ****************************************************************************

package com.rti.hello;


import com.rti.dds.domain.DomainParticipant;
import com.rti.dds.infrastructure.InstanceHandle_t;
import com.rti.dds.infrastructure.RETCODE_ERROR;
import com.rti.dds.infrastructure.StatusKind;
import com.rti.dds.publication.Publisher;
import com.rti.dds.topic.Topic;

// This import allow this file to see all the generated code
import com.rti.hello.idl.*;

//****************************************************************************
/**
 * Manage the data publication for the Hello example 
 */
public class HelloPublisher {
    // Maximum consecutive write error after stopping the write process
    private static final int MAX_CONSECUTIVE_WRITE_ERROR = 5;
    
    private HelloWorldDataWriter _theDataWriter;
    private int                  _theDataSize;
    private int                  _theVerbose;
    private int                  _theSampleCount = 0;

    // ************************************************************************
    /**
     * Builds a new HelloPublisher object and initialize the inner DDS 
     * entities.
     * This method only creates the entities, but it does not actually write
     * the data.
     * To write the data, use the method run().
     *  
     * @param participant the DDS Domain participant
     * @param topic       the DDS topic 
     * @param verbose     an integer to control the output verbosity
     * @param dataSize    the size of the payload data
     */
    public HelloPublisher(DomainParticipant participant,
            Topic topic,
            int verbose,
            int dataSize,
            int sampleCount) {
        _theDataSize = dataSize;
        _theVerbose = verbose;
        _theSampleCount = sampleCount;
        
        // Create the publisher. 
        // Just like the participant, if you want to customize the publisher QoS,
        // use DomainParticipant.get_default_publisher_qos() to 
        // initialize a local copy of the default QoS, modify them, then
        // use them in the creation call below instead of 
        //     DomainParticipant.PUBLISHER_QOS_DEFAULT.
        // For more info on publisher API, see:
        //     $NDDSHOME/doc/html/api_java/group__DDSPublisherModule.html
        //
        if (verbose > 0) {
            System.out.println("Creating publisher...");
        }
        Publisher publisher = participant.create_publisher(
                    DomainParticipant.PUBLISHER_QOS_DEFAULT, 
                    null,           // listener
                    StatusKind.STATUS_MASK_NONE);
        if (publisher == null) {
            System.err.println("! Unable to create DDS Publisher");
            throw new RuntimeException("HelloPublisher creation failed");
        }            
        
        // Creates the DDS Data writer. 
        // Just like before, if you want to customize the writer QoS,
        // use Publisher.get_default_datawriter_qos() to 
        // initialize a local copy of the default QoS, modify them, then
        // use them in the creation call below instead of 
        // DATAWRITER_QOS_DEFAULT.
        // For more data writer API info, see:
        //     $NDDSHOME/doc/html/api_c/group__DDSWriterModule.html
        //
        if (verbose > 0) {
            System.out.println("Creating the data writer...");
        }
        _theDataWriter = (HelloWorldDataWriter)
            publisher.create_datawriter(topic, 
                        Publisher.DATAWRITER_QOS_DEFAULT,
                        null,           // listener
                        StatusKind.STATUS_MASK_NONE);
        if (_theDataWriter == null) {
            System.err.println("! Unable to create DDS data writer\n");
            return;
        }
    }
    
    // ************************************************************************
    /**
     * Writes samples to DDS. This method never returns.
     */
    void writeSamples() {
        HelloWorld instance = new HelloWorld();
        
        // Initialize the data
        instance.prefix = "Hello world";
        instance.payload.setSize(_theDataSize);
        byte arr[] = (byte [])instance.payload.getPrimitiveArray();
        for (int i = 0; i < _theDataSize; ++i) {
            arr[i] = (byte)(i % 0xff);
        }
        
        System.out.println("Sending data...\n");
        int consecutiveErrors = 0;
        for (instance.sampleId = 0;; ++(instance.sampleId) ) {
            try {
                _theDataWriter.write(instance, InstanceHandle_t.HANDLE_NIL);
                // Always clear the error count in case of successful write
                consecutiveErrors = 0;
            } catch(RETCODE_ERROR e) {
                System.err.println("! Write error " + 
                        e.getClass().toString() + ": " + e.getMessage());
                if (++consecutiveErrors > MAX_CONSECUTIVE_WRITE_ERROR) {
                    System.out.println("! Reached maximum number of failure, " +
                        "stopping writer...");
                    return;
                }
            }
            if (_theVerbose > 0 && (instance.sampleId % 10000) == 0) {
                System.out.println("Sent " + 
                        Integer.toString(instance.sampleId) + 
                        " samples...");
            }
            if (_theSampleCount != 0 && (instance.sampleId >= _theSampleCount)) {
                System.out.println("\nSent " + 
                        Integer.toString(instance.sampleId) + 
                        " samples.");
                return;
            }
        }
    }
}
 
