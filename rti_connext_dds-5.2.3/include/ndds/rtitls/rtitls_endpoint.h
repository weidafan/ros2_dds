/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)rtitls_endpoint.h    generated by: makeheader    Mon Apr 25 07:54:14 2016
 *
 *		built from:	endpoint.ifc
 */

#ifndef rtitls_endpoint_h
#define rtitls_endpoint_h


  #ifndef transport_interface_h
    #include "transport/transport_interface.h"
  #endif

  #if defined(RTI_LYNX) && !defined(RTI_LYNXOS_SE) && !defined(RTI_LYNX500)
    #include <socket.h>
  #endif

  #if defined(RTI_VXWORKS)
    #if (VXWORKS_MAJOR_VERSION==5) && (VXWORKS_MINOR_VERSION==4)
       #define socklen_t int
    #endif
  #endif

#ifdef __cplusplus
    extern "C" {
#endif


enum NDDS_Transport_ConnectionEndpointKind {
    NDDS_TRANSPORT_CONNECTION_ENDPOINT_KIND_TCPv4,
    NDDS_TRANSPORT_CONNECTION_ENDPOINT_KIND_TLSv4,
    NDDS_TRANSPORT_CONNECTION_ENDPOINT_KIND_TCPv6,
    NDDS_TRANSPORT_CONNECTION_ENDPOINT_KIND_TLSv6
};


struct NDDS_Transport_ConnectionEndpointFactoryProperty
{
    /* Here we need to put all common properties for all the specific
     * implementation of the factory property
     */
    enum NDDS_Transport_ConnectionEndpointKind  kind;
};

struct NDDS_Transport_ConnectionEndpoint;

struct NDDS_Transport_ConnectionEndpointFactory;

typedef enum NDDS_Transport_ConnectionEndpointStatus {
    NDDS_TRANSPORT_ENDPOINT_OK,             /* Connected, no errors */
    NDDS_TRANSPORT_PRECONDITION_ERROR,      /* Precondition check failed */
    NDDS_TRANSPORT_ENDPOINT_WOULDBLOCK,     /* Operation would block on a non-blocking socket */
    NDDS_TRANSPORT_ENDPOINT_CONNRESET,      /* Remote peer has closed or reset the connection */
    NDDS_TRANSPORT_ENDPOINT_CONNINPROGRESS, /* Connection in progress */
    NDDS_TRANSPORT_ENDPOINT_CONNREFUSED,    /* Connection refused */
    NDDS_TRANSPORT_ENDPOINT_HANDSHAKEINPROGRESS, /* Protocol handshake in progress */
    NDDS_TRANSPORT_ENDPOINT_HANDSHAKEFAILED, /* Protocol handshake in progress */
    NDDS_TRANSPORT_ENDPOINT_BAD             /* Any other error */
} NDDS_Transport_ConnectionEndpointStatus;

extern const char * NDDS_Transport_ConnectionEndpointStatus_toString(
        enum NDDS_Transport_ConnectionEndpointStatus status);


/*i \ingroup NDDS_TransportConnectionEndpointClass
  Default send option.
*/
#define NDDS_TRANSPORT_SEND_OPTION_DEFAULT                      (0x00000000)
/*i \ingroup NDDS_TransportConnectionEndpointClass
  Forces to send plain unencrypted data.
*/
#define NDDS_TRANSPORT_SEND_OPTION_FORCE_NO_ENCRYPTION          (0x00000001)

typedef RTI_INT32
(*NDDS_Transport_ConnectionEndpoint_Send_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me,
    const void *buffer,
    size_t length,
    int flags,
    RTI_INT32 optionMask);


#if defined(RTI_WIN32)
/*i
  \ingroup NDDS_TransportConnectionEndpointClass
  \brief Asynchronous send to connection endpoint.

  @param buffer_in \b In.  An array of buffers that contain the data to send.

  @param buffer_count_in \b In.  The number of buffers provided.

  @param flags \b In.  The flags to set in the asynchronous send.

  @param lpOverlapped \b In.  An overlapped structure with the operation
  information.

  @return The errnum obtained from the asynchronous send.
*/
typedef RTI_INT32
(*NDDS_Transport_ConnectionEndpoint_AsyncSend_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me,
    const NDDS_Transport_Buffer_t buffer_in[],
    RTI_INT32 buffer_count_in,
    RTI_INT32 flags,
    OVERLAPPED * lpOverlapped);

#endif


/*i \ingroup NDDS_TransportConnectionEndpointClass
  Default receive option.
*/
#define NDDS_TRANSPORT_RECV_OPTION_DEFAULT                      (0x00000000)
/*i \ingroup NDDS_TransportConnectionEndpointClass
  Forces to receive plain unencrypted data.
*/
#define NDDS_TRANSPORT_RECV_OPTION_FORCE_NO_ENCRYPTION          (0x00000001)

typedef RTI_INT32
(*NDDS_Transport_ConnectionEndpoint_Receive_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me,
    void *buffer,
    size_t length,
    int flags,
    RTI_INT32 optionMask);

typedef RTIBool
(*NDDS_Transport_ConnectionEndpoint_Close_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me);

typedef NDDS_Transport_ConnectionEndpointStatus
(*NDDS_Transport_ConnectionEndpoint_GetStatus_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me);

typedef RTIBool
(*NDDS_Transport_ConnectionEndpoint_NeedsWrite_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me);

typedef RTIBool
(*NDDS_Transport_ConnectionEndpoint_DoHandshake_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me);

typedef int
(*NDDS_Transport_ConnectionEndpoint_GetSocket_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me);

typedef RTIBool
(*NDDS_Transport_ConnectionEndpoint_SetSocketOption_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me,
    RTIOsapiSocketOption optType,
    int optVal);

typedef RTIBool
(*NDDS_Transport_ConnectionEndpoint_PeerEquals_Fcn)(
    struct NDDS_Transport_ConnectionEndpoint *me,
    struct NDDS_Transport_ConnectionEndpoint *other);

struct NDDS_Transport_ConnectionEndpoint {
    /* Method pointers */
    NDDS_Transport_ConnectionEndpoint_Send_Fcn          send;
#if defined(RTI_WIN32)
    /* Needed by Windows IOCP */
    NDDS_Transport_ConnectionEndpoint_AsyncSend_Fcn     async_send;
#endif
    NDDS_Transport_ConnectionEndpoint_Receive_Fcn       receive;
    NDDS_Transport_ConnectionEndpoint_Close_Fcn         close_conn;
    NDDS_Transport_ConnectionEndpoint_GetStatus_Fcn     get_status;
    NDDS_Transport_ConnectionEndpoint_NeedsWrite_Fcn    needs_write;
    NDDS_Transport_ConnectionEndpoint_DoHandshake_Fcn   do_handshake;
    NDDS_Transport_ConnectionEndpoint_GetSocket_Fcn     get_socket;
    NDDS_Transport_ConnectionEndpoint_SetSocketOption_Fcn set_socket_option;
    NDDS_Transport_ConnectionEndpoint_PeerEquals_Fcn    peer_equals;

    /* The factory that created this object */
    struct NDDS_Transport_ConnectionEndpointFactory *   factory;
};


#define NDDS_Transport_ConnectionEndpoint_is_valid(m) ( \
       (m)->send        && \
       (m)->receive     && \
       (m)->close_conn  && \
       (m)->get_status  && \
       (m)->needs_write && \
       (m)->do_handshake && \
       (m)->get_socket && \
       (m)->peer_equals )


