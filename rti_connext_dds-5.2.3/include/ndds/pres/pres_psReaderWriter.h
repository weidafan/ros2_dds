/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)pres_psReaderWriter.h    generated by: makeheader    Mon Apr 25 07:50:19 2016
 *
 *		built from:	psReaderWriter.ifc
 */

#ifndef pres_psReaderWriter_h
#define pres_psReaderWriter_h


  #ifndef mig_generator_h
     #include "mig/mig_generator.h"
  #endif
  #ifndef pres_dll_h
     #include "pres/pres_dll.h"
  #endif
  #ifndef pres_common_h
     #include "pres/pres_common.h"
  #endif
  #ifndef pres_writerStatistics_h
    #include "pres/pres_writerStatistics.h"
  #endif
  #ifndef pres_readerStatistics_h
    #include "pres/pres_readerStatistics.h"
  #endif
  #ifndef pres_typePlugin_h
    #include "pres/pres_typePlugin.h"
  #endif
  #ifndef pres_participant_h
    #include "pres/pres_participant.h"
  #endif
  #ifndef pres_psService_h
    #include "pres/pres_psService.h"
  #endif
	
#ifdef __cplusplus
    extern "C" {
#endif

struct REDAWorker;

struct PRESPsReader;

struct PRESPsWriter;

struct PRESLocalEndpointStatisticsListener;

struct PRESPsWriterStatisticsListener;

struct PRESPsReaderStatisticsListener;

  
    #define PRES_PS_READER_READ_TAKE_MAX_COUNT_UNLIMITED (-1)

extern PRESDllExport RTIBool 
PRESPsReader_addRemoteWriterQueue(
    struct PRESPsReader *reader,     
    const struct MIGRtpsGuid *queueWriterGuid,
    const struct PRESPsSrWriterProperty *psWriterProperty,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool 
PRESPsReader_deleteRemoteWriterQueue(
    struct PRESPsReader *reader,     
    const struct MIGRtpsGuid *queueWriterGuid,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool 
PRESPsReader_addSampleToRemoteWriterQueue(
    struct PRESPsReader *reader,
    struct PRESReaderServiceLocalData* localData,
    const struct MIGRtpsGuid *queueWriterGuid,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_read(struct PRESPsReader *me, int *successReason,
		  void ***dataArray, int *dataCount,
		  struct PRESLoanedSampleInfo ***infoArray, int *infoCount,
		  int maxCount, PRESSampleStateMask sMask,
		  PRESViewStateMask vMask, PRESInstanceStateMask iMask,
		  struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_take(struct PRESPsReader *me, int *successReason,
		  void ***dataArray, int *dataCount,
		  struct PRESLoanedSampleInfo ***infoArray, int *infoCount,
		  int maxCount, PRESSampleStateMask sMask,
		  PRESViewStateMask vMask, PRESInstanceStateMask iMask,
		  struct REDAWorker *worker);

extern PRESDllExport void
PRESPsReader_finish(struct PRESPsReader *me, void **dataArray, int dataCount,
		    struct PRESLoanedSampleInfo **infoArray, int infoCount,
                   RTIBool retryCommit,
		    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_readInstance(struct PRESPsReader *me, int *successReason,
			  int *failReason,
			  void ***dataArray, int *dataCount,
			  struct PRESLoanedSampleInfo ***infoArray, int *infoCount,
			  int maxCount, const struct PRESInstanceHandle *handle,
			  PRESSampleStateMask sMask,
			  PRESViewStateMask vMask, PRESInstanceStateMask iMask,
			  struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_takeInstance(struct PRESPsReader *me, int *successReason,
			  int *failReason,
			  void ***dataArray, int *dataCount,
			  struct PRESLoanedSampleInfo ***infoArray, int *infoCount,
			  int maxCount, const struct PRESInstanceHandle *handle,
			  PRESSampleStateMask sMask,
			  PRESViewStateMask vMask, PRESInstanceStateMask iMask,
			  struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_readNextInstance(struct PRESPsReader *me, int *successReason,
			      void ***dataArray, int *dataCount,
			      struct PRESLoanedSampleInfo ***infoArray,
			      int *infoCount,
			      int maxCount,
			      const struct PRESInstanceHandle *handle,
			      PRESSampleStateMask sMask,
			      PRESViewStateMask vMask,
			      PRESInstanceStateMask iMask,
			      struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_takeNextInstance(struct PRESPsReader *me, int *successReason,
			      void ***dataArray, int *dataCount,
			      struct PRESLoanedSampleInfo ***infoArray,
			      int *infoCount,
			      int maxCount,
			      const struct PRESInstanceHandle *handle,
			      PRESSampleStateMask sMask,
			      PRESViewStateMask vMask,
			      PRESInstanceStateMask iMask,
			      struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_readNextSample(struct PRESPsReader *me, RTIBool *validSample,
			    void *data, struct PRESSampleInfo *info,
			    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_takeNextSample(struct PRESPsReader *me, RTIBool *validSample,
			    void *data, struct PRESSampleInfo *info,
			    struct REDAWorker *worker);

typedef RTIBool (*PRESPsReaderTransformSampleFunction)(
    void *out, const void *in, void *transformOption);

typedef enum {
    PRES_PS_READER_SAMPLE_KIND_DATA       = 0x00,
    PRES_PS_READER_SAMPLE_KIND_DISPOSED   = 0x01,
    PRES_PS_READER_SAMPLE_KIND_NO_WRITERS = 0x02
} PRESPsReaderSampleKind;

extern PRESDllExport RTIBool 
PRESPsReader_addSample(
    struct PRESPsReader *me, 
    PRESPsReaderTransformSampleFunction transformFnc, 
    const void *data,
    const struct MIGRtpsGuid *remoteWriterGuidIn,
    const struct MIGRtpsKeyHash *keyHash, 
    const struct RTINtpTime *sourceTimestamp, 
    PRESPsReaderSampleKind sampleKind, 
    const struct RTINtpTime *receptionTimestamp, 
    const struct RTINtpTime *now, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getKey(struct PRESPsReader *me, int* failReason, void *keyHolder,
		    const struct PRESInstanceHandle *instanceHandle,
		    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getProperty(struct PRESPsReader *me,
			 struct PRESLocalEndpointProperty *property,
			 struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setProperty(struct PRESPsReader *me, int *failReason,
			 const struct PRESLocalEndpointProperty *property,
			 struct REDAWorker *worker);

extern PRESDllExport
PRESTypePluginEndpointData PRESPsReader_getEndpointData(
    struct PRESPsReader *me, struct REDAWorker *worker);

extern PRESDllExport
PRESTypePluginEndpointData PRESPsWriter_getEndpointData(
    struct PRESPsWriter *me, struct REDAWorker *worker);

extern PRESDllExport struct PRESLocalEndpointListener *
PRESPsReader_getListener(struct PRESPsReader *me, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setListener(struct PRESPsReader *me, int *failReason,
			 const struct PRESLocalEndpointListener *listener,
			 PRESStatusKindMask mask, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_enable(struct PRESPsReader *me,int *failReason,
		    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_isEnabled(struct PRESPsReader *me);

extern PRESDllExport void
PRESPsReader_getInstanceHandle(
    struct PRESPsReader *me,
    struct PRESInstanceHandle *handle);

extern PRESDllExport void
PRESPsReader_lookupInstance(
    struct PRESPsReader *me,
    const void* key_holder,
    struct PRESInstanceHandle *handle,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getSampleRejectedStatus(
    struct PRESPsReader *reader, 
    struct PRESSampleRejectedStatus *status, 
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getRequestedDeadlineMissedStatus(
    struct PRESPsReader *reader, 
    struct PRESRequestedDeadlineMissedStatus *status, 
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getLivelinessChangedStatus(
    struct PRESPsReader *reader, struct PRESLivelinessChangedStatus *status, 
    RTIBool clearChange, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getRequestedIncompatibleQosStatus(
    struct PRESPsReader *reader, 
    struct PRESRequestedIncompatibleQosStatus *status, 
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getSampleLostStatus(
    struct PRESPsReader *reader, 
    struct PRESSampleLostStatus *status, 
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getSubscriptionMatchStatus(
    struct PRESPsReader *reader, struct PRESSubscriptionMatchStatus *status,
    RTIBool clearChange, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getDataReaderCacheStatus(
    struct PRESPsReader *me,
    struct PRESPsDataReaderCacheStatus *status,
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getDataReaderProtocolStatus(
    struct PRESPsReader *me,
    struct PRESPsReaderLocalReaderStatistics *status,
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getMatchedPublicationDataReaderProtocolStatus(
    struct PRESPsReader *me,
    struct COMMENDReaderServiceMatchedWriterStatistics *status,
    const struct MIGRtpsGuid *publicationGuid,
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setSampleRejectedStatus(
    struct PRESPsReader *reader, int *failReason,
    const struct PRESSampleRejectedStatus *status, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setRequestedDeadlineMissedStatus(
    struct PRESPsReader *reader, int *failReason,
    const struct PRESRequestedDeadlineMissedStatus *status, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setLivelinessChangedStatus(
    struct PRESPsReader *reader, int *failReason,
    const struct PRESLivelinessChangedStatus *status, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setRequestedIncompatibleQosStatus(
    struct PRESPsReader *reader, int *failReason,
    const struct PRESRequestedIncompatibleQosStatus *status, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setSampleLostStatus(
    struct PRESPsReader *reader, int *failReason,
    const struct PRESSampleLostStatus *status, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setSubscriptionMatchStatus(
    struct PRESPsWriter *writer, int *failReason,
    const struct PRESSubscriptionMatchStatus *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setDataReaderCacheStatus(
    struct PRESPsReader *me,
    const struct PRESPsDataReaderCacheStatus *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setDataReaderProtocolStatus(
    struct PRESPsReader *me,
    const struct PRESPsReaderLocalReaderStatistics *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_setMatchedPublicationDataReaderProtocolStatus(
    struct PRESPsReader *me,
    const struct COMMENDReaderServiceMatchedWriterStatistics *status,
    const struct MIGRtpsGuid *publicationGuid,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_copyToSampleArray(
    struct PRESPsReader *reader, 
    char *dst, 
    void ***src, 
    int elementSize, 
    int elementCount,
    struct REDAWorker *worker);

extern PRESDllExport PRESStatusKindMask
PRESPsReader_getStatusChange(struct PRESPsReader *reader, 
			     struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_destroyAllConditions(struct PRESPsReader *reader, 
				  int *failReason,
				  struct REDAWorker *worker);

extern PRESDllExport PRESWord *
PRESPsReader_getUserObject(struct PRESPsReader *me);

extern PRESDllExport RTIBool
PRESPsReader_callListener(
    struct PRESPsReader *reader, int *failReason, PRESStatusKindMask mask,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_waitForHistoricalData(
    struct PRESPsReader *reader, int *failReason, struct RTINtpTime *timeout,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_getGuid(struct PRESPsReader *reader, 
	             struct MIGRtpsGuid *guid,
		     struct REDAWorker *worker);


#define PRESMatchingPsWriterIterator REDACursor

extern PRESDllExport
RTIBool PRESPsReader_beginGetMatchingPsWriters(
                               struct PRESPsReader *self,
                               struct PRESMatchingPsWriterIterator ** iter,
                               RTI_INT32 *maxMatchingPsWriters,
                               struct REDAWorker *worker); 

extern PRESDllExport                                   
RTIBool PRESPsReader_endGetMatchingPsWriters(
                              struct PRESPsReader *self,
                              struct PRESMatchingPsWriterIterator * iter,
                              struct REDAWorker *worker); 

extern PRESDllExport
RTIBool PRESPsReader_getNextMatchingPsWriter(
                              struct PRESPsReader *self,
                              int *failReason,
                              struct PRESMatchingPsWriterIterator *iter,
                              struct PRESInstanceHandle *handle,
                              struct REDAWorker *worker); 

extern PRESDllExport
RTIBool PRESPsReader_setLastReceivedSn(
    struct PRESPsReader * self, int *failReason,
    const struct MIGRtpsGuid * remoteWriterGuid,
    int offsetMode,
    const struct REDASequenceNumber * sn,
    struct REDAWorker * worker);

extern PRESDllExport RTIBool
PRESPsReader_acknowledgeSample(
    struct PRESPsReader *reader, int *failReason,
    const struct MIGRtpsGuid * virtualWriterGuid,
    const struct REDASequenceNumber * sn,
    const struct PRESAckResponseData *respData,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_acknowledgeUpThroughSample(
    struct PRESPsReader *reader, int *failReason,
    const struct MIGRtpsGuid * virtualWriterGuid,
    const struct REDASequenceNumber * sn,
    const struct PRESAckResponseData *respData,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsReader_acknowledgeAll(
    struct PRESPsReader *reader, int *failReason,
    const struct PRESAckResponseData *respData,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_registerInstance(struct PRESPsWriter *me, 
			      struct PRESInstanceHandle *instanceHandle,
			      const void *keyHolder,
			      const struct RTINtpTime *sourceTimestamp,
			      struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_write(struct PRESPsWriter *me, int *failReason, 
                   const void *data, 
		   const struct PRESWriteParams *writeParams,
		   struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_writeEndian(struct PRESPsWriter *me, int *failReason, 
                         MIGGeneratorEndian endian,
                         const void *data, 
                         const struct PRESWriteParams *writeParams,
                         struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_writeDirected(struct PRESPsWriter *me, int *failReason, 
                       const struct PRESInstanceHandle *directedReaderHandle,
                       const void *data, 
                       const struct PRESWriteParams *writeParams,
                       struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_writeDirectedEndian(struct PRESPsWriter *me, int *failReason, 
                         MIGGeneratorEndian endian,
                         const struct PRESInstanceHandle *directedReaderHandle,
                         const void *data, 
                         const struct PRESWriteParams *writeParams,
                         struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_resend(struct PRESPsWriter *me, int *failReason, 
                    const struct RTINtpTime *minWait, 
		    const struct RTINtpTime *maxWait, int numResends,
                    const struct PRESLocatorQosPolicy * multicastLocators,
                    const struct PRESLocatorQosPolicy * unicastLocators,
		    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_dispose(struct PRESPsWriter *me, int* failReason,
                     const void *keyHolder,
                     const struct PRESWriteParams *writeParams,
		     struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_disposeDirected(struct PRESPsWriter *me, int* failReason,
                             const struct PRESInstanceHandle *directedReaderHandle,
                             const void *keyHolder,
                             const struct PRESWriteParams *writeParams,
                             struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_unregisterInstance(struct PRESPsWriter *me, int* failReason,
				const void *keyHolder,
                           const struct PRESOriginalWriterInfo * originalWriterInfo,
				struct PRESWriteParams * writeParams,
				struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_unregisterInstanceDirected(struct PRESPsWriter *me, int* failReason,
    		    const struct PRESInstanceHandle *directedReaderHandle,
				const void *keyHolder,
                           const struct PRESOriginalWriterInfo * originalWriterInfo,
				struct PRESWriteParams * writeParams,
				struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_freeInstance(struct PRESPsWriter *me, int* failReason,
				const void *keyHolder,
				const struct PRESInstanceHandle *instanceHandle,
				struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getKey(struct PRESPsWriter *me, int* failReason, void *keyHolder,
		    const struct PRESInstanceHandle *instanceHandle,
		    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getProperty(struct PRESPsWriter *me,
			 struct PRESLocalEndpointProperty *property,
			 struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setProperty(struct PRESPsWriter *me, int *failReason,
			 const struct PRESLocalEndpointProperty *property,
			 struct REDAWorker *worker);

extern PRESDllExport struct PRESLocalEndpointListener *
PRESPsWriter_getListener(struct PRESPsWriter *me, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setListener(struct PRESPsWriter *me, int *failReason,
			 const struct PRESLocalEndpointListener *listener,
			 PRESStatusKindMask mask, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_enable(struct PRESPsWriter *me,int *failReason,
		    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_isEnabled(struct PRESPsWriter *me);

extern PRESDllExport void
PRESPsWriter_getInstanceHandle(
    struct PRESPsWriter *me,
    struct PRESInstanceHandle *handle);

extern PRESDllExport void
PRESPsWriter_lookupInstance(
    struct PRESPsWriter *me,
    const void* key_holder,
    struct PRESInstanceHandle *handle,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_assertLiveliness(struct PRESPsWriter *writer, int *failReason,
			      struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getOfferedDeadlineMissedStatus(
    struct PRESPsWriter *writer, struct PRESOfferedDeadlineMissedStatus *status,
    RTIBool clearChange, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getLivelinessLostStatus(
    struct PRESPsWriter *writer, struct PRESLivelinessLostStatus *status,
    RTIBool clearChange, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getOfferedIncompatibleQosStatus(
    struct PRESPsWriter *writer, 
    struct PRESOfferedIncompatibleQosStatus *status, 
    RTIBool clearChange, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getLivelinessChangedStatus(
    struct PRESPsWriter *writer, struct PRESLivelinessChangedStatus *status,
    RTIBool clearChange, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getPublicationMatchStatus(
    struct PRESPsWriter *writer, struct PRESPublicationMatchStatus *status,
    RTIBool clearChange, struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getPublicationReliableQueueStatus(
    struct PRESPsWriter *writer, 
    struct PRESPublicationReliableQueueStatus *status,
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getDataWriterCacheStatus(
    struct PRESPsWriter *me,
    struct PRESPsDataWriterCacheStatus *status,
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getDataWriterProtocolStatus(
    struct PRESPsWriter *me,
    struct COMMENDWriterServiceLocalWriterStatistics *status,
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getMatchedSubscriptionDataWriterProtocolStatus(
    struct PRESPsWriter *me,
    struct COMMENDWriterServiceMatchedReaderStatistics *status,
    const struct MIGRtpsGuid *subcriptionGuid,
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_getMatchedSubscriptionDataWriterProtocolStatusByLocator(
    struct PRESPsWriter *me,
    struct COMMENDWriterServiceMatchedDestinationStatistics *status,
    const struct RTINetioLocator *locator,
    RTIBool clearChange, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setOfferedDeadlineMissedStatus(
    struct PRESPsWriter *writer, int *failReason,
    const struct PRESOfferedDeadlineMissedStatus *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setLivelinessLostStatus(
    struct PRESPsWriter *writer, int *failReason,
    const struct PRESLivelinessLostStatus *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setOfferedIncompatibleQosStatus(
    struct PRESPsWriter *writer, int *failReason,
    const struct PRESOfferedIncompatibleQosStatus *status, 
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setLivelinessChangedStatus(
    struct PRESPsWriter *writer, int *failReason,
    const struct PRESLivelinessChangedStatus *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setPublicationMatchStatus(
    struct PRESPsWriter *writer, int *failReason,
    const struct PRESPublicationMatchStatus *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setPublicationReliableQueueStatus(
    struct PRESPsWriter *writer, int *failReason,
    const struct PRESPublicationReliableQueueStatus *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setDataWriterCacheStatus(
    struct PRESPsWriter *me,
    const struct PRESPsDataWriterCacheStatus *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setDataWriterProtocolStatus(
    struct PRESPsWriter *me,
    const struct COMMENDWriterServiceLocalWriterStatistics *status,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setMatchedSubscriptionDataWriterProtocolStatus(
    struct PRESPsWriter *me,
    const struct COMMENDWriterServiceMatchedReaderStatistics *status,
    const struct MIGRtpsGuid *subcriptionGuid,
    struct REDAWorker *worker);

extern PRESDllExport RTIBool
PRESPsWriter_setMatchedSubscriptionDataWriterProtocolStatusByLocator(
    struct PRESPsWriter *me,
    const struct COMMENDWriterServiceMatchedDestinationStatistics *status,
    const struct RTINetioLocator *locator,
    struct REDAWorker *worker);

extern PRESDllExport PRESStatusKind
PRESPsWriter_getStatusChange(struct PRESPsWriter *writer, 
			     struct REDAWorker *worker);

extern PRESDllExport PRESWord *
PRESPsWriter_getUserObject(struct PRESPsWriter *me);

extern PRESDllExport RTIBool
PRESPsWriter_callListener(
    struct PRESPsWriter *writer, int *failReason, PRESStatusKindMask mask,
    struct REDAWorker *worker);

extern PRESDllExport
int PRESPsWriter_waitForAcknowledgments(struct PRESPsWriter *writer,
           struct RTINtpTime* timeout, struct REDAWorker* worker);

extern PRESDllExport
int PRESPsWriter_waitForSampleAcknowledgment(
        struct PRESPsWriter *writer,
        const struct PRESOriginalWriterInfo * identity,
        struct RTINtpTime* timeout, struct REDAWorker* worker);

extern PRESDllExport
int PRESPsWriter_waitForAsynchPub(
           struct PRESPsWriter *writer,
           struct RTINtpTime* timeout,
           struct REDAWorker* worker);

extern PRESDllExport RTIBool
PRESPsWriter_getGuid(struct PRESPsReader *reader, 
	             struct MIGRtpsGuid *guid,
		     struct REDAWorker *worker);

extern PRESDllExport int 
PRESPsWriter_forceWaitForAcknowledgementsTrigger(
    struct PRESPsWriter *self,
    const struct PRESOriginalWriterInfo * identity,
    struct REDAWorker* worker);

extern PRESDllExport int 
PRESWriter_isSampleAppAck(
        struct PRESPsWriter *self,
        RTIBool * isAppAck,
        const struct PRESOriginalWriterInfo * identity,
        struct REDAWorker* worker);


#define PRESMatchingPsReaderIterator REDACursor

extern PRESDllExport
RTIBool PRESPsWriter_beginGetMatchingPsReaders(
                               struct PRESPsWriter *self,
                               struct PRESMatchingPsReaderIterator ** iter,
                               RTI_INT32 *maxMatchingPsReaders,
                               struct REDAWorker *worker); 

extern PRESDllExport                                   
RTIBool PRESPsWriter_endGetMatchingPsReaders(
                              struct PRESPsWriter *self,
                              struct PRESMatchingPsReaderIterator * iter,
                              struct REDAWorker *worker); 

extern PRESDllExport
RTIBool PRESPsWriter_getNextMatchingPsReader(
                              struct PRESPsWriter *self,
                              int *failReason,
                              struct PRESMatchingPsReaderIterator *iter,
                              struct PRESInstanceHandle *handle,
                              struct REDAWorker *worker); 

extern PRESDllExport                                   
RTI_INT32 PRESPsWriter_getMatchedDestinations(
                              struct PRESPsWriter *self,
                              struct RTINetioLocator *matchedDestinations,
                              struct REDAWorker *worker); 

extern PRESDllExport
struct PRESWriterHistoryDriver *
PRESPsWriter_getWriterHistory(
    struct PRESPsWriter *me, 
    int *failReason,
    struct REDAWorker *worker);

extern PRESDllExport
RTIBool PRESPsWriter_setDurableSubscriptionInfo(
    struct PRESPsWriter *writer,
    const struct NDDS_WriterHistory_DurableSubscription * durSub,
    struct REDAWorker *worker);

extern PRESDllExport
RTIBool PRESPsWriter_getDurableSubscriptionInfo(
    struct PRESPsWriter *writer,
    struct NDDS_WriterHistory_DurableSubscription ** durSub,
    const char * durSubName,
    struct REDAWorker *worker);


#ifdef __cplusplus
    }	/* extern "C" */
#endif

  #include "pres/pres_psReaderWriter_impl.h"

#endif /* pres_psReaderWriter_h */
