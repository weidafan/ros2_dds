/* ========================================================================= */
/* Multi-platform OS API                                                     */
/* ========================================================================= */
/* ========================================================================= */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#ifndef RTI_WIN32
#include <unistd.h>
#endif

#include "SocketUtil.h"

/**
 * Create a TCP socket
 */
int RTI_RoutingServiceSocket_create_socket(int udp)
{
    int family = AF_INET, type = SOCK_STREAM;
    int sd = -1;
    /* create socket */
  #if defined(RTI_WIN32)
    sd = (int) WSASocket(
        family, 
        type, 
        0 /*protocol*/,
        NULL /*protocolInfo*/,
        0 /*group*/,
        0 /*dwFlags*/);
  #else
    sd = socket(family, type, 0/*protocol*/);
    if (sd > 0) {
        /* close the socket in the child processes that have been
           "exec"'ed by the process that opened the socket */
        fcntl(sd, F_SETFD, FD_CLOEXEC);
    }
  #endif

    return sd;
}

int RTI_RoutingServiceSocket_connect_tcp_socket(
    int sock, const struct sockaddr_in * dstAddr)
{
    if (connect(sock, (struct sockaddr *) dstAddr, sizeof(*dstAddr))) {
        return 0;
    }

    return 1;
}

/*****************************************************************************/

int RTI_RoutingServiceSocket_bind_tcp_server_socket(
    int sd, struct sockaddr_in *sockAddr, int portnum)
{
    unsigned int sockAddrLen = sizeof(struct sockaddr_in);

    if(!sockAddr || (portnum < 0)) {
        return 0;
    }

    memset(sockAddr, 0, sizeof(struct sockaddr_in));
    sockAddr->sin_family = AF_INET;
    /* 0=>bind determines the port number */
    sockAddr->sin_port = htons((unsigned short)portnum);
    sockAddr->sin_addr.s_addr = htonl(INADDR_ANY);

    /* Bind our name to the passed socket. */
    if (bind(sd, (struct sockaddr*)(sockAddr), 
             sizeof(struct sockaddr_in)) != 0) {
        return 0;
    }

    /* Find out what port number bind assigned to our socket */
    if (getsockname(sd, (struct sockaddr*)(sockAddr), &sockAddrLen) < 0) {
        return 0;
    }

    if (listen(sd, 5) < 0) {
        return 0;
    }

    return ntohs(sockAddr->sin_port);
}

/*****************************************************************************/

int RTI_RoutingServiceSocket_get_host_by_name(
    struct in_addr * address_out,
    const char * hostName_in)
{
    struct hostent * hostEntry = NULL;

    hostEntry = (struct hostent*)gethostbyname((char *)hostName_in);
    if(hostEntry == NULL) {
        return 0;
    }

    memcpy(address_out, hostEntry->h_addr_list[0], hostEntry->h_length);

    return 1;
}

/***********************************************************************************/

int RTI_RoutingServiceSocket_socket_receive(
    int sock,
    char * buffer,
    int bufferLength)
{
    int length;
    struct sockaddr_in ipSource;
    unsigned int ipSourceSize = sizeof(struct sockaddr_in);
  #if defined(RTI_WIN32)
    int flags = 0; /* don't care about flag, but can't provide NULL */
    WSABUF recvBuffer;

    recvBuffer.buf = buffer;
    recvBuffer.len = bufferLength;
  #endif

  #if defined(RTI_WIN32)
    if (WSARecvFrom((SOCKET)sock, 
                    &recvBuffer, 1, &length,
                    &flags, (struct sockaddr*)&ipSource, 
                    &ipSourceSize,
                    NULL, NULL) != 0 ) {
        length = -1;
    }
  #else
    length = recvfrom(sock,
                      buffer,
                      bufferLength, 0,
                      (struct sockaddr*)&ipSource,
                      &ipSourceSize);
  #endif

    return length;
}


/***********************************************************************************/


int RTI_RoutingServiceSocket_socket_send(
    int sock,
    const struct sockaddr_in * sockAddr,
    char * buffer,
    int length)
{
  #ifdef RTI_WIN32
    int bytesWritten;
    WSABUF sendBuffer;

    sendBuffer.buf = buffer;
    sendBuffer.len = length;

    if (WSASendTo(sock, &sendBuffer, 1, &bytesWritten,
                  0, (SOCKADDR *)sockAddr, sizeof(struct sockaddr_in),
                  NULL, NULL) == SOCKET_ERROR ||
        bytesWritten != length) {
        return 0;
    }
  #else
    if (sendto(sock,
               buffer, length, 0,
               (struct sockaddr *)sockAddr,
               sizeof(struct sockaddr_in)) != length) {
        return 0;
    }
  #endif

    return 1;
}

/*****************************************************************************/

void RTI_RoutingServiceSocket_close_socket(int sd) {
    #if defined(RTI_WIN32)
      closesocket(sd);
    #else
      close(sd);
    #endif
}

/***********************************************************************************/
/***********************************************************************************/

void * RTI_RoutingServiceUtil_resize_buffer(void * buffer,
                                            int currentLength,
                                            int newLength,
                                            int elementSize) {

    void * newBuffer = NULL;

    if (newLength < currentLength) {
        currentLength = newLength;
    }

    newBuffer = calloc(newLength, elementSize);

    if (newBuffer == NULL) {
        return NULL;
    }

    if (buffer != NULL) {
        memcpy(newBuffer, buffer, currentLength * elementSize);
        free(buffer);
    }

    return newBuffer;
}

/*****************************************************************************/

