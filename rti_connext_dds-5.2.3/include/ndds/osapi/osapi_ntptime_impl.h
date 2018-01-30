/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)osapi_ntptime_impl.h    generated by: makeheader    Mon Apr 25 07:49:32 2016
 *
 *		built from:	ntptime_impl.ifc
 */

#ifndef osapi_ntptime_impl_h
#define osapi_ntptime_impl_h



#include <stdio.h> /* for sprintf() */

#ifdef __cplusplus
    extern "C" {
#endif



#define RTINtpTime_setZero(time) \
{ \
    (time)->sec = 0; \
    (time)->frac = 0; \
}

#define RTINtpTime_setMax(time) \
{ \
    (time)->sec = RTI_NTP_TIME_SEC_MAX; \
    (time)->frac = RTI_NTP_TIME_FRAC_MAX; \
}

#define RTINtpTime_toDouble(t) \
   (((double)((t)->frac)/4294967296.0f) + (double)(t)->sec)

#define RTINtpTime_copy(out, in)    \
        (out)->sec = (in)->sec;     \
        (out)->frac = (in)->frac;

#define RTINtpTime_packFromMillisec(time, s, msec) \
{ \
    register RTI_UINT32 RTINtpTime_temp = (msec); \
    (time).sec  = s; \
    (time).frac = (RTINtpTime_temp<<22) + \
                   ((RTINtpTime_temp*393)<<8); \
}
#define RTINtpTime_unpackToMillisec(s, msec, time) \
{ \
    s    = (time).sec; \
    msec = ((time).frac - ((time).frac>>6) - ((time).frac>>7) + (1<<21))>>22; \
    if( ((msec)>=1000)&&((s)!=0x7FFFFFFF) ) { (msec) -= 1000; (s)++; } \
}

#define RTINtpTime_packFromMicrosec(time, s, usec) \
{ \
    register RTI_UINT32 RTINtpTime_temp = usec; \
    (time).sec  = s; \
    (time).frac = (RTINtpTime_temp<<12)+ \
		  ((RTINtpTime_temp*99)<<1)+ \
		  ((RTINtpTime_temp*15 + \
		  ((RTINtpTime_temp*61)>>7))>>4); \
}

#define RTINtpTime_unpackToMicrosec(s, usec, time) \
{ \
    register RTI_UINT32 RTINtpTime_temp = (time).frac; \
    s    = (time).sec; \
    usec = ((time).frac- \
	    (RTINtpTime_temp>>5)- \
	    (RTINtpTime_temp>>7)- \
	    (RTINtpTime_temp>>8)- \
            (RTINtpTime_temp>>9)- \
	    (RTINtpTime_temp>>10)- \
	    (RTINtpTime_temp>>12)- \
            (RTINtpTime_temp>>13)- \
	    (RTINtpTime_temp>>14) + (1<<11)) >> 12; \
    if( ((usec) >= 1000000) && ((s)!=0x7FFFFFFF) ) { \
        (usec) -= 1000000; \
        (s)++; \
    } \
}

#define RTINtpTime_packFromNanosec(time, s, nsec) \
{ \
    (time).sec  = s; \
    (time).frac = (RTI_UINT32) (((RTI_UINT64)(nsec) * 2305843009) >> 29); \
}

#define RTINtpTime_unpackToNanosec(s, nsec, time) \
{ \
    s = (time).sec; \
    nsec = (RTI_UINT32) ((((RTI_UINT64)(time).frac << 29)/2305843009) + 1); \
    if ((time).frac == 0 || (time).frac == 2305843009) nsec--; \
    if( (nsec>=1000000000) && ((s)!=0x7FFFFFFF) ) { \
       nsec -= 1000000000; \
       (s)++; \
    } \
}
    
/*e \ingroup RTINtpTimeClass

  @brief Precision used in bit manipulation for RTINtpTime fraction
         conversions

  The larger the precision, the more bits you pick up in the long
  division to get the fraction.  If precision is too large so that the
  denominator shifted by the precision bits blows the 2^32 limit, the
  result will be incorrect.  For example, if denominator is 60 (a la
  Vx sysClkRate), precision_bits larger than 27 blows the limit and
  you get incorrect result.  In general, the
  maximum precision_bits = 32 - (int)log2(denominator_per_sec),

  where log2(x) can be calculated by:

  \verbatim
    int log2answer = 0;
    while (x >>= 1) {1
        log2answer++;
    }
   \endverbatim

   For 60 (sysClkRateGet()), this would be 27.
   For gettimeofday() with microsec resolution, this would be 12.

   But in practice, that kind of precision is not necessary nor desirable
   since the conversion would be slower.  Instead, the precision is
   only important relative to the denominator.  If your clock frequency
   is low (eg 60 Hz), you only have 16.6 ms resolution anyway.  If you are
   within a tenth of your clock resolution that is probably good enough.

   If we generalized too much and tried to handle nanosec resolution "ticks"
   we couldn't guarantee adequate acuracy for all ranges.  So intenally, we
   just pick a reasonable number that gives us adequate accuracy over large
   ranges.  I wanted a precision that will work well up to 1e6 tick rate
   (thinking about UNIX gettimeofday()), and 7 passed the test.


*/
#define RTI_NTP_TIME_PRECISION_BITS_DEFAULT 7

#define RTINtpTime_packFromFraction(time, numerator, denominator_per_sec) \
    RTINtpTime_packFromFractionPrecise((time), \
                                       (numerator), (denominator_per_sec), \
                                       RTI_NTP_TIME_PRECISION_BITS_DEFAULT)

#define RTINtpTime_packFromFractionPrecise(time, \
                                           numerator, denominator_per_sec, \
                                           precisionBits) \
{ \
    register RTI_UINT32 RTINtpTime_current_bit = 0x80000000; \
    register RTI_UINT32 RTINtpTime_current_units = (denominator_per_sec)<<precisionBits; \
    register RTI_UINT32 RTINtpTime_precision_numerator = \
        ((numerator)%(denominator_per_sec))<< precisionBits; \
    (time).sec  = (numerator)/(denominator_per_sec); \
    (time).frac = 0; \
    while (RTINtpTime_current_units >>= 1) { \
        (time).frac += \
            (((RTINtpTime_precision_numerator) >= RTINtpTime_current_units) ? \
             (((RTINtpTime_precision_numerator) -= RTINtpTime_current_units), RTINtpTime_current_bit) : 0); \
        RTINtpTime_current_bit >>= 1; \
    } \
}

