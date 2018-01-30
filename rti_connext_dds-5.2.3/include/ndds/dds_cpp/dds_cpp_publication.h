/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)dds_cpp_publication.h    generated by: makeheader    Mon Apr 25 07:51:13 2016
 *
 *		built from:	publication.ifcxx
 */

#ifndef dds_cpp_publication_h
#define dds_cpp_publication_h


  #ifndef dds_cpp_dll_h
    #include "dds_cpp/dds_cpp_dll.h"
  #endif
  #ifndef dds_cpp_infrastructure_h
    #include "dds_cpp/dds_cpp_infrastructure.h"
  #endif
  #ifndef dds_cpp_topic_h
    #include "dds_cpp/dds_cpp_topic.h"
  #endif
  #ifndef dds_c_publication_h
    #include "dds_c/dds_c_publication.h"
  #endif

class DDSDataWriter;

typedef DDSDataWriter* DDSDataWriter_ptr;


DDS_SEQUENCE(DDSDataWriterSeq, DDSDataWriter_ptr);

class DDSStringDataWriter;

class DDSKeyedStringDataWriter;

class DDSOctetsDataWriter;

class DDSKeyedOctetsDataWriter;

class DDSCPPDllExport DDSDataWriterListener : public virtual DDSListener {
  public:

    /*e \dref_DataWriterListener_on_offered_deadline_missed
     */
    virtual void on_offered_deadline_missed(DDSDataWriter* writer, 
        const DDS_OfferedDeadlineMissedStatus& status);

    /*e \dref_DataWriterListener_on_liveliness_lost
     */
    virtual void on_liveliness_lost(DDSDataWriter* writer, 
        const DDS_LivelinessLostStatus& status);

    /*e \dref_DataWriterListener_on_offered_incompatible_qos
     */
    virtual void on_offered_incompatible_qos(DDSDataWriter* writer, 
        const DDS_OfferedIncompatibleQosStatus& status);

    /*e \dref_DataWriterListener_on_publication_matched
     */
    virtual void on_publication_matched(DDSDataWriter* writer, 
        const DDS_PublicationMatchedStatus& status);

    /*e \dref_DataWriterListener_on_reliable_writer_cache_changed
     */
    virtual void on_reliable_writer_cache_changed(DDSDataWriter* writer,
        const DDS_ReliableWriterCacheChangedStatus& status);

    /*e \dref_DataWriterListener_on_reliable_reader_activity_changed
     */
    virtual void on_reliable_reader_activity_changed(DDSDataWriter* writer,
        const DDS_ReliableReaderActivityChangedStatus& status);

    /*i \dref_DataWriterListener_on_destination_unreachable
     */
    virtual void on_destination_unreachable(DDSDataWriter* writer,
        const DDS_InstanceHandle_t& handle,
        const DDS_Locator_t& destination);

    /*i \dref_DataWriterListener_on_data_request
     */
    virtual void* on_data_request(DDSDataWriter* writer,
        const DDS_Cookie_t& cookie);

    /*i \dref_DataWriterListener_on_data_return
     */
    virtual void on_data_return(DDSDataWriter* writer,
        void* instance_data,
        const DDS_Cookie_t& cookie);

    /*i \dref_DataWriterListener_on_sample_removed
     */
    virtual void on_sample_removed(DDSDataWriter* writer,
        const DDS_Cookie_t& cookie);

    /*e \dref_DataWriterListener_on_instance_replaced
     */
    virtual void on_instance_replaced(DDSDataWriter* writer,
        const DDS_InstanceHandle_t& handle);

    /*e \dref_DataWriterListener_on_application_acknowledgment
     */
    virtual void on_application_acknowledgment(DDSDataWriter* writer,
        const DDS_AcknowledgmentInfo& info);

  public: 

    virtual ~DDSDataWriterListener();

};

class DDSPublisher;

