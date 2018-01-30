/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

/* ========================================================================= */
/* RTI Routing Service Adapter Adapter                                          */
/* ========================================================================= */
/*                                                                           */
/* See LineConversion.c                                                      */
/*                                                                           */
/* ========================================================================= */

#ifndef _sampleparsing_h_
#define _sampleparsing_h_

#include <stdio.h>
#include <string.h>
#include "ndds/ndds_c.h"
#include "routingservice/routingservice_adapter.h"

/* ========================================================================= */
/*                                                                           */
/* Read line                                                                 */
/*                                                                           */
/* ========================================================================= */

int RTI_RoutingServiceSocketAdapter_parse_sample(
    struct DDS_DynamicData * sampleOut, 
    char * buffer,
    int bufferLength,
    RTI_RoutingServiceEnvironment * env);


/* ========================================================================= */
/*                                                                           */
/* Write line                                                                */
/*                                                                           */
/* ========================================================================= */

int RTI_RoutingServiceSocketAdapter_serialize_sample(
    struct DDS_DynamicData * sample, 
    char * buffer, int length,
    RTI_RoutingServiceEnvironment * env);

/* ========================================================================= */
/*                                                                           */
/* Utility                                                                   */
/*                                                                           */
/* ========================================================================= */

char * RTI_RoutingServiceSocketAdapter_trim(char * str);

/*****************************************************************************/

int RTI_RoutingServiceSocketAdapter_assign(
    struct DDS_DynamicData * sample,
    const char * field,
    const char * value,
    RTI_RoutingServiceEnvironment * env);

/*****************************************************************************/

int RTI_RoutingServiceSocketAdapter_write_member(
    const struct DDS_DynamicData * sample,
    const struct DDS_DynamicDataMemberInfo * info,
    char * buffer, int maxLength,
    RTI_RoutingServiceEnvironment * env);

#endif
