/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)writer_history_memory.h    generated by: makeheader    Mon Apr 25 07:50:14 2016
 *
 *		built from:	memory.ifc
 */

#ifndef writer_history_memory_h
#define writer_history_memory_h



#ifndef writer_history_dll_h
#include "writer_history/writer_history_dll.h"
#endif

#ifndef writer_history_interface_h
#include "writer_history/writer_history_interface.h"
#endif

#ifdef __cplusplus
    extern "C" {
#endif


extern WRITERHISTORYDllExport 
RTI_INT32 NDDS_WriterHistory_MemoryPlugin_create(
    struct NDDS_WriterHistory_Plugin ** plugin_out);



#ifdef __cplusplus
    }	/* extern "C" */
#endif


#endif /* writer_history_memory_h */