#define RTINtpTime_unpackToFraction(numerator, denominator_per_sec, time) \
    RTINtpTime_unpackToFractionPrecise((numerator), \
                                       (denominator_per_sec), (time), \
                                       RTI_NTP_TIME_PRECISION_BITS_DEFAULT)

#define RTINtpTime_unpackToFractionPrecise(numerator, \
                                           denominator_per_sec, time, \
                                           precisionBits) \
{ \
    register RTI_UINT32 RTINtpTime_current_bit = 0x80000000; \
    register RTI_UINT32 RTINtpTime_current_units = (denominator_per_sec)<<(precisionBits);\
    register RTI_UINT32 RTINtpTime_precision_numerator = 0; \
    numerator = (denominator_per_sec)*(time).sec; \
    while ((RTINtpTime_current_units >>= 1)) { \
        RTINtpTime_precision_numerator += ((time).frac & RTINtpTime_current_bit) ? RTINtpTime_current_units:0;\
        RTINtpTime_current_bit >>= 1; \
    } \
    numerator += (RTINtpTime_precision_numerator + \
                  (1<<((precisionBits)-1)))>>(precisionBits);\
}


#define RTINtpTime_compare(time1, time2) \
((((time1).sec) > ((time2).sec)) ? 1 : \
 ((((time1).sec) < ((time2).sec)) ? -1 : \
  ((((time1).frac) > ((time2).frac)) ? 1 : \
   ((((time1).frac) < ((time2).frac)) ? -1 : 0))))


#define RTINtpTime_max(answer, time1, time2) \
{\
    (answer) = \
        ((((time1).sec) > ((time2).sec)) ? (time1) : \
         ((((time1).sec) < ((time2).sec)) ? (time2) : \
          ((((time1).frac) > ((time2).frac)) ? (time1) : (time2) ))); \
}

#define RTINtpTime_add(answer, t1, t2) \
{\
    if (((t1).sec == RTI_NTP_TIME_SEC_MAX) || \
        ((t2).sec == RTI_NTP_TIME_SEC_MAX)) { \
        (answer).sec = RTI_NTP_TIME_SEC_MAX; \
        (answer).frac = RTI_NTP_TIME_FRAC_MAX; \
    } else { \
        (answer).sec =  (t1).sec + (t2).sec; \
        (answer).frac = (t1).frac + (t2).frac; \
        if (((answer).frac < (t1).frac) || ((answer).frac < (t2).frac)) { \
            (answer).sec++; \
        } \
    } \
}

#define RTINtpTime_subtract(answer, t1, t2) \
{\
   if ((t2).sec == RTI_NTP_TIME_SEC_MAX) { \
     (answer).sec = 0; \
     (answer).frac = 0; \
   } else { \
       (answer).sec  = (t1).sec - (t2).sec; \
       (answer).frac = (t1).frac - (t2).frac; \
      if ((answer).frac > (t1).frac) { \
           (answer).sec--; \
        } \
   } \
}

