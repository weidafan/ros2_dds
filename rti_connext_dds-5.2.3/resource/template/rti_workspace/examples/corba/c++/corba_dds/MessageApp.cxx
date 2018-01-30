/* 
 (c) Copyright, Real-Time Innovations, 10/01/2006 
 All rights reserved.
 No duplications, whole or partial, manual or electronic, may be made
 without express written permission.  Any such copies, or
 revisions thereof, must display this notice unaltered.
 This code contains trade secrets of Real-Time Innovations, Inc.

 The purpose of the following application is to show how CORBA and RTI DDS
 can share a common set of types and coexist inside the same application.

 The application is a messaging application where a client (sender)
 sends text messages to a CORBA and a RTI DDS server (receiver).

 Client, CORBA server and RTI DDS server are implemented in this source
 file. The execution of one of them is determine through command line 
 parameters.

 To run the messaging application open three DOS windows:

 In the first window run the CORBA server:

 > Message -cr c:\reference.txt

 In the second window run the RTI DDS server:

 > Message -nr <domainId>

 In the thrid window run the Sender:

 > Message -s c:\reference.txt <domainId>

 The sender is an interactive application. When you run it the prompt
 '>sender' appears on the screen. Any message that you write will
 be send to the CORBA and RTI DDS servers. Those servers will print that
 message along with a timestamp on the screen.

===================================================================== */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "Message.h"
#include "MessageS.h"
#include "MessageSupport.h"

/*=============================================================================
  @brief Function that shows how to use the message app
===============================================================================*/

void usage(){
    fprintf(stdout,"usage: MessageApp OPTIONS\n"
                   "       -cr <receiver object reference file>: Run CORBA message receiver.\n"
                   "       -nr <domainId>: Run RTI DDS message receiver within specified domain.\n"
                   "       -s <receiver object reference file> <domainId>: Run client used to send messages to CORBA and RTI DDS receivers within specified domain.\n"
            );     
    exit(1);
}

/*=============================================================================
  @brief The following function prints the input message
===============================================================================*/

void printMessage(const Message & msg) {
    printf("[%d/%d/%d %d:%d:%d] %s",
           msg.time.month,msg.time.day,msg.time.year,
           msg.time.hour,msg.time.minute,msg.time.second,
           msg.msg.in());
}


/*=============================================================================
  @brief Class that implements a CORBA message receiver. This class is associated
  to the interface MessageReceiver defined in the IDL file
===============================================================================*/

class CORBAMessageReceiver: public virtual POA_MessageReceiver
{
public:
  virtual void sendMessage(const ::Message & msg);
};

/*
*/

void CORBAMessageReceiver::sendMessage(const ::Message & msg) 
{
    printMessage(msg);
}

/*=============================================================================
  @brief Class that implements the RTI DDS Message Reader listener
===============================================================================*/

class MessageReceiverListener: public DDSDataReaderListener {
public:
    virtual void on_requested_deadline_missed(
        DDSDataReader* /*reader*/,
        const DDS_RequestedDeadlineMissedStatus& /*status*/) {}
    
    virtual void on_requested_incompatible_qos(
        DDSDataReader* /*reader*/,
        const DDS_RequestedIncompatibleQosStatus& /*status*/) {}
    
    virtual void on_sample_rejected(
        DDSDataReader* /*reader*/,
        const DDS_SampleRejectedStatus& /*status*/) {}

    virtual void on_liveliness_changed(
        DDSDataReader* /*reader*/,
        const DDS_LivelinessChangedStatus& /*status*/) {}

    virtual void on_sample_lost(
        DDSDataReader* /*reader*/,
        const DDS_SampleLostStatus& /*status*/) {}

    virtual void on_subscription_match(
        DDSDataReader* /*reader*/,
        const DDS_SubscriptionMatchedStatus& /*status*/) {}

    virtual void on_data_available(DDSDataReader* reader);
};

/*
*/

