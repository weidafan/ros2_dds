with DDS;

package News is
   use DDS;

   DEFAULT_DOMAIN_ID : constant := 0;
   DOMAIN_ID_MAX     : constant := 250;
   TOPIC_NAME        : constant DDS.String := DDS.To_DDS_String ("News Example");

   FAILURE : exception;

   type App_Mode is
     (APP_MODE_UNDEFINED,
      APP_MODE_PUBLISHER,
      APP_MODE_SUBSCRIBER);

   type CommandLineArguments is record
      domainId      : DDS.Domainid_T;
      mode          : App_Mode;
      runSeconds    : Duration;
      verbose       : Long;
      contentFilter : DDS.String;
   end record;

   procedure usage;

   procedure startApplication (arg : CommandLineArguments);

end News;
