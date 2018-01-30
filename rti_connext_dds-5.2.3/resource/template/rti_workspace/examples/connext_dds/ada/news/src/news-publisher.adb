with DDS.DataWriter;
with DDS.Publisher;
with Ada.Text_IO;
with Ada.Calendar;
with Ada.Calendar.Formatting;

package body News.Publisher is
   use Ada.Text_IO;
   function Init (participant : DDS.DomainParticipant.Ref_Access;
                  topic       : DDS.Topic.Ref_Access;
                  verbose     : DDS.Long;
                  runSeconds  : Duration)
                  return NewsPublisher
   is
      dataWriter : DDS.DataWriter.Ref_Access;
      names      : constant LabelsArray :=
        (label_1'Access,
         label_2'Access,
         label_3'Access,
         label_4'Access,
         label_5'Access,
         label_6'Access);

      use type DDS.DataWriter.Ref_Access;
      use type DDS.Builtin_KeyedString_DataWriter.Ref_Access;
   begin
      return ret : NewsPublisher do
         ret.writer := null;
         --  Create DataWriter  --

         --  If you want to customize the writer QoS, use
         --  DDSPublisher::get_default_datawriter_qos() to
         --  initialize a local copy of the default QoS, modify them, then
         --  use them in the creation call below instead of
         --  DDS_DATAWRITER_QOS_DEFAULT.

         if verbose > 0 then
            Put_Line ("Creating the DataWriter...");
         end if;

         dataWriter := participant.Create_DataWriter
           (A_Topic    => topic,
            Qos        => DDS.Publisher.DATAWRITER_QOS_DEFAULT,
            A_Listener => null,
            Mask       => DDS.STATUS_MASK_NONE);
         if dataWriter = null then
            raise INIT_FAILURE with "Unable to create DataWriter";
         end if;

         --  The following narrow function should never fail, as it performs
         --  only a safe cast of the generic data writer into a specific
         --  DDSKeyedStringDataWriter.
         ret.writer := DDS.Builtin_KeyedString_DataWriter.Narrow (dataWriter);
         if ret.writer = null then
            raise INIT_FAILURE with "Unable to narrow DataWriter into KeyedStringDataWriter";
         end if;
         ret.runSeconds := runSeconds;

         --  Initialize news outlets  --
         ret.newsOutlets := new NewsOutletArray (names'Range);
         for i in names'Range loop
            Copy (ret.newsOutlets (i).name, names (i).all);
            ret.newsOutlets (i).writer := ret.writer;
            registerNewsOutlet (ret.newsOutlets (i)'Access);
         end loop;

      end return;
   end Init;

   procedure publish (pub : NewsPublisher) is
      nMsgs : integer := Integer (pub.runSeconds) / 2;
      index : integer;
      now   : Ada.Calendar.Time;
   begin
      while nMsgs > 0 loop
         now := Ada.Calendar.Clock;
         delay DELAY_TIME;
         Put_Line ("Articles published in last period as of " &
                  Ada.Calendar.Formatting.Image (Ada.Calendar.Seconds (now)));
         index := 1;
         for i in pub.newsOutlets'Range loop
            for i in 1 .. index loop
               publishNextArticle (pub.newsOutlets (i)'Access);
            end loop;
            index := index + 1;
         end loop;
         nMsgs := nMsgs - 1;
      end loop;

   end publish;

   procedure registerNewsOutlet (no : access NewsOutlet) is
      Instance_Data : DDS.KeyedString;
   begin
      --  When working with keyed data types, you can "register" an
      --  instance before writing it, which will give you back an
      --  "instance handle." By providing this handle back to the writer
      --  when you write a sample, you help the middleware locate its
      --  internal data structures associated with that instance,
      --  enabling the writer to work more efficiently.
      --
      --  Pre-registering an instance is optional; you can always pass a
      --  "nil" handle to the writer when writing, and it will
      --  recalculate the instance on the fly. Consider pre-registering
      --  your instance(s) if throughput and/or writer CPU usage are
      --  significant concerns.
      Copy (Instance_Data.key, no.name);
      no.handle := no.writer.Register_Instance (Instance_Data);
   end registerNewsOutlet;

   procedure publishNextArticle (no : access NewsOutlet) is
      instance_data : DDS.KeyedString;
      value  : constant DDS.String := DDS.To_DDS_String ("lorem ipsum " & no.articleCount'Img);
      name   : constant Standard.String := DDS.To_Standard_String (no.name);
      valueS : constant Standard.String := DDS.To_Standard_String (value);
   begin
      Copy (instance_data.key, no.name);
      Copy (instance_data.value, value);
      no.writer.write (instance_data, no.handle'Access);
      Put ("From:");
      Set_Col (16 - name'Length);
      Put (name);
      Put (": '");
      Put (valueS);
      Put_Line ("'");
      no.articleCount := no.articleCount + 1;
   end publishNextArticle;

end News.Publisher;