void MessageReceiverListener::on_data_available(DDSDataReader* reader)
{
    DDSTopicDescription * td;
    DDS_SampleInfo sampleInfo;
    DDS_ReturnCode_t result; 
    Message instance;
    MessageDataReader * r;

    Message_initialize(&instance);
    td=reader->get_topicdescription();
    r = (MessageDataReader *) reader;

    result=r->take_next_sample(instance,sampleInfo);    

    while (result!=DDS_RETCODE_NO_DATA) {
        if (sampleInfo.valid_data) {
            printMessage(instance);
        }
        result=r->take_next_sample(instance,sampleInfo);
    }

    Message_finalize(&instance);
}


/*=============================================================================
  @brief RTI DDS Exception
===============================================================================*/

class RTIDDSException{
private:
    char message[255];
public:
    RTIDDSException(const char * msg) {
        message[0] = '\0';

        if (msg == NULL)
            return;

        if (strlen(msg) < 255) {
            strcpy(message,msg);
        }
    };

    /**/
    char * getMessage() {
        return message;
    }
};

/*=============================================================================
  @brief Class that implements a RTI DDS message end point (sender/receiver) 
===============================================================================*/

class RTIDDSMessageEndPoint {
protected:
    DDSDomainParticipantFactory   * factory;
    DDSDomainParticipant          * participant;
    DDSTopic                      * topic;

public:
    RTIDDSMessageEndPoint();
    virtual ~RTIDDSMessageEndPoint();
    void initialize(DDS_DomainId_t domainId) throw (RTIDDSException);
};


/*
*/

RTIDDSMessageEndPoint::RTIDDSMessageEndPoint(){
    factory=NULL;
    participant=NULL;
    topic = NULL;        
}

/*
*/

RTIDDSMessageEndPoint::~RTIDDSMessageEndPoint() {
    if (participant != NULL) {
        participant->delete_contained_entities();
        factory->delete_participant(participant);
    }
}

/*
*/

void RTIDDSMessageEndPoint::initialize(DDS_DomainId_t domainId) throw (RTIDDSException)
{
    DDS_ReturnCode_t retcode;        
    DDS_DomainParticipantQos participant_qos;

    factory = DDSDomainParticipantFactory::get_instance();

    if (factory == NULL) {
        throw RTIDDSException("get_instance error");
    }
                
    factory->get_default_participant_qos(participant_qos);
    
    participant = factory->create_participant(domainId,participant_qos,NULL,DDS_STATUS_MASK_NONE);
    
    if (participant == NULL) {
        throw RTIDDSException("create_participant error");
    }

    retcode = MessageTypeSupport::register_type(participant,MessageTYPENAME);

    if (retcode != DDS_RETCODE_OK) {
        throw RTIDDSException("register_type error");
    }

    topic = participant->create_topic("Message",MessageTYPENAME,
                DDS_TOPIC_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);

    if (topic == NULL) {
        throw RTIDDSException("create_topic error");
    }
}

/*=============================================================================
  @brief Class that implements a RTI DDS message sender
===============================================================================*/

class RTIDDSMessageSender : public RTIDDSMessageEndPoint {
private:
    DDSPublisher * publisher;
    MessageDataWriter * writer;
public:
    RTIDDSMessageSender();
    virtual ~RTIDDSMessageSender();
    void initialize(int domainId) throw (RTIDDSException);

    /* Send message routine */
    void sendMessage(const Message & msg) throw (RTIDDSException);
};

/*
 */

RTIDDSMessageSender::RTIDDSMessageSender() {
    publisher = NULL;
    writer = NULL;
}

/*
 */

RTIDDSMessageSender::~RTIDDSMessageSender() {
}

/*
 */