class DDSCPPDllExport
DDSPublisherListener : public virtual DDSDataWriterListener {
  public: 

    virtual ~DDSPublisherListener();

};

class DDSPublisher;

typedef DDSPublisher* DDSPublisher_ptr;


DDS_SEQUENCE(DDSPublisherSeq, DDSPublisher_ptr);

class DDSTopic;

class DDSCPPDllExport DDSPublisher : public DDSDomainEntity {
  // --- <<interface>> DDSPublisher: -----------------------------------
  public:
    /*e \dref_Publisher_get_default_datawriter_qos
     */
    virtual DDS_ReturnCode_t get_default_datawriter_qos(
        DDS_DataWriterQos& qos)
        = 0;

    /*i \dref_Publisher_get_default_datawriter_qos_w_topic_name
     */
    virtual DDS_ReturnCode_t get_default_datawriter_qos_w_topic_name(
        DDS_DataWriterQos& qos,
        const char *topic_name)
        = 0;
    
    /*e \dref_Publisher_set_default_datawriter_qos
     */
    virtual DDS_ReturnCode_t set_default_datawriter_qos(
        const DDS_DataWriterQos& qos)
        = 0;

    /*e \dref_Publisher_set_default_datawriter_qos_with_profile
     */
    virtual DDS_ReturnCode_t set_default_datawriter_qos_with_profile(
        const char * library_name,
	const char * profile_name)
        = 0;

    /*e \dref_Publisher_set_default_library
     */
    virtual DDS_ReturnCode_t set_default_library(
        const char *library_name)
        = 0;

    /*e \dref_Publisher_get_default_library
     */
    virtual const char * get_default_library()
        = 0;

    /*e \dref_Publisher_set_default_profile
     */
    virtual DDS_ReturnCode_t set_default_profile(
	const char *library_name,
        const char *profile_name)
        = 0;

    /*e \dref_Publisher_get_default_profile
     */
    virtual const char * get_default_profile()
        = 0;

    /*e \dref_Publisher_get_default_profile_library
     */
    virtual const char * get_default_profile_library()
        = 0;

    /*e \dref_Publisher_create_datawriter
     */
    virtual DDSDataWriter* create_datawriter(DDSTopic* topic, 
        const DDS_DataWriterQos& qos,
        DDSDataWriterListener* listener,
        DDS_StatusMask mask)
        = 0;

    /*e \dref_Publisher_create_datawriter_with_profile
     */
    virtual DDSDataWriter* create_datawriter_with_profile(DDSTopic* topic, 
        const char *library_name,
        const char *profile_name,
        DDSDataWriterListener* listener,
        DDS_StatusMask mask)
        = 0;

    /*e \dref_Publisher_delete_datawriter
     */
    virtual DDS_ReturnCode_t delete_datawriter(
        DDSDataWriter* a_datawriter)
        = 0;

    /*e \dref_Publisher_lookup_datawriter
     */
    virtual DDSDataWriter* lookup_datawriter(const char* topic_name)
        = 0;
        
    /*e \dref_Publisher_get_all_datawriters
    */
    virtual DDS_ReturnCode_t get_all_datawriters(
	DDSDataWriterSeq& writers)
        = 0;

    /*e \dref_Publisher_suspend_publications
     */
    virtual DDS_ReturnCode_t suspend_publications()
        = 0;
    
    /*e \dref_Publisher_resume_publications
     */
    virtual DDS_ReturnCode_t resume_publications() 
        = 0;
    
    /*e \dref_Publisher_begin_coherent_changes
     */
    virtual DDS_ReturnCode_t begin_coherent_changes()
        = 0;
    
    /*e \dref_Publisher_end_coherent_changes
     */
    virtual DDS_ReturnCode_t end_coherent_changes()
        = 0;    

    /*e \dref_Publisher_get_participant
     */
    virtual DDSDomainParticipant* get_participant()
        = 0;    

