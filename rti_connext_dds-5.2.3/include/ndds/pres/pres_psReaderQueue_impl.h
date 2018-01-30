/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)pres_psReaderQueue_impl.h    generated by: makeheader    Mon Apr 25 07:50:17 2016
 *
 *		built from:	psReaderQueue_impl.ifc
 */

#ifndef pres_psReaderQueue_impl_h
#define pres_psReaderQueue_impl_h


#ifdef __cplusplus
    extern "C" {
#endif



#define PRESPsReaderQueue_pruneLifespanExpiredEntries(me, now, \
        requiredEntryCount, alwaysCalculateState, \
        readConditionState, queryConditionState) \
    (PRESPsReaderQueue_pruneAndUpdate(me, now, requiredEntryCount, \
        RTI_FALSE, NULL, PRES_INSTANCE_STATE_INVALID, NULL, \
        alwaysCalculateState, readConditionState, queryConditionState))



#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* pres_psReaderQueue_impl_h */
