with Ada.Text_IO;
with Ada.Command_Line;
with DDS;
with RTIDDS.Config;

procedure News.Main is
   use Ada.Text_IO;
   use DDS;
   use Ada.Command_Line;
   use News;

   arg : CommandLineArguments;
   i   : Natural;
begin
   arg.domainId := 0;
   arg.mode := APP_MODE_UNDEFINED;
   arg.runSeconds := 20.0;
   arg.verbose := 0;
   Initialize (arg.contentFilter);

   Put_Line ("RTI News Example");
   Put_Line ("Copyright 2009 Real-Time Innovations, Inc.");
   Put_Line ("");

   --  Ensure there are enough arguments in the command line
   if Argument_Count < 1 then
      Put_Line ("! Invalid number of arguments.");
      Put_Line ("! You must specify at least running mode (pub/sub)");
      return;
   end if;

   --  Parse the running mode: pub/sub
   if Argument (1) = "pub" then
      arg.mode := APP_MODE_PUBLISHER;
   elsif Argument (1) = "sub" then
      arg.mode := APP_MODE_SUBSCRIBER;
   elsif Argument (1) /= "-h" and Argument (1) /= "--help" then
      usage;
      return;
   else
      usage;
      Put_Line ("! Invalid mode: '" & Argument (1) & "'");
      Put_Line ("! Valid modes are only 'pub' or 'sub'");
      return;
   end if;

   --  Parse the optional arguments
   i := 2;
   while i <= Argument_Count loop
      if Argument (i) = "-h" or Argument (i) = "--help" then
         usage;
         return;
      elsif Argument (i) = "-v" or Argument (i) = "--verbose" then
         arg.verbose := arg.verbose + 1;
      elsif Argument (i) = "-d" or Argument (i) = "--domain" then
         if i + 1 > Argument_Count then
            usage;
            Put_Line ("<domainID> parameter missing");
            return;
         end if;
         arg.domainId := DDS.DomainId_T'Value (Argument (i + 1));
         if arg.domainId > DOMAIN_ID_MAX or arg.domainId < 0 then
            Put_Line ("! Invalid DDS Domain ID: " & arg.domainId'Img);
            Put_Line ("! The domain ID must be between 0 and " &
                      DOMAIN_ID_MAX'Img & " (inclusive)");
            return;
         end if;
         i := i + 1;
      elsif Argument (i) = "-r" or Argument (i) = "--runSeconds" then
         if i + 1 > Argument_Count then
            usage;
            Put_Line ("<integer> parameter missing");
            return;
         end if;
         arg.runSeconds := Duration'Value (Argument (i + 1));

         if arg.runSeconds < 0.0 then
            usage;
            Put_Line ("! Invalid value for --runSeconds argument: " &
                      arg.runSeconds'Img);
            return;
         end if;
         i := i + 1;
      elsif Argument (i) = "-f" or Argument (i) = "--filterExpression" then
         if i + 1 > Argument_Count then
            usage;
            Put_Line ("<SQL> parameter missing");
            return;
         end if;

         Copy (arg.contentFilter, Argument (i + 1));
         i := i + 1;
      else
         usage;
         Put_Line ("! Unknown argument " & Argument (i));
      end if;
      i := i + 1;
   end loop;

   if arg.verbose > 0 then
      Put_Line ("Running with the following arguments:");
      Put_Line ("    Verbosity level.. : " & arg.verbose'Img);
      Put_Line ("    Domain ID........ : " & arg.domainId'Img);
      Put_Line ("    Seconds to run... : " & arg.runSeconds'Img);
      Put_Line ("RTI Product Version.. : " & RTIDDS.Config.get_product_version);
   end if;

   --  If the verbosity is greater than 1, also turn on RTI status logging.
   if arg.verbose > 1 then
      RTIDDS.Config.Logger.Get_Instance.Set_Verbosity
        (RTIDDS.Config.Category_API, RTIDDS.Config.VERBOSITY_ALL);
   end if;

   --  Finally, starts the application
   startApplication (arg);

   --  start_application terminates if sampleCount is set
   Put_Line ("Done.");
end News.Main;
