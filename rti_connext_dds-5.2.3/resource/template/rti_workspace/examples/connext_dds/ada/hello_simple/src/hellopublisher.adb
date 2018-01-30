--*****************************************************************************/
--*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
--*                                                                           */
--*         Permission to modify and use for internal purposes granted.       */
--* This software is provided "as is", without warranty, express or implied.  */
--*                                                                           */
--*****************************************************************************/
with DDS;
with DDS.DomainParticipantFactory;
with DDS.DomainParticipant;
with DDS.Topic;
with DDS.Publisher;
with DDS.DataWriter;
with DDS.Builtin_String_DataWriter;
with DDS.Builtin_String_TypeSupport;
with Ada.Text_IO;
with Ada.Exceptions;

procedure HelloPublisher is
   participant   : DDS.DomainParticipant.Ref_Access          := null;
   topic         : DDS.Topic.Ref_Access                      := null;
   data_writer   : DDS.DataWriter.Ref_Access                 := null;
   string_writer : DDS.Builtin_String_DataWriter.Ref_Access  := null;

   NULL_ENTITY   : exception;

   topic_name    : constant DDS.String := DDS.To_DDS_String ("Hello, World!");

   use type DDS.DomainParticipant.Ref_Access;
   use type DDS.Topic.Ref_Access;
   use type DDS.DataWriter.Ref_Access;
   use type DDS.Publisher.Ref_Access;
begin
   --/* --- Set Up --------------------------------------------------------- */

   --/* Create the domain participant on domain ID 0 */
   participant := DDS.DomainParticipantFactory.Get_Instance.Create_Participant
     (Domain_Id  => 0,
      Qos        => DDS.DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
      A_Listener => null,
      Mask       => DDS.STATUS_MASK_NONE);
   if participant = null then
      raise NULL_ENTITY with "Unable to create participant";
   end if;

   topic := participant.Create_Topic
     (Topic_Name => topic_name,
      Type_Name  => DDS.Builtin_String_TypeSupport.Get_Type_Name,
      Qos        => DDS.DomainParticipant.TOPIC_QOS_DEFAULT,
      A_Listener => null,
      Mask       => DDS.STATUS_MASK_NONE);
   if topic = null then
      raise NULL_ENTITY with "Unable to create topic";
   end if;

   data_writer := participant.Create_DataWriter
     (A_Topic    => topic,
      Qos        => DDS.Publisher.DATAWRITER_QOS_DEFAULT,
      A_Listener => null,
      Mask       => DDS.STATUS_MASK_NONE);
   if data_writer = null then
      raise NULL_ENTITY with "Unable to create datawriter";
   end if;

   string_writer := DDS.Builtin_String_DataWriter.Narrow (data_writer);

   Ada.Text_IO.Put_Line ("Ready to write data.");
   Ada.Text_IO.Put_Line ("When the subscriber is ready, you can start writing.");
   Ada.Text_IO.Put_Line ("Press CTRL+C to terminate or enter an empty line to do a clean shutdown.");

   loop
      Ada.Text_IO.Put ("Please type a message> ");
      declare
         message : constant String := Ada.Text_IO.Get_Line;
      begin
         exit when message'Length = 0;
         declare
            ddsMsg  : DDS.String := DDS.To_DDS_String (message);
            handle  : aliased DDS.InstanceHandle_T := DDS.HANDLE_NIL;
         begin
            string_writer.Write
              (Instance_Data => ddsMsg,
               Handle        => handle'Unchecked_Access);
            DDS.Finalize (ddsMsg);
         end;
      end;
   end loop;

   --/* --- Clean Up ------------------------------------------------------- */

   if data_writer /= null then
      participant.Delete_DataWriter (data_writer);
      data_writer := null;
      string_writer := null;
   end if;

   if topic /= null then
      participant.Delete_Topic (topic);
      topic := null;
   end if;

   if participant /= null then
      DDS.DomainParticipantFactory.Get_Instance.Delete_Participant (participant);
      participant := null;
   end if;
exception
   when e : others =>
      if data_writer /= null then
         participant.Delete_DataWriter (data_writer);
         data_writer := null;
         string_writer := null;
      end if;

      if topic /= null then
         participant.Delete_Topic (topic);
         topic := null;
      end if;

      if participant /= null then
         DDS.DomainParticipantFactory.Get_Instance.Delete_Participant (participant);
         participant := null;
      end if;

      Ada.Text_IO.Put_Line (Ada.Exceptions.Exception_Message (e));
end HelloPublisher;
