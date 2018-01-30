with Ada.Text_IO;
with Ada.Command_Line;
with DDS;
with RTIDDS.Config;
with Interfaces.C.Strings;

with Hello_Builtin;
procedure Main is
   use Dds;
   use Ada.Text_IO;
   use Ada.Command_Line;
   use Hello_Builtin;
   use type Interfaces.C.Strings.chars_ptr;

   arg : CommandLineArguments;
   i   : Natural;
begin
   arg.domainId := DEFAULT_DOMAIN_ID;
   arg.mode := APP_MODE_UNDEFINED;
   arg.dataSize := DEFAULT_PAYLOAD;
   arg.verbose := 0;
   arg.SampleCount := UNLIMITED_SAMPLE_COUNT;
   Initialize (arg.topicName);

   Put_Line ("Hello Example Application");
   Put_Line ("Copyright 2008 Real-Time Innovations, Inc.");
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
         arg.domainId := DDS.Domainid_T'Value (Argument (i + 1));
         if arg.domainId > DOMAIN_ID_MAX or arg.domainId < 0 then
            Put_Line ("! Invalid DDS Domain ID: " & arg.domainId'Img);
            Put_Line ("! The domain ID must be between 0 and " &
                      DOMAIN_ID_MAX'Img & " (inclusive)");
            return;
         end if;
         i := i + 1;
      elsif Argument (i) = "-s" or Argument (i) = "--size" then
         if i + 1 > Argument_Count then
            usage;
            Put_Line ("<integer> parameter missing");
            return;
         end if;
         arg.dataSize := Integer'Value (Argument (i + 1));
         if arg.dataSize <= 0 then
            usage;
            Put_Line ("! Invalid value for --size argument: " &
                      arg.dataSize'Img);
            return;
         end if;
         if arg.dataSize > MAX_PAYLOAD then
            usage;
            Put_Line ("! Value too big for --size argument: " &
                      arg.dataSize'Img);
            Put_Line ("! For built-in types, the default max string size is set to " &
                      MAX_PAYLOAD'Img);
            Put_Line ("! See manual on built-in types for more information.");
            return;
         end if;
         if arg.dataSize < MIN_PAYLOAD then
            usage;
            Put_Line ("! Value too small for --size argument: " &
                      arg.dataSize'Img);
            Put_Line ("! For this example, the size of the string cannot be smaller than " &
                      MIN_PAYLOAD'Img);
            return;
         end if;
         i := i + 1;
      elsif Argument (i) = "-t" or Argument (i) = "--topic" then
         if i + 1 > Argument_Count then
            usage;
            Put_Line ("<string> parameter missing");
            return;
         end if;
         Copy (arg.topicName,Argument (i + 1));
         i := i + 1;
      elsif Argument (i) = "-c" or Argument (i) = "--sampleCount" then
         if i + 1 > Argument_Count then
            usage;
            Put_Line ("<integer> parameter missing");
            return;
         end if;
         arg.sampleCount := Integer'Value (Argument (i + 1));
         if arg.sampleCount < 0 then
            usage;
            Put_Line ("! Invalid value for --sampleCount argument: " &
                      arg.sampleCount'Img);
            return;
         end if;
         i := i + 1;
      else
         usage;
         Put_Line ("! Unknown argument " & Argument (i));
      end if;
      i := i + 1;
   end loop;

   if arg.topicName.data = Interfaces.C.Strings.Null_Ptr then
      Copy (arg.topicName, DEFAULT_TOPIC_NAME);
   end if;


   if arg.verbose > 0 then
      Put_Line ("Running with the following arguments:");
      Put_Line ("    Verbosity level.. : " & arg.verbose'Img);
      Put_Line ("    Domain ID........ : " & arg.domainId'Img);
      Put_Line ("    Payload size..... : " & arg.dataSize'Img);
      Put_Line ("    Sample count..... : " & arg.sampleCount'Img);
      Put_Line ("    Topic name....... : " & DDS.To_Standard_String (arg.topicName));
      Put_Line ("RTI Product Version.. : " & RTIDDS.Config.get_product_version);
   end if;


   --  If the verbosity is greater than 1, also turn on RTI status logging.
   if arg.verbose > 1 then
      RTIDDS.Config.Logger.Get_Instance.Set_Verbosity
        (RTIDDS.Config.Category_API, RTIDDS.Config.VERBOSITY_ALL);
   end if;

   --  Finally, starts the application
   startApplication (arg);
   Put_Line ("Done.");
end Main;
