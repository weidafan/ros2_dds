/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)disc_dll.h    generated by: makeheader    Mon Apr 25 07:50:26 2016
 *
 *		built from:	dll.ifc
 */

#ifndef disc_dll_h
#define disc_dll_h



#if defined(RTI_WIN32) || defined(RTI_WINCE)
  #if defined(RTI_disc_DLL_EXPORT)
    #define DISCDllExport __declspec( dllexport )
  #else
    #define DISCDllExport
  #endif /* RTI_disc_DLL_EXPORT */

  #if defined(RTI_disc_DLL_VARIABLE) 
    #if defined(RTI_disc_DLL_EXPORT)
      #define DISCDllVariable __declspec( dllexport )
    #else
      #define DISCDllVariable __declspec( dllimport )
    #endif /* RTI_disc_DLL_EXPORT */
  #else 
    #define DISCDllVariable
  #endif /* RTI_disc_DLL_VARIABLE */
#else
  #define DISCDllExport
  #define DISCDllVariable
#endif /* RTI_WIN32 || RTI_WINCE */


#endif /* disc_dll_h */