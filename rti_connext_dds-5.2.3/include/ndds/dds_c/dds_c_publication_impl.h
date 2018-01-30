/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)dds_c_publication_impl.h    generated by: makeheader    Mon Apr 25 07:50:59 2016
 *
 *		built from:	publication_impl.ifc
 */

#ifndef dds_c_publication_impl_h
#define dds_c_publication_impl_h


  #ifndef dds_c_publication_h
    #include "dds_c/dds_c_publication.h"
  #endif
  #ifndef dds_c_dll_h
    #include "dds_c/dds_c_dll.h"
  #endif
  #ifndef pres_common_h
    #include "pres/pres_common.h"
  #endif
  #ifndef pres_psGroup_h
    #include "pres/pres_psGroup.h"
  #endif

#ifdef __cplusplus
    extern "C" {
#endif

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_untypedI(
    DDS_DataWriter* self,
    const void* data,
    const DDS_InstanceHandle_t* handle);

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_directed_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* data,
    const DDS_InstanceHandle_t* handle);

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_w_writer_info_untypedI(
    DDS_DataWriter* self,
    const struct DDS_OriginalWriterInfo_t * writer_info,
    const void* data,
    const DDS_InstanceHandle_t* handle);



DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const struct DDS_OriginalWriterInfo_t * writer_info,
    const void* data,
    const DDS_InstanceHandle_t* handle);

#define DDS_DataWriter_write_untypedI( \
    ___self, __data, __handle) \
    DDS_DataWriter_write_untyped_generalI( \
        ___self, NULL, NULL, __data, __handle) \

#define DDS_DataWriter_write_directed_untypedI( \
    ___self, __remote_reader_handle, __data, __handle) \
    DDS_DataWriter_write_untyped_generalI( \
        ___self, __remote_reader_handle, NULL, __data, __handle) \

#define DDS_DataWriter_write_w_writer_info_untypedI( \
    ___self, __writer_info, __data, __handle) \
    DDS_DataWriter_write_untyped_generalI( \
        ___self, NULL,  __writer_info, __data, __handle) \


extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_w_timestamp_untypedI(
    DDS_DataWriter* self,
    const void* data,
    const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_directed_w_timestamp_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* data,
    const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_w_writer_info_w_timestamp_untypedI(
    DDS_DataWriter* self,
    const struct DDS_OriginalWriterInfo_t * writer_info,
    const void* data,
    const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);



DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_w_timestamp_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const struct DDS_OriginalWriterInfo_t * writer_info,
    const void* data,
    const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);

#define DDS_DataWriter_write_w_timestamp_untypedI( \
    ___self, __data, __handle, __source_timestamp) \
    DDS_DataWriter_write_w_timestamp_untyped_generalI( \
        ___self, NULL, NULL, __data, __handle, __source_timestamp) \

#define DDS_DataWriter_write_directed_w_timestamp_untypedI( \
    ___self, __remote_reader_handle, __data, __handle, __source_timestamp) \
    DDS_DataWriter_write_w_timestamp_untyped_generalI( \
        ___self, __remote_reader_handle, NULL, __data, __handle, __source_timestamp) \

#define DDS_DataWriter_write_w_writer_info_w_timestamp_untypedI( \
    ___self,__writer_info,__data,__handle,__source_timestamp) \
    DDS_DataWriter_write_w_timestamp_untyped_generalI( \
        __self,NULL,__writer_info,__data,__handle,__source_timestamp)


extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_w_params_untypedI(
    DDS_DataWriter* self,
    const void* data,
    struct DDS_WriteParams_t* params);

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_directed_w_params_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* data,
    struct DDS_WriteParams_t* params);



DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_write_w_params_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* data,
    struct DDS_WriteParams_t* params);

#define DDS_DataWriter_write_w_params_untypedI( \
    ___self, __data, __params) \
    DDS_DataWriter_write_w_params_untyped_generalI( \
        ___self, NULL, __data, __params) \

