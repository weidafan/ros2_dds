/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)connext_c_untyped_impl.h    generated by: makeheader    Mon Apr 25 07:52:14 2016
 *
 *		built from:	untyped_impl.ifc
 */

#ifndef connext_c_untyped_impl_h
#define connext_c_untyped_impl_h



#include "clock/clock_interface.h"

#include "connext_c/connext_c_entity_params.h"

#ifndef connext_cpp_dll_h
  #include "connext_c/connext_c_dll.h"
#endif

#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif


struct RTI_Connext_EntityUntypedImpl;

typedef DDS_ReturnCode_t (*RegisterTypeFunc)
    (DDS_DomainParticipant*, const char*);

extern XMQCDllExport
DDS_ReturnCode_t RTI_Connext_EntityUntypedImpl_wait_for_samples(
    struct RTI_Connext_EntityUntypedImpl* self,
    const struct DDS_Duration_t* max_wait,
    int min_sample_count,
    DDS_WaitSet* waitset,
    DDS_ReadCondition * initial_condition,
    DDS_ReadCondition * condition);

extern XMQCDllExport
DDS_ReturnCode_t RTI_Connext_EntityUntypedImpl_get_sample_loaned(
    struct RTI_Connext_EntityUntypedImpl* self,
    void *** received_data,
    int * data_count,
    DDS_Boolean* is_loan,
    void* dataSeqContiguousBuffer,
    struct DDS_SampleInfoSeq* info_seq,
    DDS_Long data_seq_len,
    DDS_Long data_seq_max_len,
    DDS_Boolean ownership,
    DDS_Long max_samples,
    DDS_ReadCondition * read_condition,
    RTIBool take);

extern XMQCDllExport
DDS_ReturnCode_t RTI_Connext_EntityUntypedImpl_send_sample(
    struct RTI_Connext_EntityUntypedImpl* self,
    const void * data,
    struct DDS_WriteParams_t* info);

extern XMQCDllExport
DDS_ReturnCode_t RTI_Connext_EntityUntypedImpl_wait_for_any_sample(
    struct RTI_Connext_EntityUntypedImpl* self,
    const struct DDS_Duration_t* max_wait,
    int min_sample_count);

extern XMQCDllExport
DDS_ReturnCode_t RTI_Connext_EntityUntypedImpl_return_loan(
    struct RTI_Connext_EntityUntypedImpl* self,
    void ** dataArray,
    struct DDS_SampleInfoSeq* info_seq);

extern XMQCDllExport
DDS_DataWriter* RTI_Connext_EntityUntypedImpl_get_datawriter(
    struct RTI_Connext_EntityUntypedImpl* self);

extern XMQCDllExport
DDS_DataReader* RTI_Connext_EntityUntypedImpl_get_datareader(
    struct RTI_Connext_EntityUntypedImpl* self);

extern XMQCDllExport
DDS_ReturnCode_t RTI_Connext_EntityUntypedImpl_delete(
    struct RTI_Connext_EntityUntypedImpl * self);

extern XMQCDllExport
RTIBool RTI_Connext_EntityUntypedImpl_validate_receive_params(
    const struct RTI_Connext_EntityUntypedImpl * self,
    const char * METHOD_NAME,
    DDS_Long min_count,
    DDS_Long max_count,
    const struct DDS_Duration_t * max_wait);

#endif /* connext_c_untyped_impl_h */