void RTIDDSMessageSender::initialize(DDS_DomainId_t domainId) throw (RTIDDSException)
{
    RTIDDSMessageEndPoint::initialize(domainId);

    publisher = participant->create_publisher(DDS_PUBLISHER_QOS_DEFAULT, 
                    NULL /* listener */, DDS_STATUS_MASK_NONE);

    if (publisher == NULL) {
        throw RTIDDSException("create_publisher");
    }

    writer = (MessageDataWriter *) publisher->create_datawriter(topic,
                 DDS_DATAWRITER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);

    if (writer == NULL) {
        throw RTIDDSException("create_datawriter error");
    }
}

/*
 */

void RTIDDSMessageSender::sendMessage(const Message & msg) throw (RTIDDSException)
{
    DDS_ReturnCode_t retcode;
    DDS_InstanceHandle_t instanceHandle;

    instanceHandle=DDS_HANDLE_NIL;

    retcode = writer->write(msg,instanceHandle);

    if (retcode != DDS_RETCODE_OK) {
        throw RTIDDSException("write error");
    }
}

/*=============================================================================
  @brief Class that implements a RTI DDS message receiver
===============================================================================*/

class RTIDDSMessageReceiver : public RTIDDSMessageEndPoint {
private:
    DDSSubscriber * subscriber;
    MessageDataReader * reader;
    MessageReceiverListener * listener;
public:
    RTIDDSMessageReceiver();
    virtual ~RTIDDSMessageReceiver();
    void initialize(DDS_DomainId_t domaindId) throw (RTIDDSException);

    /* Send message routine */
    void sendMessage(const Message & msg) throw (RTIDDSException);
};

/*
 */

RTIDDSMessageReceiver::RTIDDSMessageReceiver() {
    subscriber = NULL;
    reader = NULL;
    listener = NULL;
}

/*
 */

RTIDDSMessageReceiver::~RTIDDSMessageReceiver() {
    delete listener;
}

/*
 */

void RTIDDSMessageReceiver::initialize(DDS_DomainId_t domainId) throw (RTIDDSException)
{
    RTIDDSMessageEndPoint::initialize(domainId);

    subscriber = participant->create_subscriber(DDS_SUBSCRIBER_QOS_DEFAULT, 
                    NULL /* listener */, DDS_STATUS_MASK_NONE);

    if (subscriber == NULL) {
        throw RTIDDSException("create_subscriber");
    }

    listener = new MessageReceiverListener();

    if (listener == NULL) {
        throw RTIDDSException("new listener error");
    }

    reader = (MessageDataReader *) subscriber->create_datareader(topic,
                 DDS_DATAREADER_QOS_DEFAULT, listener /* listener */, DDS_STATUS_MASK_ALL);

    if (reader == NULL) {
        throw RTIDDSException("create_datareader error");
    }
}


/*=============================================================================
  @brief The following function is called to run the RTI DDS server (receiver)
===============================================================================*/

void runDDSReceiver(int /* argc */,char ** argv){
    RTINtpTime sleep_sec;
    RTIDDSMessageReceiver receiver;

    try{
        printf("Initializing RTI DDS receiver ...\n");
        
        receiver.initialize((DDS_DomainId_t)strtol(argv[2],NULL,10));

        printf("RTI DDS receiver running ...\n");

        RTINtpTime_packFromNanosec(sleep_sec,4,0);
    
        while (1) {
            RTIOsapiThread_sleep(&sleep_sec);
        }
    }catch(...){
        printf("Error starting RTI DDS receiver\n");
    }

}

/*=============================================================================
  @brief The following function is called to run the CORBA server (receiver)
===============================================================================*/

