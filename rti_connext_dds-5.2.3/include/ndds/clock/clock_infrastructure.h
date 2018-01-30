/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)clock_infrastructure.h    generated by: makeheader    Mon Apr 25 07:49:40 2016
 *
 *		built from:	infrastructure.ifc
 */

#ifndef clock_infrastructure_h
#define clock_infrastructure_h


	#ifndef osapi_type_h
		#include "osapi/osapi_type.h"
	#endif
	#ifndef osapi_ntptime_h
		#include "osapi/osapi_ntptime.h"
	#endif
	#ifndef clock_interface_h
		#include "clock/clock_interface.h"
	#endif
	#ifndef clock_dll_h
		#include "clock/clock_dll.h"
	#endif
#ifdef __cplusplus
    extern "C" {
#endif

extern RTIClockDllExport RTIBool
RTIClock_getTimeOverhead(struct RTIClock *clock, struct RTINtpTime *overhead);

extern RTIClockDllExport RTIBool
RTIClock_getSpinPerMicrosecond(struct RTIClock *clock, RTI_UINT64 * spinPerUsec);


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* clock_infrastructure_h */
