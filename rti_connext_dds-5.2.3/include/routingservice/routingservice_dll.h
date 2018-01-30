/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)routingservice_dll.h    generated by: makeheader    Mon Apr 25 08:04:02 2016
 *
 *		built from:	dll.ifc
 */

#ifndef routingservice_dll_h
#define routingservice_dll_h



#if defined(RTI_WIN32) || defined(RTI_WINCE)
  #if defined(RTI_routingservice_DLL_EXPORT)
    #define ROUTERDllExport __declspec( dllexport )
  #else
    #define ROUTERDllExport
  #endif /* RTI_routingservice_DLL_EXPORT */

  #if defined(RTI_routingservice_DLL_VARIABLE) 
    #if defined(RTI_routingservice_DLL_EXPORT)
      #define ROUTERDllVariable __declspec( dllexport )
    #else
      #define ROUTERDllVariable __declspec( dllimport )
    #endif /* RTI_routingservice_DLL_EXPORT */
  #else 
    #define ROUTERDllVariable
  #endif /* RTI_routingservice_DLL_VARIABLE */
#else
  #define ROUTERDllExport
  #define ROUTERDllVariable
#endif /* RTI_WIN32 || RTI_WINCE */


#endif /* routingservice_dll_h */
