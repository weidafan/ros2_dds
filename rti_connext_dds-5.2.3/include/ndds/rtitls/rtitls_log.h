/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)rtitls_log.h    generated by: makeheader    Mon Apr 25 07:54:14 2016
 *
 *		built from:	log.ifc
 */

#ifndef rtitls_log_h
#define rtitls_log_h


  #ifndef log_common_h
    #include "log/log_common.h"
  #endif
  #ifndef rtitls_dll_h
    #include "rtitls/rtitls_dll.h"
  #endif

#ifdef __cplusplus
    extern "C" {
#endif



/*e \ingroup RTILogNumberBitmapClass  [TODO: MOVE TO log.1.0]
        \brief Bitmap to specify RTIXML module in log message number.
        
        @see RTI_LOG_MODULE_MASK
 */
#define MODULE_RTITLS         (0x1F0000)

/*i \ingroup RTITLSLogMessageClass
  \brief RTITLS OpenSSL identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_RTITLS_OPENSSL          (0x0000)

/*i \ingroup RTITLSLogMessageClass
  \brief RTITLS Connection identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_RTITLS_CONNECTION       (0x0001)



  #define RTITLS_SUBMODULE_MASK_OPENSSL (0x0001)


  #define RTITLS_SUBMODULE_MASK_CONNECTION (0x0002)


  #define RTITLS_SUBMODULE_MASK_ALL     (0xFFFF)

extern RTITLSDllVariable const struct RTILogMessage RTITLS_LOG_OPENSSL_VERIFICATION_FAILURE_dds;

extern RTITLSDllVariable const struct RTILogMessage RTITLS_LOG_OPENSSL_VERIFICATION_SUCCESS;

extern RTITLSDllVariable const struct RTILogMessage RTITLS_LOG_OPENSSL_VERIFICATION_CERTINFO_ss;

extern RTITLSDllExport void RTITLS_Log_set_verbosity(
    RTILogBitmap submoduleMask, int verbosity);

extern RTITLSDllExport void RTITLS_Log_setBitmaps(
    RTILogBitmap submoduleMask, RTILogBitmap instrumentationMask);

extern RTITLSDllExport void RTITLS_Log_getBitmaps(
    RTILogBitmap *submoduleMask, RTILogBitmap *instrumentationMask);


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* rtitls_log_h */