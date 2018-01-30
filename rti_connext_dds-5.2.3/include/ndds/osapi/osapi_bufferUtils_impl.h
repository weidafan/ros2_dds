/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)osapi_bufferUtils_impl.h    generated by: makeheader    Mon Apr 25 07:49:32 2016
 *
 *		built from:	bufferUtils_impl.ifc
 */

#ifndef osapi_bufferUtils_impl_h
#define osapi_bufferUtils_impl_h


  #include <string.h>

#ifdef __cplusplus
    extern "C" {
#endif




  #ifdef RTI_VXWORKS
    #if defined(__RTP__)
      #include <strings.h>
    #endif

    #define RTIOsapiMemory_copy(to, src, size) \
        if(size) bcopy((const char *)src, (char *)to, size)

    #define RTIOsapiMemory_move(to, src, size) \
        if(size) bcopy((const char *)src, (char *)to, size)

    /* NOTE: we use bfill here as this avoids a function call.  On VxWorks,
       bzero(m,s) is a function implemented as bfill(m,s,0) */
    #define RTIOsapiMemory_zero(m, size) bfill((char *)m, size, 0)
    #define RTIOsapiMemory_compare(l, r, size) \
       (((size) == 0) ? 0 : bcmp((char *)l, (char *)r, size))

  #else

    #define RTIOsapiMemory_copy(to, src, size) if(size) memcpy(to, src, size)
    #define RTIOsapiMemory_move(to, src, size) if(size) memmove(to, src, size)
    #define RTIOsapiMemory_zero(m, size) memset(m, 0, size)
    #define RTIOsapiMemory_compare(l, r, size) \
        (((size) == 0) ? 0 : memcmp(l, r, size))

  #endif /* RTI_VXWORKS */



#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* osapi_bufferUtils_impl_h */