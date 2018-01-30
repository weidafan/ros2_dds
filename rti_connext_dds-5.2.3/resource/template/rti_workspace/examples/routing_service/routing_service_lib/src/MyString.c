#include <string.h>
#define MY_STRINGS_SIZE 3
#define MY_STRINGS_TOTAL_SIZE 2537
const char * MY_STRINGS[MY_STRINGS_SIZE] = {
"<?xml version=\"1.0\"?>\n<dds xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"../../../resource/schema/rti_routing_service.xsd\">\n\n    <!-- ********************************************************************** -->\n    <!--                                                                        -->\n    <!-- RTI Routing service example for PCIE/UDPv4 bridging                    -->\n    <!--                                                                        -->\n    <!-- ********************************************************************** -->\n\n    <!-- ********************************************************************** -->\n    <!-- (domain 0) => (domain 1)                                               -->\n    <!-- ********************************************************************** -->\n    <routing_service name=\"RoutingService\">\n\n        <domain_route name=\"RouteName\">\n\n            <participant_1>\n                <domain_id>0</domain_id>\n                <participant_qos",
">\n                    <transport_builtin>\n                        <mask>UDPv4</mask>\n                    </transport_builtin>\n                </participant_qos>\n            </participant_1>\n\n            <participant_2>\n                <domain_id>1</domain_id>\n                <participant_qos>\n                    <transport_builtin>\n                        <mask>UDPv4</mask>\n                    </transport_builtin>\n                </participant_qos>\n            </participant_2>\n\n            <session name=\"Session\">\n                <auto_topic_route name=\"AllForward\">\n                    <publish_with_original_info>true</publish_with_original_info>\n                    <input participant=\"1\">\n                        <creation_mode>ON_DOMAIN_MATCH</creation_mode>\n                    </input>\n                    <output>\n                        <creation_mode>ON_DOMAIN_OR_ROUTE_MATCH</creation_mode>\n                    </output>\n                </auto_topic_route>\n\n                <auto_topic_route name=\"AllBackwa",
"rd\">\n                    <publish_with_original_info>true</publish_with_original_info>\n                    <input participant=\"2\">\n                        <creation_mode>ON_DOMAIN_OR_ROUTE_MATCH</creation_mode>\n                    </input>\n                    <output>\n                        <creation_mode>ON_DOMAIN_MATCH</creation_mode>\n                    </output>\n                </auto_topic_route>\n            </session>\n\n        </domain_route>\n\n    </routing_service>\n\n</dds>\n" };

#define MY_STRINGS_asString(str) {\
       int i;\
       (str)[0] = 0;\
       for(i = 0; i < MY_STRINGS_SIZE; ++i) {\
            strcat(str, MY_STRINGS[i]);\
       }\
}

#define MY_STRINGS_PCIE_SIZE 4
#define MY_STRINGS_PCIE_TOTAL_SIZE 3084
const char * MY_STRINGS_PCIE[MY_STRINGS_PCIE_SIZE] = {
"<?xml version=\"1.0\"?>\n<dds xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"../../../resource/schema/rti_routing_service.xsd\">\n\n    <!-- ********************************************************************** -->\n    <!--                                                                        -->\n    <!-- RTI Routing service example for PCIE/UDPv4 bridging                    -->\n    <!--                                                                        -->\n    <!-- ********************************************************************** -->\n\n    <!-- ********************************************************************** -->\n    <!-- (domain 0) => (domain 1)                                               -->\n    <!-- ********************************************************************** -->\n    <routing_service name=\"rs_pcie_udp\">\n\n        <domain_route name=\"DR_PCIE_UDP\">\n\n            <participant_1>\n                <domain_id>0</domain_id>\n                <participant_qos>",
"\n                    <transport_builtin>\n                        <mask>MASK_NONE</mask>\n                    </transport_builtin>\n                    <property>\n                        <value>\n                            <element>\n                                <name>dds.transport.load_plugins</name>\n                                <value>dds.transport.PCIE</value>\n                            </element>\n                        </value>\n                    </property>\n                    <discovery>\n                        <initial_peers>\n                            <element>pcie://42</element>\n                        </initial_peers>\n                    </discovery>\n                </participant_qos>\n            </participant_1>\n\n            <participant_2>\n                <domain_id>1</domain_id>\n                <participant_qos>\n                    <transport_builtin>\n                        <mask>UDPv4</mask>\n                    </transport_builtin>\n                </participant_qos>\n            </particip",
"ant_2>\n\n            <session name=\"Session\">\n                <auto_topic_route name=\"AllForward\">\n                    <publish_with_original_info>true</publish_with_original_info>\n                    <input participant=\"1\">\n                        <creation_mode>ON_DOMAIN_MATCH</creation_mode>\n                    </input>\n                    <output>\n                        <creation_mode>ON_DOMAIN_OR_ROUTE_MATCH</creation_mode>\n                    </output>\n                </auto_topic_route>\n\n                <auto_topic_route name=\"AllBackward\">\n                    <publish_with_original_info>true</publish_with_original_info>\n                    <input participant=\"2\">\n                        <creation_mode>ON_DOMAIN_OR_ROUTE_MATCH</creation_mode>\n                    </input>\n                    <output>\n                        <creation_mode>ON_DOMAIN_MATCH</creation_mode>\n                    </output>\n                </auto_topic_route>\n            </session>\n\n        </domain_route>\n\n    </routing_servic",
"e>\n\n</dds>\n" };

#define MY_STRINGS_PCIE_asString(str) {\
       int i;\
       (str)[0] = 0;\
       for(i = 0; i < MY_STRINGS_PCIE_SIZE; ++i) {\
            strcat(str, MY_STRINGS_PCIE[i]);\
       }\
}