#define DDS_DataWriter_write_directed_w_params_untypedI( \
    ___self, __remote_reader_handle, __data, __params) \
    DDS_DataWriter_write_w_params_untyped_generalI( \
        ___self, __remote_reader_handle, __data, __params) \


extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_dispose_untypedI(
    DDS_DataWriter* self,
    const void* data,
    const DDS_InstanceHandle_t* handle);

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_dispose_directed_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* data,
    const DDS_InstanceHandle_t* handle);

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_dispose_w_writer_info_untypedI(
    DDS_DataWriter* self,
    const struct DDS_OriginalWriterInfo_t * writer_info,
    const void* data,
    const DDS_InstanceHandle_t* handle);



DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_dispose_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const struct DDS_OriginalWriterInfo_t * writer_info,
    const void* data,
    const DDS_InstanceHandle_t* handle);

#define DDS_DataWriter_dispose_untypedI( \
    ___self, __data, __handle) \
    DDS_DataWriter_dispose_untyped_generalI( \
        ___self, NULL, NULL, __data, __handle) \

#define DDS_DataWriter_dispose_directed_untypedI( \
    ___self, __remote_reader_handle, __data, __handle) \
    DDS_DataWriter_dispose_untyped_generalI( \
        ___self, __remote_reader_handle, NULL, __data, __handle) \

#define DDS_DataWriter_dispose_w_writer_info_untypedI( \
    ___self, __writer_info, __data, __handle) \
    DDS_DataWriter_dispose_untyped_generalI( \
        ___self, NULL, __writer_info, __data, __handle) \


extern DDSCDllExport DDS_ReturnCode_t
DDS_DataWriter_dispose_w_timestamp_untypedI(
    DDS_DataWriter* self,
    const void* data,
    const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);

extern DDSCDllExport DDS_ReturnCode_t
DDS_DataWriter_dispose_directed_w_timestamp_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* data,
    const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);

extern DDSCDllExport DDS_ReturnCode_t
DDS_DataWriter_dispose_w_writer_info_w_timestamp_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const struct DDS_OriginalWriterInfo_t * writer_info,
    const void* data,
    const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);



DDSCDllExport DDS_ReturnCode_t
DDS_DataWriter_dispose_w_timestamp_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const struct DDS_OriginalWriterInfo_t * writer_info,
    const void* data,
    const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);

#define DDS_DataWriter_dispose_w_timestamp_untypedI( \
    ___self, __data, __handle, __source_timestamp) \
    DDS_DataWriter_dispose_w_timestamp_untyped_generalI( \
        ___self, NULL, NULL, __data, __handle, __source_timestamp) \

#define DDS_DataWriter_dispose_directed_w_timestamp_untypedI( \
    ___self, __remote_reader_handle, __data, __handle, __source_timestamp) \
    DDS_DataWriter_dispose_w_timestamp_untyped_generalI( \
        ___self, __remote_reader_handle, NULL, __data, __handle, __source_timestamp) \

#define DDS_DataWriter_dispose_w_writer_info_w_timestamp_untypedI( \
    ___self, __writer_info, __data, __handle, __source_timestamp) \
    DDS_DataWriter_dispose_w_timestamp_untyped_generalI( \
        ___self, NULL, __writer_info, __data, __handle, __source_timestamp)


extern DDSCDllExport DDS_ReturnCode_t
DDS_DataWriter_dispose_w_params_untypedI(
    DDS_DataWriter* self,
    const void* data,
    struct DDS_WriteParams_t* params);

extern DDSCDllExport DDS_ReturnCode_t
DDS_DataWriter_dispose_directed_w_params_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* data,
    struct DDS_WriteParams_t* params);



DDSCDllExport DDS_ReturnCode_t
DDS_DataWriter_dispose_w_params_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* data,
    struct DDS_WriteParams_t* params);

