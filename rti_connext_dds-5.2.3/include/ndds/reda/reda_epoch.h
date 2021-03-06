/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)reda_epoch.h    generated by: makeheader    Mon Apr 25 07:49:43 2016
 *
 *		built from:	epoch.ifc
 */

#ifndef reda_epoch_h
#define reda_epoch_h


  #ifndef reda_dll_h
    #include "reda/reda_dll.h"
  #endif

#ifdef __cplusplus
    extern "C" {
#endif

typedef unsigned int REDAEpoch;


  #define REDA_EPOCH_UNKNOWN (0)


  #define REDA_EPOCH_HALF_VALUE ((REDAEpoch)0x80000000)

extern REDADllExport int REDAEpoch_isGreater(REDAEpoch me, REDAEpoch value);

extern REDADllExport int REDAEpoch_isLess(REDAEpoch me, REDAEpoch value);


#ifdef __cplusplus
    }	/* extern "C" */
#endif

  #include "reda/reda_epoch_impl.h"

#endif /* reda_epoch_h */
