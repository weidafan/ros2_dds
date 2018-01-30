/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)transport_udpv6_impl.h    generated by: makeheader    Mon Apr 25 07:49:59 2016
 *
 *		built from:	udpv6_impl.ifc
 */

#ifndef transport_udpv6_impl_h
#define transport_udpv6_impl_h


#ifdef __cplusplus
    extern "C" {
#endif


#define NDDS_TRANSPORT_UDPV6_INTERFACE_FLAG_UP           (0x1)


#define NDDS_TRANSPORT_UDPV6_INTERFACE_FLAG_BROADCAST    (0x2)


#define NDDS_TRANSPORT_UDPV6_INTERFACE_FLAG_LOOPBACK     (0x4)


#define NDDS_TRANSPORT_UDPV6_INTERFACE_FLAG_POINTOPOINT (0x8)


#define NDDS_TRANSPORT_UDPV6_INTERFACE_FLAG_MULTICAST   (0x10)


#define NDDS_TRANSPORT_UDPV6_INTERFACE_FLAG_RUNNING     (0x20)


struct NDDS_Transport_UDPv6 {
    NDDS_Transport_Plugin                       parent;
    struct NDDS_Transport_UDPv6_Property_t     _property;
    struct NDDS_Transport_UDPv6_SocketFactory *_socketFactory;

    /* for built-in performance measurement */
    struct RTIClock                   *_clock; 

    /* default sockets used to send */
    int                                _unisocket;
    int                               *_multisocket;

    /* store system information about the running NICs */
    int                                _interfacesUpCount; 
    NDDS_Transport_Interface_t        *_interfaceArray;  
    unsigned int                      *_interfaceArrayFlags;
    unsigned int                      *_interfaceArrayIndexes;
    int                                _interfaceArraySize;

    /* user installed function that will be used to prevent an
       instance from using the interface */
    struct NDDS_Transport_UDPv6_InterfaceListener* _interfaceListener;

    char _id[NDDS_TRANSPORT_UDPV6_UNBLOCK_MESSAGE_SIZE];
#if 0
    RTIOsapiSocketGatherBuffer_t       _gatherSendBuffer;
#endif

    struct NDDS_Transport_UDPv6_Statistics _statistics;

    /* CORE-4052: Used for determining if ignore loopback interface */
    RTIBool _ignoreLoopbackInterface;

  #if defined(RTI_WIN32) || defined(RTI_WINCE)
    /* CORE-5954 -- Function pointer for the shutdown of the socket. */
    void * _cancelIoExFnc;
  #endif

};


#define NDDS_Transport_UDPv6_new(property_in) \
        NDDS_Transport_UDPv6_newI(property_in, NULL, NULL, NULL)


#ifdef __cplusplus
    }   /* extern "C" */
#endif

#endif /* transport_udpv6_impl_h */
