/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)rti_dl_dll_c.h    generated by: makeheader    Mon Apr 25 07:52:11 2016
 *
 *		built from:	dll_c.ifc
 */

#ifndef rti_dl_dll_c_h
#define rti_dl_dll_c_h



#if defined(RTI_WIN32) || defined(RTI_WINCE)
  #if defined(RTI_rti_dl_c_DLL_EXPORT)
    #define RTIDLCDllExport __declspec( dllexport )
  #else
    #define RTIDLCDllExport
  #endif /* RTI_rti_dl_c_DLL_EXPORT */

  #if defined(RTI_rti_dl_c_DLL_VARIABLE) 
    #if defined(RTI_rti_dl_c_DLL_EXPORT)
      #define RTIDLCDllVariable __declspec( dllexport )
    #else
      #define RTIDLCDllVariable __declspec( dllimport )
    #endif /* RTI_rti_dl_c_DLL_EXPORT */
  #else 
    #define RTIDLCDllVariable
  #endif /* RTI_rti_dl_c_DLL_EXPORT */
#else
  #define RTIDLCDllExport
  #define RTIDLCDllVariable
#endif /* RTI_WIN32 || RTI_WINCE */


#endif /* rti_dl_dll_c_h */