void runCORBAReceiver(int argc,char ** argv) {
    RTINtpTime sleep_sec;
    FILE * handle=NULL;
    CORBA::ORB_var orb;
    CORBA::Object_var obj;
    PortableServer::POA_var poa;
    PortableServer::POAManager_var mgr;
    CORBAMessageReceiver * servant;
    MessageReceiver_var servant_var;

    try{        
        RTINtpTime_packFromNanosec(sleep_sec,0,100000000);             

        //Initialize ORB
        orb=CORBA::ORB_init(argc,argv);

        //get Reference to Root POA
        obj=orb->resolve_initial_references("RootPOA");
        poa=PortableServer::POA::_narrow(obj.in());

        //Activate the POA Manager
        mgr = poa->the_POAManager();
        mgr->activate();
        
        servant=new CORBAMessageReceiver();
        servant_var=servant->_this();

        CORBA::String_var str=orb->object_to_string(servant_var.in());
        
        //Write YellowPagesServer reference to a file
        handle=fopen(argv[2],"wb");

        if (!handle){
            throw 0;
        }

        fprintf(handle,"%s",str.in());
        fclose(handle);

        printf("CORBA SendData server running ...\n");

    }catch(...){
        printf("Error starting CORBA Server\n");
        return;
    }

    try {
        
        bool done;
        done=false;

        while (!done){
            if (orb->work_pending()){
                orb->perform_work();
            }

            RTIOsapiThread_sleep(&sleep_sec);
        }

    } catch(...) {
        printf("Error executing CORBA Server\n");
        return;
    }

}

/*=============================================================================
  @brief The following function is called to run the message sender

  The message sender sends every message to the CORBA and RTI DDS servers
===============================================================================*/

#define REFERENCE_MAX_SIZE 2010

void runSender(int argc,char ** argv){    
    char line[MSG_MAX_LENGTH + 1];
    char reference[REFERENCE_MAX_SIZE];
    FILE * handle;
    Message msg;
    RTIDDSMessageSender sender;
    MessageReceiver_var receiver;
    time_t seconds;
    struct tm * tm;

    try {
        /* Initialize RTI DDS sender */
        sender.initialize((DDS_DomainId_t)strtol(argv[3],NULL,10));

        /* Obtain CORBA receiver reference */
        handle=fopen(argv[2],"rb");
        
        if (!handle) {
            printf("Error reading server reference\n");
            return;
        }
        
        fgets(reference,REFERENCE_MAX_SIZE,handle);
        fclose(handle);

        CORBA::ORB_var orb=CORBA::ORB_init(argc,argv);
        CORBA::Object_var obj = orb->string_to_object(reference);

        if (CORBA::is_nil(obj.in())) {
            throw 0;
        }

        receiver=MessageReceiver::_narrow(obj.in());

        if (CORBA::is_nil(receiver.in())) {
            throw 0;
        }

        while (true) {
            printf("sender> ");            
            fgets(line,MSG_MAX_LENGTH,stdin);
            line[strlen(line)]='\0';
            
            if (!strcmp(line,"\n")) continue;
            if (strstr(line,"quit")) return;

            seconds = time(NULL);
            tm = localtime(&seconds); 

            msg.msg = (const char *)line;
            msg.time.year = tm->tm_year + 1900;
            msg.time.month = tm->tm_mon;
            msg.time.day = tm->tm_mday;
            msg.time.hour = tm->tm_hour;
            msg.time.minute = tm->tm_min;
            msg.time.second = tm->tm_sec;

            receiver->sendMessage(msg);
            sender.sendMessage(msg);
        }

    } catch(const CORBA::Exception & e) {
        printf("Client Error: CORBA Exception raised: %s\n",e._name());
    } catch(RTIDDSException & e) {
        printf("Client Error: RTI DDS Exception raised: %s\n",e.getMessage());
    } catch(...) {
        printf("Client Error: UNKNOWN Exception raised\n");
    }
}


/*=============================================================================
  @brief Entry point
===============================================================================*/

int main(int argc,char ** argv)
{
    if (argc<2){
        usage();
        return 1;
    }

    if (!strcmp(argv[1],"-nr")) {

        if (argc!=3) {
            usage();
            return -1;
        }
        runDDSReceiver(argc,argv);
    
    } else if (!strcmp(argv[1],"-cr")) {

        if (argc!=3) {
            usage();
            return -1;
        }
        
        runCORBAReceiver(argc,argv);
    } else {
        
        if (argc!=4) {
            usage();
            return -1;
        }

        runSender(argc,argv);
    }

    return 0;
}
