with DDS.DomainParticipantFactory;
with DDS.DomainParticipant;
with DDS.Topic;
with DDS.Builtin_KeyedString_TypeSupport;
with Ada.Text_IO;
with News.Publisher;
with News.Subscriber;

package body News is
   use Ada.Text_IO;


   procedure usage is
   begin
      Put_Line ("Usage:");
      Put_Line ("    News pub [arguments]     Run as publisher");
      Put_Line ("    News sub [arguments]     Run as subscriber");
      Put_Line ("Where arguments are:");
      Put_Line ("  -h | --help                   " &
                "Shows this page");
      Put_Line ("  -v | --verbose                " &
                "Increase output verbosity (can be repeated)");
      Put_Line ("  -d | --domain <domainID>      " &
                "Sets the DDS domain ID [default=" &
                DEFAULT_DOMAIN_ID'Img & "]");
      Put_Line ("  -r | --runSeconds <integer>   " &
                "Sets the number of seconds to run [default=20]");
      Put_Line ("  -f | --filterExpression <SQL> " &
                "Sets a content filter on the data");
      Put_Line ("");
   end usage;

   procedure startApplication (arg : CommandLineArguments) is
      factory     : DDS.DomainParticipantFactory.Ref_Access;
      participant : DDS.DomainParticipant.Ref_Access;
      topic       : DDS.Topic.Ref_Access;
      pub         : News.Publisher.NewsPublisher;

      use type DDS.DomainParticipant.Ref_Access;
      use type DDS.Topic.Ref_Access;
   begin
      factory := DDS.DomainParticipantFactory.Get_Instance;

      --  If you need to customize any DDS factory QoS, uncomment the following
      --  code:
--        declare
--           factoryQos : DDS.DomainParticipantFactoryQos;
--        begin
--           factory.Get_Qos (factoryQos);
--
--           --  Modify the factory QoS here
--
--           factory.Set_Qos (factoryQos);
--        end;

      --  Creates the DDS Domain Participant.
      --  If you want to create a domain participant with different QoS,
      --  use DDSDomainParticipantFactory::get_default_participant_qos
      --  to obtain a copy of the default participant QoS, change them,
      --  then use them instead of DDS_PARTICIPANT_QOS_DEFAULT:
--        declare
--           myQos : DDS.DomainParticipantQos;
--        begin
--           factory.Get_Default_Participant_Qos (myQos);
--           --  Modify the participant QoS here
--           factory.Set_Default_Participant_Qos (myQos);
--        end;

      if arg.verbose > 0 then
         Put_Line ("Creating domain participant...");
      end if;

      participant := factory.Create_Participant
        (Arg.DomainId,
         DDS.DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
         null,                  --  No listener
         DDS.STATUS_MASK_NONE); --  No listener callbacks
      if participant = null then
         Put_Line ("! Unable to create DomainParticipant");
         raise FAILURE;
      end if;

      --  Creates the topic.
      --  If you want to create a topic with different QoS,
      --  use DDSDomainParticipant::get_default_topic_qos
      --  to obtain a copy of the default topic QoS, change them,
      --  then use them instead of DDS_TOPIC_QOS_DEFAULT:
--        declare
--           myQos : DDS.TopicQos;
--        begin
--           participant.Get_Default_Topic_Qos (myQos);
--           --  Modify the topic QoS here
--           participant.Set_Default_Topic_Qos (myQos);
--        end;

      if arg.verbose > 0 then
         Put_Line ("Creating the topic...");
      end if;

      topic := participant.Create_Topic
        (TOPIC_NAME,
         DDS.Builtin_KeyedString_TypeSupport.Get_Type_Name,
         DDS.DomainParticipant.TOPIC_QOS_DEFAULT,
         null,                  --  no listener
         DDS.STATUS_MASK_NONE); --  no listener callbacks
      if topic = null then
         Put_Line ("! Unable to create topic");
         raise FAILURE;
      end if;

      --  Creates the publisher or subscriber
      if arg.mode = APP_MODE_PUBLISHER then
         pub := News.Publisher.Init
           (participant,
            topic,
            arg.verbose,
            arg.runSeconds);
         pub.Publish;
      elsif arg.mode = APP_MODE_SUBSCRIBER then
         News.Subscriber.readArticles
           (participant,
            topic,
            arg.verbose,
            arg.runSeconds,
            arg.contentFilter);
      end if;

      if arg.verbose > 0 then
         Put_Line ("Cleaning up...");
      end if;

      if participant /= null then
         --  Perform a clean shutdown of the participant and all the contained
         --  entities
         participant.Delete_Contained_Entities;
         factory.Delete_Participant (participant);
      end if;
   exception
      when others =>
         Put_Line ("An exception happened, exiting.");
         if participant /= null then
            --  Perform a clean shutdown of the participant and all the contained
            --  entities
            participant.Delete_Contained_Entities;
            factory.Delete_Participant (participant);
         end if;
   end startApplication;


end News;
