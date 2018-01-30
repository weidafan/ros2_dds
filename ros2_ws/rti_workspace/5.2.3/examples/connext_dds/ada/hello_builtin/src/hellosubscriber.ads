with DDS.DomainParticipant;
with DDS.Topic;
with DDS.DataReaderListener;
with DDS.DataReader;

package HelloSubscriber is

   POLL_PERIOD_SEC : Duration := 1.000;
   ONE_MEGABYTE : Integer := 1024 * 1024;

   procedure waitForTermination
     (participant : DDS.DomainParticipant.Ref_Access;
      topic       : DDS.Topic.Ref_Access;
      verbose     : Integer;
      sampleCount : Integer);

   package readerListener is
      type Listener_Ref is new Standard.DDS.DataReaderListener.Ref with record
         theSampleId        : Integer := 0; --  Last received sample ID
         thePayloadSize     : Integer := 0; --  Set only when received the 1st sample
         theSampleLost      : Integer := 0; --  Counter for sample lost
         theSampleRcvdCount : Integer := 0; --  Counter of samples received
         theSampleRcvdMax   : Integer := 0; --  Maximum number of samples to receive
         theVerbose         : Integer := 0;
      end record;

      type Listener_Ref_Access is access all Listener_Ref'Class;

      overriding
      procedure On_Requested_Deadline_Missed
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.RequestedDeadlineMissedStatus);

      overriding
      procedure On_Requested_Incompatible_Qos
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.RequestedIncompatibleQosStatus);

      overriding
      procedure On_Sample_Rejected
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.SampleRejectedStatus);

      overriding
      procedure On_Liveliness_Changed
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.LivelinessChangedStatus);

      overriding
      procedure On_Sample_Lost
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.SampleLostStatus);

      overriding
      procedure On_Subscription_Matched
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access;
         Status     : in DDS.SubscriptionMatchedStatus);

      overriding
      procedure On_Data_Available
        (Self       : not null access Listener_Ref;
         The_Reader : in DDS.DataReaderListener.DataReader_Access);

   end readerListener;

   listener      : aliased readerListener.Listener_Ref;

end HelloSubscriber;
