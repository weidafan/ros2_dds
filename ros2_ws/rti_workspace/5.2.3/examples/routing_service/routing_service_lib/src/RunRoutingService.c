/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "ndds/ndds_c.h"
#include "routingservice/routingservice_service.h"
#include "MyString.c"

#ifdef RTI_IOS
extern int routing_service_main(const char * cfg_file)
#else
static int routing_service_main(const char * cfg_file)
#endif
{
    struct DDS_Duration_t wait_period = {4,0};
    struct RTI_RoutingService * routing_service = NULL;
    struct RTI_RoutingServiceProperty property = {
      NULL,   
      NULL,   
      0,      
      NULL,   
      NULL,
      2, /* RTI_SERVICE_ROUTING_SERVICE */
      1,      
      1, /* ddsVerbosity */
      0,      
      NULL,   
      NULL,   
      RTI_FALSE,
      RTI_FALSE,
      0,      
      RTI_FALSE,
      0,      
      RTI_FALSE,
      RTI_FALSE,
      {{NULL,NULL},{NULL,NULL},{NULL,NULL},{NULL,NULL},
       {NULL,NULL},{NULL,NULL},{NULL,NULL},{NULL,NULL}},
      0,      
      RTI_FALSE,
      NULL    /* licenseFileName */
    };
    
	if (cfg_file != NULL) {
		/* Use a configuration file if specified */
		property.cfg_file = (char *) cfg_file;
	} else {
		/* Use a configuration string */
		property.cfg_strings = MY_STRINGS;
		property.cfg_strings_count = MY_STRINGS_SIZE; 
	}

    property.service_name = "RoutingService";

    /* Uncomment this to turn on additional logging
       property.service_verbosity = 
            (RTI_LOG_BIT_EXCEPTION | RTI_LOG_BIT_WARN | RTI_LOG_BIT_LOCAL);
       property.dds_verbosity = (RTI_LOG_BIT_WARN);
    */

    /* instanciate routing service */
    routing_service = RTI_RoutingService_new(&property);
    if(routing_service == NULL) {
        perror ("Error: failed to create RoutingService instance\n");
        return -1;
    }

    printf("RoutingService successfully created\n");

    /* start routing service */
    if(!RTI_RoutingService_start(routing_service)) {

        perror ("Error: failed to start RoutingService instance\n");

        RTI_RoutingService_delete(routing_service);
        
        return -1;
    }

    printf("RoutingService running ...\n");

#ifndef RTI_IOS
    /* wait to be stopped */
    while(1) {
        NDDS_Utility_sleep(&wait_period);
    }
#else
    // start routing_service_main() in a thread.
#endif
    return 1;
}

#if !(defined(RTI_VXWORKS) && !defined(__RTP__)) && !defined(RTI_PSOS) && !defined(RTI_IOS)
int main(int argc, char *argv[])
{
    char * cfg_file = NULL;
    if (argc >= 2) {
        cfg_file = argv[1];
    }

    return routing_service_main(cfg_file);
}
#endif