    /*e \dref_Publisher_delete_contained_entities
     */
    virtual DDS_ReturnCode_t delete_contained_entities()
        = 0;    

    /*e \dref_Publisher_copy_from_topic_qos
     */
    virtual DDS_ReturnCode_t copy_from_topic_qos(
	DDS_DataWriterQos& a_datawriter_qos, const DDS_TopicQos& a_topic_qos)
        = 0;    

    /*e \dref_Publisher_wait_for_acknowledgments
     */
    virtual DDS_ReturnCode_t wait_for_acknowledgments(
        const DDS_Duration_t& max_wait)
        = 0;    

    /*e \dref_Publisher_wait_for_asynchronous_publishing
     */
    virtual DDS_ReturnCode_t wait_for_asynchronous_publishing(
        const DDS_Duration_t& max_wait)
        = 0;    

  // --- <<interface>> DDSEntity: --------------------------------------
  public:
  
    /*e \dref_Publisher_set_qos
     */
    virtual DDS_ReturnCode_t set_qos(const DDS_PublisherQos& qos)
        = 0;

    /*e \dref_Publisher_set_qos_with_profile
     */
    virtual DDS_ReturnCode_t set_qos_with_profile(
	const char *library_name,
	const char *profile_name)
        = 0;

    /*e \dref_Publisher_get_qos
     */
    virtual DDS_ReturnCode_t get_qos(DDS_PublisherQos& qos) 
        = 0;

    /*e \dref_Publisher_set_listener
     */
    virtual DDS_ReturnCode_t set_listener(DDSPublisherListener* l,
        DDS_StatusMask mask = DDS_STATUS_MASK_ALL)
        = 0;

    /*e \dref_Publisher_get_listener
     */
    virtual DDSPublisherListener* get_listener()
        = 0;
    
   // --- <<impl>> eXtensions: ------------------------------------------
  public:
      virtual DDS_Publisher* get_c_publisherI() 
        = 0;
    
  // --- << entity configuration>>: -------------------------------------
  public:
    /*e \dref_Publisher_lookup_datawriter_by_name
     */
      virtual DDSDataWriter * lookup_datawriter_by_name(
        const char * datawriter_name) 
        = 0;

  // --- <<lifecycle>>: ------------------------------------------------
  protected: 

    virtual ~DDSPublisher();

};

class DDSEntity_impl;

struct DDS_SubscriptionBuiltinTopicData;

class DDSCPPDllExport DDSDataWriter : public DDSDomainEntity {
  public:

    virtual DDSEntity_impl* get_impl_EntityI() {
	return _impl->get_impl_EntityI();
    }

    virtual DDS_DataWriter* get_c_datawriterI() {
        return _impl->get_c_datawriterI();
    }
    
    virtual DDS_ReturnCode_t unblock_wait_for_acknowledgmentsI() {
        return _impl->unblock_wait_for_acknowledgmentsI();
    }

    virtual DDS_ReturnCode_t unblock_wait_for_sample_acknowledgmentI(
        const struct DDS_SampleIdentity_t & identity) {
        return _impl->unblock_wait_for_sample_acknowledgmentI(
                    identity);
    }

  public:
 
    /*e \dref_DataWriter_get_liveliness_lost_status
     */
    virtual DDS_ReturnCode_t get_liveliness_lost_status(
            DDS_LivelinessLostStatus& status) {
        return _impl->get_liveliness_lost_status(status);
    }

    /*e \dref_DataWriter_get_offered_deadline_missed_status
     */
    virtual DDS_ReturnCode_t get_offered_deadline_missed_status(
            DDS_OfferedDeadlineMissedStatus& status) {
        return _impl->get_offered_deadline_missed_status(status);
    }

    /*e \dref_DataWriter_get_offered_incompatible_qos_status
     */
    virtual DDS_ReturnCode_t get_offered_incompatible_qos_status(
            DDS_OfferedIncompatibleQosStatus& status) {
        return _impl->get_offered_incompatible_qos_status(status);
    }

