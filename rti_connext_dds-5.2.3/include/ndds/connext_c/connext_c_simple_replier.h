/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)connext_c_simple_replier.h    generated by: makeheader    Mon Apr 25 07:52:13 2016
 *
 *		built from:	simple_replier.ifc
 */

#ifndef connext_c_simple_replier_h
#define connext_c_simple_replier_h



#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif

#ifndef connext_cpp_dll_h
  #include "connext_c/connext_c_dll.h"
#endif

#include "connext_c/connext_c_replier.h"

#ifndef connext_c_entity_params_h
  #include "connext_c/connext_c_entity_params.h"
#endif  


#define NDDSUSERDllExport

/**
 * \dref_SimpleReplierParams
 */
typedef struct RTI_Connext_SimpleReplierParams {

    /**
     * \dref_SimpleReplierParams_participant
     */
    DDS_DomainParticipant * participant;

    /**
     * \dref_SimpleReplierParams_service_name
     */
    char* service_name;

    /**
     * \dref_SimpleReplierParams_request_topic_name
     */
    char* request_topic_name;

    /**
     * \dref_SimpleReplierParams_reply_topic_name
     */
    char* reply_topic_name;

    /**
     * \dref_SimpleReplierParams_qos_library_name
     */
    char* qos_library_name;

    /**
     * \dref_SimpleReplierParams_qos_profile
     */
    char* qos_profile_name;

    /**
     * \dref_SimpleReplierParams_datawriter_qos
     */
    const struct DDS_DataWriterQos * datawriter_qos;

    /**
     * \dref_SimpleReplierParams_datareader_qos
     */
    const struct DDS_DataReaderQos * datareader_qos;

    /**
     * \dref_SimpleReplierParams_publisher
     */
    DDS_Publisher * publisher;

    /**
     * \dref_SimpleReplierParams_subscriber
     */
    DDS_Subscriber * subscriber;

    /**
     * \dref_SimpleReplierParams_listener
     */
    struct RTI_Connext_SimpleReplierListener* simple_listener;
} RTI_Connext_SimpleReplierParams;


extern XMQCDllExport
DDS_ReturnCode_t RTI_Connext_SimpleReplierParams_to_entityparams(
    const RTI_Connext_SimpleReplierParams* self,
    RTI_Connext_EntityParams* toParams);

/**
 * @ingroup ReplierModule
 * @brief Initializes a RTI_Connext_SimpleReplierParams instance
 *
 * \hideinitializer
 */

#define RTI_Connext_SimpleReplierParams_INITIALIZER { \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL  \
}



/* --- Type-specific functions : ------------------------------------------- */

#ifdef DOXYGEN_DOCUMENTATION_ONLY

/**
 * \dref_SimpleReplier
 */
typedef struct FooBarSimpleReplier {
    struct RTI_Connext_Replier parent;
} FooBarSimpleReplier;

/**
 * \dref_SimpleReplier_new
 */
FooBarSimpleReplier* FooBarSimpleReplier_create(
    DDS_DomainParticipant * participant,
    char* service_name, RTI_Connext_SimpleReplierListener* listener);

/**
 * \dref_SimpleReplier_new_w_params
 */
FooBarSimpleReplier* FooBarSimpleReplier_create_w_params(
    RTI_Connext_SimpleReplierParams* params);

/**
 * \dref_SimpleReplier_finalize
 */
DDS_ReturnCode_t FooBarSimpleReplier_delete(FooBarSimpleReplier * self);

/**
 * \dref_SimpleReplier_get_request_datareader
 */
FooDataReader* FooBarSimpleReplier_get_request_datareader(
    FooBarSimpleReplier* self);

/**
 * \dref_SimpleReplier_get_reply_datawriter
 */
BarDataWriter* FooBarSimpleReplier_get_reply_datawriter(
    FooBarSimpleReplier* self);

#endif

/**
 * @ingroup ReplierModule
 *
 * @brief Instantiates the declaration of a typed SimpleReplier and its operations.
 *
 * @param TReq The request type name
 * @param TRep The reply type name
 * @param TSimpleReplier The type name for the typed SimpleReplier
 *         and the prefix for all the operations.
 *
 * @see \ref RequestReplyExampleModule_simple_replier
 * \hideinitializer
 */
#define RTI_CONNEXT_SIMPLEREPLIER_DECL(TReq, TRep, TSimpleReplier)            \
                                                                              \
    typedef struct TSimpleReplier {                                           \
        struct RTI_Connext_Replier parent;                                    \
    } TSimpleReplier;                                                         \
                                                                              \
    NDDSUSERDllExport XMQCDllExport                                           \
    TSimpleReplier* TSimpleReplier ## _create(                                \
    DDS_DomainParticipant * participant,                                      \
    char* service_name, RTI_Connext_SimpleReplierListener* listener);         \
                                                                              \
    NDDSUSERDllExport XMQCDllExport                                           \
    TSimpleReplier * TSimpleReplier ## _create_w_params(                      \
        RTI_Connext_SimpleReplierParams* params);                             \
                                                                              \
    NDDSUSERDllExport XMQCDllExport                                           \
    DDS_ReturnCode_t TSimpleReplier ## _delete(                               \
        TSimpleReplier * self);                                               \
                                                                              \
    NDDSUSERDllExport XMQCDllExport                                           \
    TReq ## DataReader* TSimpleReplier ## _get_request_datareader(            \
        TSimpleReplier* self);                                                \
                                                                              \
    NDDSUSERDllExport XMQCDllExport                                           \
    TRep ## DataWriter* TSimpleReplier ## _get_reply_datawriter(              \
        TSimpleReplier* self);                                                \


#endif /* connext_c_simple_replier_h */
