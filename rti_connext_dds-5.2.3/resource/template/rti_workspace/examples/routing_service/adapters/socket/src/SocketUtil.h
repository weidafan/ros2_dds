/* ========================================================================= */
/* Multi-platform OS API                                                     */
/* ========================================================================= */
/* ========================================================================= */

#ifndef _socketutil_h_
#define _socketutil_h_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#ifdef RTI_WIN32
  #define DllExport __declspec( dllexport )
  #include <Winsock2.h>
#else
  #define DllExport
  #include <sys/select.h>
  #include <fcntl.h>
  #include <netinet/tcp.h>
  #include <netdb.h>
  #include <sys/ioctl.h>
#endif


#if defined(RTI_WIN32)
  #define RTI_RoutingServiceSocket_get_error WSAGetLastError
#else
  #define RTI_RoutingServiceSocket_get_error errno
#endif

/*****************************************************************************/

int RTI_RoutingServiceSocket_create_socket(int udp);

int RTI_RoutingServiceSocket_connect_tcp_socket(
    int sock, const struct sockaddr_in * dstAddr);

int RTI_RoutingServiceSocket_bind_tcp_server_socket(
    int sd, struct sockaddr_in *sockAddr, int portnum);

/*****************************************************************************/

int RTI_RoutingServiceSocket_get_host_by_name(
    struct in_addr * address_out,
    const char * hostName_in);

/*****************************************************************************/

int RTI_RoutingServiceSocket_socket_receive(
    int sock,
    char * buffer,
    int bufferLength);


/*****************************************************************************/

int RTI_RoutingServiceSocket_socket_send(
    int sock,
    const struct sockaddr_in * sockAddr,
    char * buffer,
    int length);

/*****************************************************************************/

void RTI_RoutingServiceSocket_close_socket(int sd);


/*****************************************************************************/

void * RTI_RoutingServiceUtil_resize_buffer(void * buffer,
                                            int currentLength,
                                            int newLength,
                                            int elementSize);

/*****************************************************************************/

#endif
