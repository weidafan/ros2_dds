with DDS.DataReader;
with DDS.Subscriber;
with DDS.ContentFilteredTopic;
with DDS.TopicDescription;
with DDS.Builtin_KeyedString_DataReader;
with Ada.Text_IO;
with Ada.Calendar;
with Ada.Calendar.Formatting;

package body News.Subscriber is
   use Ada.Text_IO;
   procedure printArticle
     (article     : DDS.KeyedString;
      sample_info : DDS.SampleInfo)
   is
      name  : constant Standard.String := To_Standard_String (article.Key);
      value : constant Standard.String := To_Standard_String (article.Value);
   begin
      Put ("From:");
      Set_Col (16 - name'Length);
      Put (name);
      Put (": '");
      Put (value);
      Put ("'");
      if sample_info.Sample_State = DDS.READ_SAMPLE_STATE then
         Put_Line (" (cached)");
      else
         Put_Line ("");
      end if;
   end printArticle;

   procedure readArticles
     (participant   : DDS.DomainParticipant.Ref_Access;
      topic         : DDS.Topic.Ref_Access;
      verbose       : DDS.Long;
      runSeconds    : Duration;
      contentFilter : DDS.String)
   is
      dataReader    : DDS.DataReader.Ref_Access := null;
      reader        : DDS.Builtin_KeyedString_DataReader.Ref_Access := null;
      filteredTopic : DDS.ContentFilteredTopic.Ref_Access := null;
      description   : DDS.TopicDescription.Ref_Access := null;

      cftName        : constant DDS.String := DDS.To_DDS_String ("News Example (filtered)");
      noFilterParams : aliased DDS.String_Seq.Sequence;

      elapsedSeconds : Duration;
      now            : Ada.Calendar.Time;
     filterLength : DDS.Natural := 0;

      use type DDS.DataReader.Ref_Access;
      use type DDS.Builtin_KeyedString_DataReader.Ref_Access;
      use type DDS.ContentFilteredTopic.Ref_Access;
   begin
      --  Create Content-filtered-topic
      if verbose > 0 then
         Put_Line ("Creating the ContentFilteredTopic...");
      end if;

      filterLength := Length (contentFilter);
      if contentFilter /= NULL_STRING and filterLength > 0 then
         filteredTopic := participant.Create_Contentfilteredtopic
           (cftName,
            topic,
            contentFilter,
            noFilterParams'Access);
         if filteredTopic = null then
            raise INIT_FAILURE with "Unable to create content-filtered-topic";
         end if;
      end if;

      if filteredTopic = null then
         description := topic.As_TopicDescription;
      else
         description := DDS.TopicDescription.Ref_Access (filteredTopic);
      end if;

      --  Create DataReader  --

      --  If you want to customize the reader QoS, use
      --  DDSPublisher::get_default_datareader_qos() to
      --  initialize a local copy of the default QoS, modify them, then
      --  use them in the creation call below instead of
      --  DDS_DATAREADER_QOS_DEFAULT.

      if verbose > 0 then
         Put_Line ("Creating the DataReader...");
      end if;

      datareader := participant.Create_DataReader
        (description,
         DDS.Subscriber.DATAREADER_QOS_DEFAULT,
         null,
         DDS.STATUS_MASK_NONE);
      if dataReader = null then
         raise INIT_FAILURE with "Unable to create DataReader";
      end if;

      --  The following narrow function should never fail, as it performs
      --  only a safe cast of the generic data reader into a specific
      --  DDSKeyedStringDataReader.
      reader := DDS.Builtin_KeyedString_DataReader.Narrow (dataReader);
      if reader = null then
         raise INIT_FAILURE with "Unable to narrow DataReader into KeyedStringDataReader";
      end if;

      elapsedSeconds := 0.0;
      while elapsedSeconds < runSeconds loop
         delay 2.0;
         now := Ada.Calendar.Clock;
         Put_Line ("Available articles as of " &
                   Ada.Calendar.Formatting.Image (Ada.Calendar.Seconds (now)));
         declare
            received_data : aliased DDS.KeyedString_Seq.Sequence;
            sample_info   : aliased DDS.SampleInfo_Seq.Sequence;
         begin
            reader.Read
              (received_data'Access,
               sample_info'Access,
               DDS.LENGTH_UNLIMITED,
               DDS.ANY_SAMPLE_STATE,
               DDS.ANY_VIEW_STATE,
               DDS.ANY_INSTANCE_STATE);
            for i in 1 .. DDS.KeyedString_Seq.Get_Length (received_data'Access) loop
               printArticle (DDS.KeyedString_Seq.Get (received_data'Access, i),
                             DDS.SampleInfo_Seq.Get (sample_info'Access, i));
            end loop;
            reader.Return_Loan (received_data'Access, sample_info'Access);
         exception
            when DDS.NO_DATA =>
               null; --  ignore this error
         end;
         Put_Line ("");

         elapsedSeconds := elapsedSeconds + 2.0;
      end loop;

   end readArticles;

end News.Subscriber;
