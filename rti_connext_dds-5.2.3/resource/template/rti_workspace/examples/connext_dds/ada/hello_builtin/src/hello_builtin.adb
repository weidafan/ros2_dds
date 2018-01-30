with DDS.DomainParticipantFactory;
with DDS.DomainParticipant;
with DDS.Topic;
with DDS.Builtin_String_TypeSupport;
with Ada.Text_IO;
with Ada.Direct_IO;
with Ada.Exceptions;
with HelloPublisher;
with HelloSubscriber;

package body Hello_Builtin is
   use Ada.Text_IO;

   package Int_IO is new Ada.Direct_IO (Integer);

   procedure usage is
   begin
      Put_Line ("Usage:");
            Put_Line ("    Hello pub [arguments]     Run as publisher");
            Put_Line ("    Hello sub [arguments]     Run as subscriber");
            Put_Line ("Where arguments are:");
            Put_Line ("    -h | --help               Shows this page");
            Put_Line ("    -v | --verbose            Increase output verbosity (can be repeated)");
            Put_Line ("    -d | --domain <domainID>  Sets the DDS domain ID [default=" & DEFAULT_DOMAIN_ID'Img & "]");
            Put_Line ("    -t | --topic <name>       Sets topic name [default=[" & DDS.To_Standard_String (DEFAULT_TOPIC_NAME) & "]");
            Put_Line ("    -s | --size <num>         Sets payload size in bytes [default=" & DEFAULT_PAYLOAD'Img & "]");
            Put_Line ("    -c | --sampleCount <num>  Sets the number of sample to send/receive [default=0(UNLIMITED)]");
            Put_Line ("");
   end usage;

   procedure startApplication (arg : CommandLineArguments) is
      participant : DDS.DomainParticipant.Ref_Access;
      topic       : DDS.Topic.Ref_Access;

      use type DDS.DomainParticipant.Ref_Access;
      use type DDS.Topic.Ref_Access;
   begin
      Put_Line ("# The output below depends on the QoS profile");
      Put_Line ("# provided to this application.");
      Put_Line ("# -> For more information on the provided example");
      Put_Line ("#    profiles, please see the Getting Started Guide.");
      Put_Line ("# -> For detailed product performance metrics, visit");
      Put_Line ("#    http://www.rti.com/products/data_distribution/index.html");
      Put_Line ("#    and click on Benchmarks.");
      Put_Line ("");

      --  This example creates DDS entities using the default QoS.
      --  The default QoS can be modified in two ways:
      --  1. By placing a file called 'USER_QOS_PROFILES.xml' in the directory
      --     where the application is launched.
      --  2. By setting the environment variable 'NDDS_QOS_PROFILES' to point
      --     to a valid file containing NDDS QoS profile definitions.
      --
      --  This section check if a QoS profile file is accessible, and prints
      --  a warning if that's not true.

      --  First look in the current directory to see if the USER_QOS_PROFILES.xml
      --  file exist.

      declare
         profile : Int_IO.File_Type;
      begin
         Int_IO.Open (profile, Int_IO.In_File, "USER_QOS_PROFILES.xml");
         if Int_IO.Is_Open (profile) then
            Int_IO.Close (profile);
         else
            raise FAILURE;
         end if;
      exception
         when others =>
            Put_Line ("! Warning:");
            Put_Line ("! Default QoS profile definition file not found");
            Put_Line ("! The application will use the DDS default QoS.");
            Put_Line ("! If you want to use different QoS, make sure you have the QoS definition file");
            Put_Line ("! (USER_QOS_PROFILES.xml) in the current working directory");
            Put_Line ("! or set the environment variable NDDS_QOS_PROFILES to point");
            Put_Line ("! to a file containing the default QoS profile");
            return;
      end;

      if arg.verbose > 0 then
         Put_Line ("Creating domain participant...");
      end if;

      participant := DDS.DomainParticipantFactory.Get_Instance.Create_Participant
        (DDS.DomainId_T (arg.domainId),
         DDS.DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
         null,
         DDS.STATUS_MASK_NONE);
      if participant = null then
         Put_Line ("! Unable to create DDS domain participant");
         raise FAILURE;
      end if;

      --  No type registering....

      --  Creates the topic.
      --  The following command will create the topic without
      --  installing any status callback listener.
      --  If you want to create a topic with different QoS,
      --  use DDS.DomainParticipant.get_default_topic_qos
      --  to obtain a copy of the default topic QoS, change them,
      --  then use them instead of DDS_TOPIC_QOS_DEFAULT:

      declare
         myQos : DDS.TopicQos;
      begin
         participant.Get_Default_Topic_Qos (myQos);

         --  Modify here the topic Qos

         participant.Set_Default_Topic_Qos (myQos);
      end;

      if arg.verbose > 0 then
         Put_Line ("Creating the topic....");
      end if;

      topic := participant.Create_Topic
        (arg.topicName,
         DDS.Builtin_String_TypeSupport.Get_Type_Name,
         DDS.DomainParticipant.TOPIC_QOS_DEFAULT,
         null,
         DDS.STATUS_MASK_NONE);
      if topic = null then
         Put_Line ("! Unable to create topic '" & DDS.To_Standard_String (arg.topicName));
         raise FAILURE;
      end if;

      Put_Line ("Topic created");

      --  Creates the publisher or subscriber
      if arg.mode = APP_MODE_PUBLISHER then
         HelloPublisher.writeSamples
           (participant,
            topic,
            arg.verbose,
            arg.dataSize,
            arg.sampleCount);
      elsif arg.mode = APP_MODE_SUBSCRIBER then
         HelloSubscriber.waitForTermination
           (participant,
            topic,
            arg.verbose,
            arg.sampleCount);
      else
         Put_Line ("! Undefined app mode, use pub/sub");
         raise FAILURE;
      end if;

      --  Shutdown when sample count is set
      if participant /= null then
         participant.Delete_Contained_Entities;
         DDS.DomainParticipantFactory.Get_Instance.Delete_Participant (participant);
      end if;
   exception
      when e : others =>
         Put_Line (Ada.Exceptions.Exception_Information (e));
         if participant /= null then
            participant.Delete_Contained_Entities;
            DDS.DomainParticipantFactory.Get_Instance.Delete_Participant (participant);
         end if;
   end startApplication;


end Hello_Builtin;