    /*e \dref_DataWriter_get_publication_matched_status
     */
    virtual DDS_ReturnCode_t get_publication_matched_status(
            DDS_PublicationMatchedStatus& status) {
        return _impl->get_publication_matched_status(status);
    }
    
    /*e \dref_DataWriter_get_reliable_writer_cache_changed_status
     */
    virtual DDS_ReturnCode_t get_reliable_writer_cache_changed_status(
            DDS_ReliableWriterCacheChangedStatus& status) {
        return _impl->get_reliable_writer_cache_changed_status(status);
    }
    
    /*e \dref_DataWriter_get_reliable_reader_activity_changed_status
     */
    virtual DDS_ReturnCode_t get_reliable_reader_activity_changed_status(
            DDS_ReliableReaderActivityChangedStatus& status) {
        return _impl->get_reliable_reader_activity_changed_status(status);
    }

    /*e \dref_DataWriter_get_datawriter_cache_status
     */
    virtual DDS_ReturnCode_t get_datawriter_cache_status(
            DDS_DataWriterCacheStatus& status) {
        return _impl->get_datawriter_cache_status(status);
    }

    /*e \dref_DataWriter_get_datawriter_protocol_status
     */
    virtual DDS_ReturnCode_t get_datawriter_protocol_status(
            DDS_DataWriterProtocolStatus& status) {
        return _impl->get_datawriter_protocol_status(status);
    }

    /*e \dref_DataWriter_get_matched_subscription_datawriter_protocol_status
     */
    virtual DDS_ReturnCode_t get_matched_subscription_datawriter_protocol_status(
            DDS_DataWriterProtocolStatus& status,
            const DDS_InstanceHandle_t& subscription_handle) {
        return _impl->get_matched_subscription_datawriter_protocol_status(
            status,
            subscription_handle);
    }

    /*e \dref_DataWriter_get_matched_subscription_datawriter_protocol_status_by_locator
     */
    virtual DDS_ReturnCode_t get_matched_subscription_datawriter_protocol_status_by_locator(
            DDS_DataWriterProtocolStatus& status,
            const DDS_Locator_t& locator) {
        return _impl->get_matched_subscription_datawriter_protocol_status_by_locator(
            status,
            locator);
    }

    /*e \dref_DataWriter_assert_liveliness
     */
    virtual DDS_ReturnCode_t assert_liveliness() {
        return _impl->assert_liveliness();
    }

    /*e \dref_DataWriter_get_matched_subscription_locators
     */
    virtual DDS_ReturnCode_t get_matched_subscription_locators(
	DDS_LocatorSeq& locators) {
	return _impl->get_matched_subscription_locators(locators);
    }

    /*e \dref_DataWriter_get_matched_subscriptions
     */
    virtual DDS_ReturnCode_t get_matched_subscriptions(
	DDS_InstanceHandleSeq& subscription_handles) {
	return _impl->get_matched_subscriptions(subscription_handles);
    }

    /*e \dref_DataWriter_get_matched_subscription_data
     */
    virtual DDS_ReturnCode_t get_matched_subscription_data(
	DDS_SubscriptionBuiltinTopicData& subscription_data,
	const DDS_InstanceHandle_t& subscription_handle) {
	return _impl->get_matched_subscription_data(subscription_data,
						   subscription_handle);
    }

    /*e \dref_DataWriter_get_matched_subscription_participant_data
     */
    virtual DDS_ReturnCode_t get_matched_subscription_participant_data(
	DDS_ParticipantBuiltinTopicData& participant_data,
	const DDS_InstanceHandle_t& subscription_handle) {
	return _impl->get_matched_subscription_participant_data(
           participant_data, subscription_handle);
    }

    /*e \dref_DataWriter_get_topic
     */
    virtual DDSTopic* get_topic() {
	return _impl->get_topic();
    }

