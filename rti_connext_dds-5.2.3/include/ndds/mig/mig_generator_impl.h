/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)mig_generator_impl.h    generated by: makeheader    Mon Apr 25 07:50:05 2016
 *
 *		built from:	generator_impl.ifc
 */

#ifndef mig_generator_impl_h
#define mig_generator_impl_h


  #ifndef osapi_bufferUtils_h
    #include "osapi/osapi_bufferUtils.h"
  #endif
  #ifndef reda_worker_h
    #include "reda/reda_worker.h"
  #endif

#ifdef __cplusplus
    extern "C" {
#endif



#define MIGGeneratorSample_isValid(me, index)           \
    (me != NULL &&                             \
     (((me)->serializedData[index].serializedData.pointer == NULL ||       \
       ((me)->serializedData[index].serializedData.length & 0x3) == 0)) && \
     (((me)->protocolParameters.pointer == NULL ||      \
       ((me)->protocolParameters.length & 0x3) == 0)))

#define MIG_GENERATOR_SAMPLE_BIT_NONE      (0x0)
#define MIG_GENERATOR_SAMPLE_BIT_TIMESTAMP (0x01)

#define MIGGeneratorSample_isTimestamped(me) \
    (((me)->_bitmap & MIG_GENERATOR_SAMPLE_BIT_TIMESTAMP) != 0)

#define MIGGeneratorSample_compare ((REDAOrderedDataTypeCompareFunction) \
                                  REDASequenceNumber_compare)

#define MIGGeneratorSample_copy(me, src) \
    RTIOsapiMemory_copy(me, src, sizeof(struct MIGGeneratorSample))

MIGDllVariable extern struct REDAObjectPerWorker *MIG_GENERATOR_STAT_PER_WORKER;

#define MIGGeneratorWorkerStat_getStorageLazy(statPtr, worker) \
    ( *(statPtr) = (struct MIGGeneratorWorkerStat *)           \
        REDAWorker_assertObject(worker, MIG_GENERATOR_STAT_PER_WORKER) )



#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* mig_generator_impl_h */
