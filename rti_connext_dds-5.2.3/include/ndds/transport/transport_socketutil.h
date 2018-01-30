/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)transport_socketutil.h    generated by: makeheader    Mon Apr 25 07:50:00 2016
 *
 *		built from:	socketutil.ifc
 */

#ifndef transport_socketutil_h
#define transport_socketutil_h


#ifndef osapi_socket_h
#include "osapi/osapi_socket.h"
#endif

#ifndef osapi_bufferUtils_h
#include "osapi/osapi_bufferUtils.h"
#endif

#ifndef transport_common_h
#include "transport/transport_common.h"
#endif

#if defined(RTI_LYNX)
  #include <sys/ioctl.h>
#endif

#ifdef __cplusplus
    extern "C" {
#endif


#define NDDS_TRANSPORT_SOCKET_ADDRESS_STRING_BUFFER_SIZE (NDDS_TRANSPORT_ADDRESS_STRING_BUFFER_SIZE + 8)

#define NDDS_Transport_SocketUtil_sockaddrV4_to_transport_address(socket_address,transport_address,port) \
    port = ntohs((socket_address).sin_port); \
    RTIOsapiMemory_zero((transport_address).network_ordered_value,16); \
    RTIOsapiMemory_copy(&((transport_address).network_ordered_value[12]), \
                        &((socket_address).sin_addr.s_addr),4);

#define NDDS_Transport_SocketUtil_transport_address_to_V4Address(transport_address) \
    *((RTI_UINT32 *) &((transport_address)->network_ordered_value[12]))

#ifdef RTI_VXWORKS
  #define NDDS_Transport_SocketUtil_transport_address_to_sockaddrV4(transport_address,port,socket_address) \
    (socket_address)->sin_family = AF_INET; \
    (socket_address)->sin_port = htons((unsigned short)port); \
    (socket_address)->sin_addr.s_addr = NDDS_Transport_SocketUtil_transport_address_to_V4Address(transport_address); \
    (socket_address)->sin_len = sizeof(struct sockaddr_in)
#else
  #define NDDS_Transport_SocketUtil_transport_address_to_sockaddrV4(transport_address,port,socket_address) \
    (socket_address)->sin_family = AF_INET; \
    (socket_address)->sin_port = htons((unsigned short)port); \
    (socket_address)->sin_addr.s_addr = NDDS_Transport_SocketUtil_transport_address_to_V4Address(transport_address)
#endif

#ifdef RTI_VXWORKS
#define NDDS_Transport_SocketUtil_copy_sockaddrV4(self,other) \
    RTIOsapiMemory_zero((self),sizeof(struct sockaddr_in)); \
    (self)->sin_family = (other)->sin_family; \
    (self)->sin_len = (other)->sin_len; \
    (self)->sin_port = (other)->sin_port; \
    (self)->sin_addr.s_addr = (other)->sin_addr.s_addr
#else
#define NDDS_Transport_SocketUtil_copy_sockaddrV4(self,other) \
    RTIOsapiMemory_zero((self),sizeof(struct sockaddr_in)); \
    (self)->sin_family = (other)->sin_family; \
    (self)->sin_port = (other)->sin_port; \
    (self)->sin_addr.s_addr = (other)->sin_addr.s_addr
#endif

extern NDDS_Transport_DllExport
void NDDS_Transport_SocketUtil_V4Address_to_string(const struct in_addr * address,char * str);

extern NDDS_Transport_DllExport
void NDDS_Transport_SocketUtil_sockaddrV4_to_string(const struct sockaddr_in * address,char * str);


#ifdef RTI_IPV6

#define NDDS_Transport_SocketUtil_sockaddrV6_to_transport_address(socket_address,transport_address,port) \
    port = ntohs((socket_address).sin6_port); \
    RTIOsapiMemory_copy(&((transport_address).network_ordered_value[0]), \
                        &((socket_address).sin6_addr),16);

#ifdef RTI_VXWORKS
  #define NDDS_Transport_SocketUtil_transport_address_to_sockaddrV6(transport_address,port,socket_address) \
    RTIOsapiMemory_zero((socket_address),sizeof(struct sockaddr_in6)); \
    (socket_address)->sin6_family = AF_INET6; \
    (socket_address)->sin6_port = htons((unsigned short)port); \
    RTIOsapiMemory_copy(&((socket_address).sin6_addr), \
                        &((transport_address).network_ordered_value[0]),16); \
    (socket_address)->sin6_len = sizeof(struct sockaddr_in6)
#else
  #define NDDS_Transport_SocketUtil_transport_address_to_sockaddrV6(transport_address,port,socket_address) \
    RTIOsapiMemory_zero((socket_address),sizeof(struct sockaddr_in6)); \
    (socket_address)->sin6_family = AF_INET6; \
    (socket_address)->sin6_port = htons((unsigned short)port); \
    RTIOsapiMemory_copy(&((socket_address).sin6_addr), \
                        &((transport_address).network_ordered_value[0]),16);
#endif

#ifdef RTI_VXWORKS
#define NDDS_Transport_SocketUtil_copy_sockaddrV6(self,other) \
    RTIOsapiMemory_zero((self),sizeof(struct sockaddr_in6)); \
    (self)->sin6_family = (other)->sin6_family; \
    (self)->sin6_length = (other)->sin6_length; \
    (self)->sin6_port = (other)->sin6_port; \
    RTIOsapiMemory_copy(&((self).sin6_addr), \
                        &((other).sin6_addr),16); \
    (self)->sin6_scope_id = (other)->sin6_scope_id;
#else
#define NDDS_Transport_SocketUtil_copy_sockaddrV6(self,other) \
    RTIOsapiMemory_zero((self),sizeof(struct sockaddr_in6)); \
    (self)->sin6_family = (other)->sin_family; \
    (self)->sin6_port = (other)->sin_port; \
    RTIOsapiMemory_copy(&((self).sin6_addr), \
                        &((other).sin6_addr),16); \
    (self)->sin6_scope_id = (other)->sin6_scope_id;
#endif

extern NDDS_Transport_DllExport
void NDDS_Transport_SocketUtil_V6Address_to_string(const struct in6_addr * address,char * str);

extern NDDS_Transport_DllExport
void NDDS_Transport_SocketUtil_sockaddrV6_to_string(const struct sockaddr_in6 * address,char * str);


#endif /*RTI_IPV6*/

extern NDDS_Transport_DllExport
RTIBool NDDS_Transport_SocketUtil_receive_message(
            RTI_INT32 me,
            NDDS_Transport_Buffer_t * message,
            const struct sockaddr_in * source);

extern NDDS_Transport_DllExport
RTIBool NDDS_Transport_SocketUtil_send_message(
            RTI_INT32 me,
            NDDS_Transport_Buffer_t * message,
            const struct sockaddr_in * destination);

extern NDDS_Transport_DllExport
NDDS_Transport_Port_t NDDS_Transport_SocketUtil_bind(
    RTI_INT32 me,
    RTI_UINT32 ip,
    NDDS_Transport_Port_t port_desired);

extern NDDS_Transport_DllExport
RTIBool NDDS_Transport_SocketUtil_destroy(RTI_INT32 me);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_SocketUtil_create(
    RTI_UINT32 ip,
    NDDS_Transport_Port_t port,
    RTI_INT32 send_socket_buffer_size,
    RTI_INT32 receive_socket_buffer_size);


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* transport_socketutil_h */
