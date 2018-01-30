with DDS.DataWriter;
with DDS.Publisher;
with DDS.Builtin_String_DataWriter;
with Ada.Text_IO;

package body HelloPublisher is
   use Ada.Text_IO;

   procedure writeSamples
     (participant : DDS.DomainParticipant.Ref_Access;
      topic       : DDS.Topic.Ref_Access;
      verbose     : Integer;
      dataSize    : Integer;
      sampleCount : Integer)
   is
      writer     : DDS.Builtin_String_DataWriter.Ref_Access;
      dataWriter : DDS.DataWriter.Ref_Access;

      buffer : Standard.String (1 .. dataSize);
      count  : Integer;

      use type DDS.DataWriter.Ref_Access;
      use type DDS.Builtin_String_DataWriter.Ref_Access;
   begin
      if verbose > 0 then
         Put_Line ("Creating the data writer...");
      end if;
      dataWriter := participant.Create_DataWriter
        (topic,
         DDS.Publisher.DATAWRITER_QOS_DEFAULT,
         null,
         DDS.STATUS_MASK_NONE);
      if dataWriter = null then
         Put_Line ("! Unable to create DDS data writer");
         return;
      end if;

      writer := DDS.Builtin_String_DataWriter.Narrow (dataWriter);
      if writer = null then
         Put_Line ("! Unable to narrow data writer");
         return;
      end if;

      -- Initialize data for instance payload. This is just lower cap letters in sequence
      for i in buffer'Range loop
         buffer (i) := Character'Val (97 + (i mod 26));
      end loop;

      --  Writes samples to DDS.
      Put_Line ("Sending data...");
      count := 0;
      loop
         declare
            nSample : constant String :=
              count'Img & "-" &
              sampleCount'Img;
            index   : Integer;
         begin
            index := 1;
            for i in nSample'Range loop
               buffer (index) := nSample (i);
               index := index + 1;
               if index > dataSize then
                  exit;
               end if;
            end loop;
            declare
               bufferToSend : DDS.String := DDS.To_DDS_String (buffer);
            begin
               writer.write (bufferToSend, DDS.HANDLE_NIL'Unrestricted_Access);
               DDS.Finalize (bufferToSend);
            end;
            count := count + 1;
            if sampleCount > 0 and then count >= sampleCount then
               Put_Line ("Sent" & count'Img & " messages");
               exit;
            end if;
            if count mod 10000 = 0 then
               Put_Line ("Sent" & count'Img & " messages");
            end if;
         end;
      end loop;
   end writeSamples;

end HelloPublisher;
