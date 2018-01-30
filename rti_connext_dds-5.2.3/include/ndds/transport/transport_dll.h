/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)transport_dll.h    generated by: makeheader    Mon Apr 25 07:49:59 2016
 *
 *		built from:	dll.ifc
 */

#ifndef transport_dll_h
#define transport_dll_h



#if defined(RTI_WIN32) || defined(RTI_WINCE)
  #if defined(RTI_transport_DLL_EXPORT)
    #define NDDS_Transport_DllExport __declspec( dllexport )
  #else
    #define NDDS_Transport_DllExport
  #endif /* NDDS_transport_DLL_EXPORT */

  #if defined(RTI_transport_DLL_VARIABLE) 
    #if defined(RTI_transport_DLL_EXPORT)
      #define NDDS_Transport_DllVariable __declspec( dllexport )
    #else
      #define NDDS_Transport_DllVariable __declspec( dllimport )
    #endif /* NDDS_transport_DLL_EXPORT */
  #else 
    #define NDDS_Transport_DllVariable
    #endif /* NDDS_transport_DLL_VARIABLE */
#else
  #define NDDS_Transport_DllExport
  #define NDDS_Transport_DllVariable
#endif /* RTI_WIN32 || RTI_WINCE */

#endif /* transport_dll_h */