    /*e \dref_DataWriter_get_publisher
     */
    virtual DDSPublisher* get_publisher() {
	return _impl->get_publisher();
    }

    /*e \dref_DataWriter_wait_for_acknowledgments
     */
    virtual DDS_ReturnCode_t wait_for_acknowledgments(
        const DDS_Duration_t& max_wait) {
        return _impl->wait_for_acknowledgments(max_wait);
    }

    /*i \dref_DataWriter_wait_for_acknowledgments
     */    
    virtual DDS_ReturnCode_t wait_for_sample_acknowledgment(
        const struct DDS_SampleIdentity_t& identity,
        const struct DDS_Duration_t& max_wait) {
        return _impl->wait_for_sample_acknowledgment(identity, max_wait);        
    }
    
    /*e \dref_DataWriter_is_sample_app_acknowledged
     */
    virtual DDS_ReturnCode_t is_sample_app_acknowledged(
            DDS_Boolean & is_app_ack,
            const struct DDS_SampleIdentity_t & identity) {
        return _impl->is_sample_app_acknowledged(is_app_ack, identity);                
    }

    /*e \dref_DataWriter_wait_for_asynchronous_publishing
     */
    virtual DDS_ReturnCode_t wait_for_asynchronous_publishing(
        const DDS_Duration_t& max_wait) {
        return _impl->wait_for_asynchronous_publishing(max_wait);
    }

    /*e \dref_DataWriter_set_qos
     */
    virtual DDS_ReturnCode_t set_qos(const DDS_DataWriterQos& qos) {
	return _impl->set_qos(qos);
    }

    /*e \dref_DataWriter_set_qos_with_profile
     */
    virtual DDS_ReturnCode_t set_qos_with_profile(
        const char *library_name,
        const char *profile_name){

	return _impl->set_qos_with_profile(library_name, profile_name);
    }

    /*e \dref_DataWriter_get_qos
     */
    virtual DDS_ReturnCode_t get_qos(DDS_DataWriterQos& qos) {
        return _impl->get_qos(qos);
    }

    /*e \dref_DataWriter_set_listener
     */
    virtual DDS_ReturnCode_t set_listener(DDSDataWriterListener* l, 
                DDS_StatusMask mask = DDS_STATUS_MASK_ALL) {
	return _impl->set_listener(l, mask);
    }

    /*e \dref_DataWriter_get_listener
     */
    virtual DDSDataWriterListener* get_listener() {
	return _impl->get_listener();
    }

    /*e \dref_DataWriter_flush
     */
    virtual DDS_ReturnCode_t flush() {
        return _impl->flush();
    }
    
  public:

    virtual DDS_Boolean compare_typeI(const char * typeToCompare) {
        return _impl->compare_typeI(typeToCompare);
    }

    static void deleteI(DDSDataWriter *writer);

  public:

    virtual DDS_ReturnCode_t enable() {
	return _impl->enable();
    }

    virtual DDS_ReturnCode_t lock() {
        return _impl->lock();
    }

    virtual DDS_ReturnCode_t unlock() {
        return _impl->unlock();
    }

    virtual DDSStatusCondition* get_statuscondition() {
        return _impl->get_statuscondition();
    }

    virtual DDS_StatusMask get_status_changes() {
	return _impl->get_status_changes();
    }

    virtual DDS_InstanceHandle_t get_instance_handle() {
        return _impl->get_instance_handle();
    }

  protected:

    /*
      These are implemented in the "type-specific" FooDataWriter
      generated classes: [see DDS_DATA_WRITER() in dds_data.h]
    */
    
    virtual DDS_InstanceHandle_t register_instance_untypedI(
	const void* instance_data) {
	return _impl->register_instance_untypedI(instance_data);
    }

    virtual DDS_InstanceHandle_t register_instance_w_timestamp_untypedI(
	const void* instance_data,
	const DDS_Time_t& source_timestamp) {
	return _impl->register_instance_w_timestamp_untypedI(instance_data, 
							     source_timestamp);
    }