#define RTINtpTime_shiftLeft(answer, time, shift) \
{\
  register RTI_UINT32 RTINtpTime_mask    = 0xffffffff; \
      if (shift) { \
       (answer).sec = ((time).sec)<<shift; \
       RTINtpTime_mask = RTINtpTime_mask<<(32 - shift); \
       RTINtpTime_mask &= (time).frac; \
       RTINtpTime_mask = RTINtpTime_mask>>(32 - shift); \
       (answer).sec |= RTINtpTime_mask; \
       (answer).frac = ((time).frac)<<shift; \
    } \
     else { \
       answer = time; \
   } \
}

#define RTINtpTime_shiftRight(answer, time, shift) \
{\
   register RTI_UINT32 RTINtpTime_mask    = 0xffffffff; \
    if (shift) { \
      (answer).frac = ((time).frac)>>shift; \
      RTINtpTime_mask = RTINtpTime_mask>>(32 - shift); \
      RTINtpTime_mask &= (time).sec; \
      RTINtpTime_mask = RTINtpTime_mask<<(32 - shift); \
      (answer).frac |= RTINtpTime_mask; \
      (answer).sec = ((time).sec)>>shift; \
   } \
   else { \
       answer = time; \
   } \
}

#define RTINtpTime_increment(answer, time) \
{ \
    register RTI_UINT32 RTINtpTime_currentFrac = (answer).frac; \
    (answer).sec  += (time).sec; \
    (answer).frac += (time).frac; \
    if (((answer).frac < (time).frac) || ((answer).frac < RTINtpTime_currentFrac)) { \
        (answer).sec++; \
    } \
}

#define RTINtpTime_decrement(answer, time) \
{ \
    register RTI_UINT32 RTINtpTime_currentFrac = (answer).frac; \
    (answer).sec  -= (time).sec; \
    (answer).frac -= (time).frac; \
    if (((answer).frac > RTINtpTime_currentFrac)) { (answer).sec--; } \
}

#define RTINtpTime_incrementInfinitesimally(time) \
    ((++((time).frac)) == 0) ? ++(time).sec : 0

#define RTINtpTime_isInfinite(time) (!(time) || \
                                    ((time)->sec == RTI_NTP_TIME_SEC_MAX))
#define RTINtpTime_isAuto(time) ((time) && \
                                ((time)->sec == RTI_NTP_TIME_SEC_AUTO) && \
                                ((time)->frac == RTI_NTP_TIME_FRAC_AUTO))
#define RTINtpTime_compareToZero(time) \
(!(time) /* infinite > 0 */                                           \
 ? 1                                                                  \
 : ((time)->sec > 0 /* positive > 0 */                                \
    ? (time)->sec                                                     \
    : (((time)->sec == 0) /* if sec == 0, */                          \
       ? ((time)->frac != 0) /* if frac == 0, return 0, otherwise 1 */\
       : -1))) /* else sec < 0 => less than 0 */

#define RTINtpTime_toString(me, str) \
    (sprintf(str, "{%08x,%08X}", (me)->sec, (me)->frac), (str))


#define RTINtpTime_scale(answer, time, percentScaler) \
{ \
    RTI_UINT32 prodHigh, prodLow, normalizedScaler, p3, p2, p1, p0; \
    const RTI_UINT32 LOW_MASK = 0x0000FFFF; \
    prodLow = (time)->frac; \
    prodHigh = (RTI_UINT32)((time)->sec); \
    normalizedScaler = (RTI_UINT32)(percentScaler); \
    p0 = (normalizedScaler) * (prodLow & LOW_MASK); \
    p1 = (normalizedScaler) * (prodLow >> 16) + (p0 >> 16); \
    p2 = (normalizedScaler) * (prodHigh & LOW_MASK) + (p1 >> 16); \
    p3 = (normalizedScaler) * (prodHigh >> 16) + (p2 >> 16); \
    prodLow = (p1 << 16) | (p0 & LOW_MASK); \
    prodHigh = (p3 << 16) | (p2 & LOW_MASK); \
    /* 655/2^16 ~= 1/100 */ \
    p0 = (655) * (prodLow & LOW_MASK); \
    p1 = (655) * (prodLow >> 16) + (p0 >> 16); \
    p2 = (655) * (prodHigh & LOW_MASK) + (p1 >> 16); \
    p3 = (655) * (prodHigh >> 16) + (p2 >> 16); \
    (answer)->sec = (RTI_INT32)p3; \
    (answer)->frac =  (p2 << 16) | (p1 & LOW_MASK); \
}

#define RTINtpTime_divide(answer, time, divisor) \
{ \
    RTI_UINT32 tempAns; \
    tempAns = ((time)->sec << 16) | ((time)->frac >> 16); \
    tempAns /= divisor; \
    (answer)->sec = tempAns >> 16; \
    (answer)->frac = tempAns << 16; \
}



#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* osapi_ntptime_impl_h */
