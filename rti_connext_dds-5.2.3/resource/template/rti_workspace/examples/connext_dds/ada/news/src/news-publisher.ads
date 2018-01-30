with DDS;
with DDS.DomainParticipant;
with DDS.Topic;
with DDS.Builtin_KeyedString_DataWriter;

package News.Publisher is

   INIT_FAILURE : exception;

   type NewsOutlet is record
      name         : DDS.String;
      writer       : DDS.Builtin_KeyedString_DataWriter.Ref_Access;
      handle       : aliased DDS.InstanceHandle_T;
      articleCount : DDS.Long := 0;
   end record;

   type NewsOutletArray is array (Positive range <>) of aliased NewsOutlet;
   type NewsOutletArray_Access is access all NewsOutletArray;

   type String_Access is access all Standard.String;
   type LabelsArray is array (Positive range <>) of String_Access;

   type NewsPublisher is tagged private;

   procedure publish (pub : NewsPublisher);

   function Init (participant : DDS.DomainParticipant.Ref_Access;
                  topic       : DDS.Topic.Ref_Access;
                  verbose     : DDS.Long;
                  runSeconds  : Duration)
   return NewsPublisher;


   procedure registerNewsOutlet (no : access NewsOutlet);

   procedure publishNextArticle (no : access NewsOutlet);

private

   type NewsPublisher is tagged record
      newsOutlets : NewsOutletArray_Access;
      writer      : DDS.Builtin_KeyedString_DataWriter.Ref_Access;
      runSeconds  : Duration;
   end record;

   label_1 : aliased String := "Reuters";
   label_2 : aliased String := "AP";
   label_3 : aliased String := "CNN";
   label_4 : aliased String := "Bloomberg";
   label_5 : aliased String := "NY Times";
   label_6 : aliased String := "Economist";

   DELAY_TIME : duration := 2.0;

end News.Publisher;
