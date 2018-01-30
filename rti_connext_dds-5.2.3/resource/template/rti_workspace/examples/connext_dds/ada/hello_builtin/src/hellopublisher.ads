with DDS.DomainParticipant;
with DDS.Topic;

package HelloPublisher is

   procedure writeSamples
     (participant : DDS.DomainParticipant.Ref_Access;
      topic       : DDS.Topic.Ref_Access;
      verbose     : Integer;
      dataSize    : Integer;
      sampleCount : Integer);

end HelloPublisher;
