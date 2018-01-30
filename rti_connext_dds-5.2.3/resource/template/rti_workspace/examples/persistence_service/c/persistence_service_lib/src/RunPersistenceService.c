/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ndds/ndds_c.h"
#include "persistence/persistence_service.h"

#define MY_STRINGS_SIZE 2
#define MY_STRINGS_TOTAL_SIZE 1861
const char * MY_STRINGS[MY_STRINGS_SIZE] = {
"<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>\n<dds xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"../schema/rti_persistence_service.xsd\">\n\n    <!-- ================================================================= -->\n    <!-- Persist all data in memory -->\n    <!-- ================================================================= -->\n    <persistence_service name=\"default\">\n        \n        <annotation>\n            <documentation>\n                Persists in memory all topics published with TRANSIENT durability.       \n            </documentation>\n        </annotation>\n        \n        <participant name=\"defaultParticipant\">\n            <!-- <domain_id>0</domain_id> -->\n            <persistence_group name=\"persistAll\">\n                <filter>*</filter>\n            </persistence_group>\n        </participant>\n        \n    </persistence_service>\n\n    <!-- ================================================================= -->\n    <!-- Persist all data in disk -->\n    <!-- ====",
"============================================================= -->\n    <persistence_service name=\"defaultDisk\">\n        \n        <annotation>\n            <documentation>\n                Persists in the file system all topics published with PERSISTENT durability.\n            </documentation>\n        </annotation>\n        \n        <persistent_storage>\n            <filesystem>\n                <!-- <directory>MyDirectory</directory> -->\n                <!-- <file_prefix>MyPersistenceFiles_</file_prefix> -->\n            </filesystem>\n        </persistent_storage>\n        <participant name=\"defaultParticipant\">\n            <!-- <domain_id>0</domain_id> -->\n            <persistence_group name=\"persistAll\">\n                <filter>*</filter>\n            </persistence_group>\n        </participant>\n    </persistence_service>\n\n</dds>\n" };

#define MY_STRINGS_asString(str) {\
       int i;\
       (str)[0] = 0;\
       for(i = 0; i < MY_STRINGS_SIZE; ++i) {\
            strcat(str, MY_STRINGS[i]);\
       }\
}


static int persistence_service_main(const char * cfg_file)
{
    struct DDS_Duration_t wait_period = {4,0};
    struct RTI_PersistenceServiceProperty property = 
         RTI_PersistenceServiceProperty_INITIALIZER;
    struct RTI_PersistenceService * persistence_service = NULL;
    int count = 3000;
    /* property.cfg_file = strdup("../../../resource/xml/RTI_PERSISTENCE_SERVICE.xml"); */
    property.cfg_name = DDS_String_dup("default");
    property.cfg_strings = MY_STRINGS;
    property.cfg_strings_count = MY_STRINGS_SIZE;
    /* To increase verbosity use some of the next constants in property.service_verbosity
       RTI_PERSISTENCE_SERVICE_LOG_VERBOSITY_INFO
       RTI_PERSISTENCE_SERVICE_LOG_VERBOSITY_WARNINGS
       RTI_PERSISTENCE_SERVICE_LOG_VERBOSITY_EXCEPTIONS
     */
    property.service_verbosity = RTI_PERSISTENCE_SERVICE_LOG_VERBOSITY_SILENT;
    property.thread_stack_size = 256 * 1024;

    /* instanciate peristence service */
    persistence_service = RTI_PersistenceService_new(&property);
    if(persistence_service == NULL) {
        perror ("Error: !RTI_PersistenceService_new: NULL\n");
        return -1;
    }

    printf("PersistenceService successfully created ...\n");
    /* start routing service */
    if(!RTI_PersistenceService_start(persistence_service)) {

        perror ("Error: !RTI_PersistenceService_start: False\n");

        RTI_PersistenceService_delete(persistence_service);
        
        return -1;
    }

    printf("PersistenceService running ...\n");
    /* wait to be stopped */
    while(count-- >= 0) {
        printf(".");
        NDDS_Utility_sleep(&wait_period);
    }
    
    printf("\nPersistenceService going to be stopped ...\n");
    if(!RTI_PersistenceService_stop(persistence_service)) {

        perror ("Error: !RTI_PersistenceService_stop: False\n");
    }
    else { 
        printf("PersistenceService stopped\n");
    }
    
    RTI_PersistenceService_delete(persistence_service);
    return 0;
}

#if !(defined(RTI_VXWORKS) && !defined(__RTP__)) && !defined(RTI_PSOS)
int main(int argc, char *argv[])
{
    char * cfg_file = NULL;
    if (argc >= 2) {
        cfg_file = argv[1];
    }

    /* Uncomment this to turn on additional logging
    NDDS_Config_Logger_set_verbosity_by_category(
        NDDS_Config_Logger_get_instance(),
        NDDS_CONFIG_LOG_CATEGORY_API, 
        NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */

    return persistence_service_main(cfg_file);
}
#endif
