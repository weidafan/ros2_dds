with DDS.DomainParticipant;
with DDS.Topic;

package News.Subscriber is

   procedure readArticles
     (participant   : DDS.DomainParticipant.Ref_Access;
      topic         : DDS.Topic.Ref_Access;
      verbose       : DDS.Long;
      runSeconds    : Duration;
      contentFilter : DDS.String);

   INIT_FAILURE : exception;

end News.Subscriber;
