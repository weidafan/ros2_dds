/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)clock_highResolution.h    generated by: makeheader    Mon Apr 25 07:49:40 2016
 *
 *		built from:	highResolution.ifc
 */

#ifndef clock_highResolution_h
#define clock_highResolution_h


  #ifndef clock_interface_h
    #include "clock/clock_interface.h"
  #endif
  #ifndef clock_dll_h
    #include "clock/clock_dll.h"
  #endif

#ifdef __cplusplus
    extern "C" {
#endif

extern RTIClockDllExport void
RTIHighResolutionClock_delete(struct RTIClock *me);

extern RTIClockDllExport struct RTIClock *RTIHighResolutionClock_new();


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* clock_highResolution_h */