#define DDS_DataWriter_dispose_w_params_untypedI( \
    ___self, __data, __params) \
    DDS_DataWriter_dispose_w_params_untyped_generalI( \
        ___self, NULL, __data, __params) \

#define DDS_DataWriter_dispose_directed_w_params_untypedI( \
    ___self, __remote_reader_handle, __data, __params) \
    DDS_DataWriter_dispose_w_params_untyped_generalI( \
        ___self, __remote_reader_handle, __data, __params) \


extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_get_key_value_untypedI(
    DDS_DataWriter* self,
    void* key_holder, const DDS_InstanceHandle_t* handle);

extern DDSCDllExport DDS_InstanceHandle_t 
DDS_DataWriter_lookup_instance_untypedI(
    DDS_DataWriter* self, const void* key_holder);

extern DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_free_instance_untypedI(
    DDS_DataWriter* self,
    const void* instance, const DDS_InstanceHandle_t* handle);

extern DDSCDllExport DDS_InstanceHandle_t 
DDS_DataWriter_register_instance_untypedI(
    DDS_DataWriter* self, const void* instance);

extern DDSCDllExport DDS_InstanceHandle_t 
DDS_DataWriter_register_instance_w_timestamp_untypedI(
    DDS_DataWriter* self, const void* instance,
    const struct DDS_Time_t* source_timestamp);

extern DDSCDllExport DDS_InstanceHandle_t 
DDS_DataWriter_register_instance_w_params_untypedI(
    DDS_DataWriter* self, const void* instance,
    struct DDS_WriteParams_t* params);

extern DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_untypedI(
    DDS_DataWriter* self,
    const void* instance, const DDS_InstanceHandle_t* handle);

extern DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_directed_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* instance, const DDS_InstanceHandle_t* handle);



DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* instance, const DDS_InstanceHandle_t* handle);

#define DDS_DataWriter_unregister_instance_untypedI( \
    ___self, __data, __handle) \
    DDS_DataWriter_unregister_instance_untyped_generalI( \
        ___self, NULL, __data, __handle) \

#define DDS_DataWriter_unregister_instance_directed_untypedI( \
    ___self, __remote_reader_handle, __data, __handle) \
    DDS_DataWriter_unregister_instance_untyped_generalI( \
        ___self, __remote_reader_handle, __data, __handle) \


extern DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_w_timestamp_untypedI(
    DDS_DataWriter* self,
    const void* instance, const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);

extern DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_directed_w_timestamp_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* instance, const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);



DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_w_timestamp_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* instance, const DDS_InstanceHandle_t* handle,
    const struct DDS_Time_t* source_timestamp);

#define DDS_DataWriter_unregister_instance_w_timestamp_untypedI( \
    ___self, __data, __handle, __source_timestamp) \
    DDS_DataWriter_unregister_instance_w_timestamp_untyped_generalI( \
        ___self, NULL, __data, __handle, __source_timestamp) \

#define DDS_DataWriter_unregister_instance_directed_w_timestamp_untypedI( \
    ___self, __remote_reader_handle, __data, __handle, __source_timestamp) \
    DDS_DataWriter_unregister_instance_w_timestamp_untyped_generalI( \
        ___self, __remote_reader_handle, __data, __handle, __source_timestamp) \


extern DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_w_params_untypedI(
    DDS_DataWriter* self,
    const void* instance, struct DDS_WriteParams_t* params);

extern DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_directed_w_params_untypedI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* instance,struct DDS_WriteParams_t* params);



DDSCDllExport DDS_ReturnCode_t 
DDS_DataWriter_unregister_instance_w_params_untyped_generalI(
    DDS_DataWriter* self,
    const DDS_InstanceHandle_t* remote_reader_handle,
    const void* instance, struct DDS_WriteParams_t* params);

#define DDS_DataWriter_unregister_instance_w_params_untypedI( \
    ___self, __data, __params) \
    DDS_DataWriter_unregister_instance_w_params_untyped_generalI( \
        ___self, NULL, __data, __params) \