#define NDDS_Transport_ConnectionEndpoint_getFactory(m) ( (m) ? (m)->factory : NULL)

struct NDDS_Transport_ConnectionEndpointFactory;

typedef struct NDDS_Transport_ConnectionEndpoint *
(*NDDS_Transport_ConnectionEndpointFactory_ConnectEndpointCreateFcn)(
    struct NDDS_Transport_ConnectionEndpointFactory *me,
    RTI_INT32                                        priority,
    const struct sockaddr                           *dest_address_in);

typedef struct NDDS_Transport_ConnectionEndpoint *
(*NDDS_Transport_ConnectionEndpointFactory_AcceptEndpointCreateFcn)(
    struct NDDS_Transport_ConnectionEndpointFactory *me,
    int                                              listen_sock_in,
    struct sockaddr                                 *client_address_out,
    socklen_t                                       *client_address_len_inout);

typedef void (*NDDS_Transport_ConnectionEndpointFactory_EndpointDestroyFcn)(
    struct NDDS_Transport_ConnectionEndpointFactory *me,
    struct NDDS_Transport_ConnectionEndpoint        *endpoint_in);

struct NDDS_Transport_ConnectionEndpointFactory {
    /* Allow checking the kind of connection endpoint factory */
    enum NDDS_Transport_ConnectionEndpointKind          kind;

    /* Method pointers */
    NDDS_Transport_ConnectionEndpointFactory_ConnectEndpointCreateFcn create_connect_endpoint;
    NDDS_Transport_ConnectionEndpointFactory_AcceptEndpointCreateFcn  create_accept_endpoint;
    NDDS_Transport_ConnectionEndpointFactory_EndpointDestroyFcn       destroy_endpoint;

    /* A copy of the properties for this factory. This object is owned by the ConnectionEndpointFactory
     * object itself and will be destroyed in the factory destructor. */
    struct NDDS_Transport_ConnectionEndpointFactoryProperty *properties;
};


#define NDDS_Transport_ConnectionEndpointFactory_is_valid(m) ( \
       (m)->create_connect_endpoint && \
       (m)->create_accept_endpoint  && \
       (m)->destroy_endpoint )


typedef struct NDDS_Transport_ConnectionEndpointFactory * 
        (* NDDS_Transport_ConnectionEndpointFactory_create)(struct NDDS_Transport_ConnectionEndpointFactoryProperty *);


typedef void (* NDDS_Transport_ConnectionEndpointFactory_delete)(struct NDDS_Transport_ConnectionEndpointFactory *);


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* rtitls_endpoint_h */
