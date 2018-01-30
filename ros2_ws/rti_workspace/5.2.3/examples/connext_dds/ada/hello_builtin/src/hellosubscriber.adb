with DDS.Subscriber;
with DDS.Builtin_String_DataReader;
with Ada.Text_IO;
with Ada.Calendar;
with Ada.Strings.Fixed;

package body HelloSubscriber is
   use Ada.Text_IO;
   use Standard.DDS;

   --  Called for every valid sample received from DDS.
   --  This simply copy the
   --  received data in the class properties to be processed by the main
   --  thread (running waitForTermination).
   procedure processData (instance : String) is
      hyphenIndex : Integer;
   begin
      --  The received string contains the sequence number in the first 10
      --  character, followed by a bunch of letters ABCDEFGHIJKLMN....
      --
      --  Parsing the string into an integer is relatively expensive and
      --  could impact the throughput. But since this is just an example,
      --  let's keep it simple.
      hyphenIndex := Ada.Strings.Fixed.Index (instance, "-");
      declare
         seq : constant String := instance (instance'First + 1 .. instance'First + hyphenIndex - 2);
      begin
         listener.theSampleId := Integer'Value (seq);
         listener.theSampleRcvdCount := listener.theSampleRcvdCount + 1;
         if listener.thePayloadSize = 0 then
            listener.thePayloadSize := instance'Length;
         end if;
      end;
   end processData;

   procedure waitForTermination
     (participant : DDS.DomainParticipant.Ref_Access;
      topic       : DDS.Topic.Ref_Access;
      verbose     : Integer;
      sampleCount : Integer)
   is
      dataReader : DDS.DataReader.Ref_Access;
      reader     : DDS.Builtin_String_DataReader.Ref_Access;

      --  Statistics variables
      stat_first_sequence_id : Integer := 0;      --  ID of first sample
      time_now               : Ada.Calendar.Time; --  Time for every iteration
      start_time             : Ada.Calendar.Time; --  Time of first iteration w/samples
      stat_delta_time_sec    : Integer;           --  Num. secs since first sample
      last_sample_id         : Integer := 0;      --  Copy of the last sample_id
      last_sample_lost       : Integer := 0;      --  Copy of the last sample_lost
      prev_sample_id         : Integer := 0;      --  ID of sample lost on prev. iteration
      prev_sample_lost       : Integer := 0;      --  Sample lost of prev. iteration
      stat_total_samples     : Integer := 0;      --  Total # of msgs received
      stat_samples_lost      : Integer;           --  Samples lost for the last period
      stat_total_sample_per_sec   : Float := 0.0;
      stat_current_sample_per_sec : Float := 0.0;
      stat_throughput             : Float := 0.0;

      use type DDS.DataReader.Ref_Access;
      use type DDS.Builtin_String_DataReader.Ref_Access;
   begin
      listener.theSampleRcvdMax := sampleCount;
      listener.theVerbose := verbose;

      if verbose > 0 then
         Put_Line ("Creating the data reader...");
      end if;
      dataReader := participant.Create_DataReader
        (topic.As_TopicDescription,
         DDS.Subscriber.DATAREADER_QOS_DEFAULT,
         listener'Access,
         DDS.STATUS_MASK_ALL);
      if dataReader = null then
         Put_Line ("! Unable to create DDS Data Reader");
         return;
      end if;
      reader := DDS.Builtin_String_DataReader.Narrow (dataReader);
      if reader = null then
         Put_Line ("! Unable to narrow DDS.Datareader");
         return;
      end if;

      start_time := Ada.Calendar.Clock;
      Put_Line ("");
      Put_Line ("Sec.from   |Total     |Total Lost|Curr Lost|Average    |Current    |Throughput");
      Put_Line ("start      |samples   |samples   |samples  |smpls/sec  |smpls/sec  |Mbps");
      Put_Line ("-----------+----------+----------+---------+-----------+-----------+-----------");

      loop
         delay POLL_PERIOD_SEC;
         if listener.theSampleRcvdMax > 0 and then
           listener.theSampleRcvdCount >= listener.theSampleRcvdMax
         then
            Put_Line ("Received" & listener.theSampleRcvdCount'Img & " samples");
            reader.Set_Listener (null, DDS.STATUS_MASK_NONE);
            exit;
         end if;

         --  If the last sample_id received is < than the older one received,
         --  it is because the publisher has restarted or there are two
         --  publishers in the system.
         --  In this case the stats won't be correct, so terminate the application
         if listener.theSampleId < last_sample_id then
            Put_Line ("Detected multiple publishers, or the publisher was restarted.");
            Put_Line ("If you have multiple publishers on the network or you restart");
            Put_Line ("the publisher, the statistics produced won't be accurate.");
            exit;
         end if;

         --  Make a copy of the last sample received
         last_sample_id := listener.theSampleId;
         last_sample_lost := listener.theSampleLost;
         time_now := Ada.Calendar.Clock;

         if last_sample_id = 0 then
            if verbose > 0 then
               Put_Line ("No data...");
            end if;
            --  continue;
         end if;

         --  If this is the first sample received, mark the sample ID and
         --  get the time
         if stat_first_sequence_id = 0 then
            stat_first_sequence_id := last_sample_id;
            start_time := Ada.Calendar.Clock;
            --  Don't consider this iteration in the statistics, as it is
            --  not meaningful.
            prev_sample_id := last_sample_id;
            prev_sample_lost := last_sample_lost;
            --  continue;
         end if;

         --  Then calculate the statistics
         stat_delta_time_sec := Integer (Ada.Calendar."-" (time_now, start_time));
         stat_total_samples := last_sample_id - stat_first_sequence_id - last_sample_lost;
         stat_total_sample_per_sec := Float (stat_total_samples) / Float (stat_delta_time_sec);
         stat_current_sample_per_sec := Float (last_sample_id - prev_sample_id) / Float (POLL_PERIOD_SEC);
         stat_samples_lost := last_sample_lost - prev_sample_lost;
         stat_throughput := Float (listener.thePayloadSize) *
           Float (last_sample_id - prev_sample_id - stat_samples_lost) *
           Float (8.0) / Float (ONE_MEGABYTE);
         --  "{0,11} {1,10} {2,10} {3,9} {4,13:F} {5,10:F} {6,10:F}"
         Set_Col (12 - stat_delta_time_sec'Img'Length);
         Put (stat_delta_time_sec'Img);
         Set_Col (23 - stat_total_samples'Img'Length);
         Put (stat_total_samples'Img);
         Set_Col (34 - last_sample_lost'Img'Length);
         Put (last_sample_lost'Img);
         Set_Col (44 - stat_samples_lost'Img'Length);
         Put (stat_samples_lost'Img);
         Set_Col (56 - stat_total_sample_per_sec'Img'Length);
         Put (stat_total_sample_per_sec'Img);
         Set_Col (68 - stat_current_sample_per_sec'Img'Length);
         Put (stat_current_sample_per_sec'Img);
         Set_Col (80 - stat_throughput'Img'Length);
         Put_Line (stat_throughput'Img);
         prev_sample_id := last_sample_id;
         prev_sample_lost := last_sample_lost;

      end loop;

      participant.Delete_DataReader (dataReader);
   end waitForTermination;


   package body readerListener is
      use Standard.DDS;

      procedure On_Requested_Deadline_Missed
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.RequestedDeadlineMissedStatus)
      is
         pragma Unreferenced (The_Reader);
         pragma Unreferenced (Status);
      begin
         if Self.theVerbose > 0 then
            Put_Line ("->Callback: requested deadline missed.");
         end if;
      end On_Requested_Deadline_Missed;

      procedure On_Requested_Incompatible_Qos
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.RequestedIncompatibleQosStatus)
      is
         pragma Unreferenced (The_Reader);
         pragma Unreferenced (Status);
      begin
         if Self.theVerbose > 0 then
            Put_Line ("->Callback: requested incompatible Qos.");
         end if;
      end On_Requested_Incompatible_Qos;

      procedure On_Sample_Rejected
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.SampleRejectedStatus)
      is
         pragma Unreferenced (The_Reader);
         pragma Unreferenced (Status);
      begin
         if Self.theVerbose > 0 then
            Put_Line ("->Callback: sample rejected.");
         end if;
      end On_Sample_Rejected;

      procedure On_Liveliness_Changed
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.LivelinessChangedStatus)
      is
         pragma Unreferenced (The_Reader);
         pragma Unreferenced (Status);
      begin
         if Self.theVerbose > 0 then
            Put_Line ("->Callback: liveliness changed.");
         end if;
      end On_Liveliness_Changed;

      procedure On_Sample_Lost
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.SampleLostStatus)
      is
         pragma Unreferenced (The_Reader);
         pragma Unreferenced (Status);
      begin
         Self.theSampleLost := Self.theSampleLost + 1;
         if Self.theVerbose > 0 then
            Put_Line ("->Callback: sample lost.");
         end if;
      end On_Sample_Lost;

      procedure On_Subscription_Matched
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.SubscriptionMatchedStatus)
      is
         pragma Unreferenced (The_Reader);
         pragma Unreferenced (Status);
      begin
         if Self.theVerbose > 0 then
            Put_Line ("->Callback: subscription matched.");
         end if;
      end On_Subscription_Matched;

      procedure On_Data_Available
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access)
      is
           data_reader : constant access constant DDS.Builtin_String_DataReader.Ref :=
           Builtin_String_DataReader.Ref_Access (The_Reader);
           dataSeq : aliased Standard.DDS.String_Seq.Sequence;
           infoSeq : aliased Standard.DDS.SampleInfo_Seq.Sequence;
      begin
         if Self.theSampleRcvdMax /= 0 and then
           Self.theSampleRcvdCount >= Self.theSampleRcvdMax then
            return;
         end if;
         begin
            data_reader.Take (dataSeq'Access, infoSeq'Access);

            for i in 1 .. DDS.String_Seq.Get_Length (dataSeq'Access) loop
               if DDS.SampleInfo_Seq.Get (infoSeq'Access, i).valid_data then
                  processData (DDS.To_Standard_String (DDS.String_Seq.Get (dataSeq'Access, i)));
               end if;
            end loop;
            data_reader.Return_Loan (dataSeq'Access, infoSeq'Access);
         exception
            when DDS.NO_DATA =>
               --  No data to process
               if Self.theVerbose > 0 then
                  Put_Line ("No data to process.");
               end if;
         end;
      end On_Data_Available;

   end readerListener;

end HelloSubscriber;
