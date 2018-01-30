with DDS;

package Hello_Builtin is
   use DDS;

   DEFAULT_DOMAIN_ID  : constant := 0;
   DEFAULT_TOPIC_NAME : constant DDS.String := DDS.To_DDS_String ("Hello Builtin");
   MAX_PAYLOAD        : constant := 1023;
   MIN_PAYLOAD        : constant := 20;
   DEFAULT_PAYLOAD    : constant := 1023;
   UNLIMITED_SAMPLE_COUNT : constant := 0;

   FAILURE : exception;

   type App_Mode is
     (APP_MODE_UNDEFINED,
      APP_MODE_PUBLISHER,
      APP_MODE_SUBSCRIBER);

   type CommandLineArguments is record
      DomainId      : DDS.DomainId_T;
      Mode          : App_Mode;
      DataSize      : Integer;
      SampleCount   : Integer;
      Verbose       : Integer;
      TopicName     : DDS.String;
   end record;

   procedure Usage;

   procedure StartApplication (Arg : CommandLineArguments);

end Hello_Builtin;
