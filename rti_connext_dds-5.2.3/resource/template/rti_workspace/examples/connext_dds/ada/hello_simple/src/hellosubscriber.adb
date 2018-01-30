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
with DDS.Subscriber;
with DDS.DataReader;
with DDS.Builtin_String_TypeSupport;
with Ada.Text_IO;
with Ada.Exceptions;
with HelloListener;

procedure HelloSubscriber is
   participant  : DDS.DomainParticipant.Ref_Access          := null;
   topic        : DDS.Topic.Ref_Access                      := null;
   reader       : DDS.DataReader.Ref_Access                 := null;
   listener     : aliased HelloListener.Ref;

   NULL_ENTITY  : exception;

   topic_name   : constant DDS.String := DDS.To_DDS_String ("Hello, World!");

   use type DDS.DomainParticipant.Ref_Access;
   use type DDS.Topic.Ref_Access;
   use type DDS.DataReader.Ref_Access;
   use type DDS.Subscriber.Ref_Access;
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

   --/* Create the topic "Hello, World" for the String type */
   topic := participant.Create_Topic
     (Topic_Name => topic_name,
      Type_Name  => DDS.Builtin_String_TypeSupport.Get_Type_Name,
      Qos        => DDS.DomainParticipant.TOPIC_QOS_DEFAULT,
      A_Listener => null,
      Mask       => DDS.STATUS_MASK_NONE);
   if topic = null then
      raise NULL_ENTITY with "Unable to create topic";
   end if;

   --/* Create the data reader */
   reader := participant.Create_DataReader
     (Topic      => topic.As_TopicDescription,
      Qos        => DDS.Subscriber.DATAREADER_QOS_DEFAULT,
      A_Listener => listener'Unchecked_Access,
      Mask       => DDS.DATA_AVAILABLE_STATUS);
   if reader = null then
      raise NULL_ENTITY with "Unable to create datawriter";
   end if;

   --/* --- Sleep During Asynchronous Reception ---------------------------- */

   --  /* This thread sleeps forever. When a sample is received, RTI Data
   --   * Distribution Service will call the on_data_available_callback function.
   --   */
   Ada.Text_IO.Put_Line ("Ready to read data.");
   Ada.Text_IO.Put_Line ("Press CTRL+C to terminate.");
   loop
      delay 1.0;
      exit when not listener.receiving;
   end loop;
   delay 1.0;

   Ada.Text_IO.Put_Line ("Exiting...");

   if reader /= null then
      participant.Delete_DataReader (reader);
      reader := null;
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
      if reader /= null then
         participant.Delete_DataReader (reader);
         reader := null;
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
end HelloSubscriber;