#define DDS_DataWriter_unregister_instance_directed_w_params_untypedI( \
    ___self, __remote_reader_handle, __data, __params) \
    DDS_DataWriter_unregister_instance_w_params_untyped_generalI( \
        ___self, __remote_reader_handle, __data, __params) \


extern DDSCDllExport PRESTypePluginEndpointData
DDS_DataWriter_get_endpoint_dataI(
    DDS_DataWriter* self);

extern DDSCDllExport 
DDS_ReturnCode_t DDS_DataWriter_unblock_wait_for_acknowledgmentsI(
    DDS_DataWriter* self);

extern DDSCDllExport 
DDS_ReturnCode_t DDS_DataWriter_unblock_wait_for_sample_acknowledgmentI(
    DDS_DataWriter* self,
    const struct DDS_SampleIdentity_t * identity);

extern DDSCDllExport DDS_DataWriter* DDS_Publisher_create_datawriter_disabledI(
    DDS_Publisher* self,
    DDS_Boolean* need_enable,
    DDS_Topic* topic,
    const struct DDS_DataWriterQos* qos,
    const struct DDS_DataWriterListener* listener,
    DDS_StatusMask mask);

extern DDSCDllExport DDS_Boolean 
DDS_DataWriter_compare_typeI(DDS_DataWriter *self, const char* typeToCompare);

extern DDSCDllExport DDS_ReturnCode_t DDS_DataWriter_set_listenerI(
    DDS_DataWriter* self,
    const struct DDS_DataWriterListener* l, DDS_StatusMask mask, RTIBool logWarnEnable);


#define DDS_DataWriterIterator PRESPsWriterIterator

extern DDSCDllExport DDS_ReturnCode_t DDS_Publisher_begin_get_datawritersI(
    DDS_Publisher* self,
    struct DDS_DataWriterIterator ** iter,
    DDS_Long* max_writer_count); 

extern DDSCDllExport DDS_ReturnCode_t DDS_Publisher_end_get_datawritersI(
    DDS_Publisher* self,
    struct DDS_DataWriterIterator * iter); 

extern DDSCDllExport DDS_DataWriter* DDS_Publisher_get_next_writerI(
    DDS_Publisher* self,
    DDS_ReturnCode_t *failReason,    
    struct DDS_DataWriterIterator * iter); 

extern DDSCDllExport DDS_ReturnCode_t DDS_Publisher_set_listenerI(
    DDS_Publisher* self,
    const struct DDS_PublisherListener* l, DDS_StatusMask mask, RTIBool logWarnEnable);

extern DDSCDllExport
void DDS_PublisherQos_get_defaultI(struct DDS_PublisherQos* self);

extern DDSCDllExport
void DDS_DataWriterQos_get_defaultI(struct DDS_DataWriterQos* self);

extern DDSCDllExport
void DDS_DataWriterQos_copy_from_topic_qosI(
    struct DDS_DataWriterQos* self, const struct DDS_TopicQos* topic_qos);

extern DDSCDllExport void 
DDS_AcknowledgmentInfo_initialize(struct DDS_AcknowledgmentInfo* self);

extern DDSCDllExport void 
DDS_AcknowledgmentInfo_finalize(struct DDS_AcknowledgmentInfo* self);

extern DDSCDllExport struct DDS_AcknowledgmentInfo* 
DDS_AcknowledgmentInfo_copy(
    struct DDS_AcknowledgmentInfo* self,
    const struct DDS_AcknowledgmentInfo* src);

extern DDSCDllExport DDS_Boolean 
DDS_AcknowledgmentInfo_equals(
    const struct DDS_AcknowledgmentInfo* left,
    const struct DDS_AcknowledgmentInfo* right);

extern DDSCDllExport DDS_Boolean DDS_Publisher_is_implicitI(
    DDS_Publisher* self);


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* dds_c_publication_impl_h */