    virtual DDS_InstanceHandle_t register_instance_w_params_untypedI(
	const void* instance_data,
	DDS_WriteParams_t& params) {
	return _impl->register_instance_w_params_untypedI(instance_data, 
							        params);
    }

    virtual DDS_ReturnCode_t unregister_instance_untypedI(
	const void* instance_data, 
	const DDS_InstanceHandle_t&  handle) {
	return _impl->unregister_instance_untypedI(instance_data, handle);
    }

    virtual DDS_ReturnCode_t unregister_instance_w_timestamp_untypedI(
	const void* instance_data, 
	const DDS_InstanceHandle_t&  handle,
	const DDS_Time_t& source_timestamp) {
	return _impl->unregister_instance_w_timestamp_untypedI(
	    instance_data, handle, source_timestamp);
    }

    virtual DDS_ReturnCode_t unregister_instance_w_params_untypedI(
	const void* instance_data, 
	DDS_WriteParams_t& params) {
	return _impl->unregister_instance_w_params_untypedI(
	    instance_data, params);
    }

    virtual DDS_ReturnCode_t write_untypedI(
	const void* instance_data, 
	const DDS_InstanceHandle_t& handle) {
	return _impl->write_untypedI(instance_data, handle);
    }

    virtual DDS_ReturnCode_t write_w_timestamp_untypedI(
	const void* instance_data, 
	const DDS_InstanceHandle_t& handle,
	const DDS_Time_t& source_timestamp) {
	return _impl->write_w_timestamp_untypedI(
	    instance_data, handle, source_timestamp);
    }

    virtual DDS_ReturnCode_t write_w_params_untypedI(
	const void* instance_data, 
	DDS_WriteParams_t& params) {
	return _impl->write_w_params_untypedI(
	    instance_data, params);
    }

    virtual DDS_ReturnCode_t dispose_untypedI(
	const void* instance_data, 
	const DDS_InstanceHandle_t& instance_handle) {
	return _impl->dispose_untypedI(instance_data, instance_handle);
    }

    virtual DDS_ReturnCode_t dispose_w_timestamp_untypedI(
	const void* instance_data, 
	const DDS_InstanceHandle_t& instance_handle,
	const DDS_Time_t& source_timestamp) {
	return _impl->dispose_w_timestamp_untypedI(
	    instance_data, instance_handle,
	    source_timestamp);
    }

    virtual DDS_ReturnCode_t dispose_w_params_untypedI(
	const void* instance_data, 
	DDS_WriteParams_t& params) {
	return _impl->dispose_w_params_untypedI(
	    instance_data, params);
    }

    virtual DDS_ReturnCode_t get_key_value_untypedI(
	void* key_holder, 
	const DDS_InstanceHandle_t& handle) {
	return _impl->get_key_value_untypedI(key_holder, handle);
    }

    virtual DDS_InstanceHandle_t lookup_instance_untypedI(
        const void* key_holder) {
        return _impl->lookup_instance_untypedI(
            key_holder);
    }

    virtual void* create_data_untypedI(DDS_Boolean /* initialize */) {
        return NULL;
    }
    
    virtual DDS_Boolean delete_data_untypedI(void * /* sample */) {
        return DDS_BOOLEAN_FALSE;
    }
    
    virtual DDS_Boolean lock_data_untypedI(void * /* sample */) {
        return DDS_BOOLEAN_FALSE;
    }
    
    virtual DDS_Boolean unlock_data_untypedI(void * /* sample */) {
            return DDS_BOOLEAN_FALSE;
    }
    
  protected:
    virtual ~DDSDataWriter();
    
  protected:
    DDSDataWriter(DDSDataWriter* impl) : _impl(impl) { }

  private:
    DDSDataWriter* _impl;
};

#endif /* dds_cpp_publication_h */
