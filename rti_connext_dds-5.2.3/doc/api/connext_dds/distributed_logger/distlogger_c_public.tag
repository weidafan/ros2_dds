<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile>
  <compound kind="group">
    <name>RTI_DL_DistLogger_Module</name>
    <title>RTI Distributed Logger API</title>
    <filename>group__RTI__DL__DistLogger__Module.html</filename>
    <subgroup>RTI_DL_Options_Module</subgroup>
    <subgroup>RTI_DL_Utility_Module</subgroup>
    <class kind="struct">RTI_DL_DistLogger_MessageParams</class>
    <class kind="struct">RTI_DL_DistLogger</class>
    <member kind="function">
      <type>RTI_DL_DistLogger *</type>
      <name>RTI_DL_DistLogger_getInstance</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga2a04b64c2a65ec62c0ddf999c18ed4b3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_DistLogger_setFilterLevel</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga085805bdfb8b444f51e42d27cbd1c62c</anchor>
      <arglist>(RTI_DL_DistLogger *self, DDS_Long newLevel)</arglist>
    </member>
    <member kind="function">
      <type>RTIBool</type>
      <name>RTI_DL_DistLogger_setOptions</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>gacc7f6d1e453ae335c98c6668bd56bd7a</anchor>
      <arglist>(RTI_DL_Options *options)</arglist>
    </member>
    <member kind="function">
      <type>RTIBool</type>
      <name>RTI_DL_DistLogger_setRTILoggerPrintFormat</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga38996a81dd476621fe3cf8277c1c979f</anchor>
      <arglist>(RTI_DL_DistLogger *self, NDDS_Config_LogPrintFormat logPrintFormat)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_setRTILoggerVerbosityByCategory</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga684d6dc3090c9b70440e6c4c26656900</anchor>
      <arglist>(RTI_DL_DistLogger *self, NDDS_Config_LogCategory category, NDDS_Config_LogVerbosity verbosity)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_logMessageWithLevelCategory</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>gabdc444cf423c5fa41b5600048118049e</anchor>
      <arglist>(RTI_DL_DistLogger *self, int logLevel, const char *message, const char *category)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_logMessageWithParams</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga193710a22499254af6a94afa86ec46d4</anchor>
      <arglist>(RTI_DL_DistLogger *self, const struct RTI_DL_DistLogger_MessageParams *params)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_fatal</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>gae5077af06c9a17034dac15163bf83a4d</anchor>
      <arglist>(RTI_DL_DistLogger *self, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_severe</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga7339de453a9cd0d706a4b8149ab1771c</anchor>
      <arglist>(RTI_DL_DistLogger *self, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_error</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga1c44b6d21719b623f069b638245cc323</anchor>
      <arglist>(RTI_DL_DistLogger *self, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_warning</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga8e33e69400d7e7a0c8444f8566f788e5</anchor>
      <arglist>(RTI_DL_DistLogger *self, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_notice</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga613630c3cdd3dbb3acfaf27dbaa14c65</anchor>
      <arglist>(RTI_DL_DistLogger *self, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_info</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga518d3569fe285b93df498b73de13d1df</anchor>
      <arglist>(RTI_DL_DistLogger *self, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_debug</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga84d9aa82ae5f6a3f8f275cd6370b4623</anchor>
      <arglist>(RTI_DL_DistLogger *self, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_trace</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga52d99157bd987c26abd8d17b37bf2495</anchor>
      <arglist>(RTI_DL_DistLogger *self, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_DistLogger_log</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga5136f13673865349cab072958200ffed</anchor>
      <arglist>(RTI_DL_DistLogger *self, int logLevel, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_DistLogger_finalizeInstance</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga488f47541e3e4c2bbd32d8c8e46d0686</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>RTI_DL_Options_Module</name>
    <title>RTI Distributed Logger Options API</title>
    <filename>group__RTI__DL__Options__Module.html</filename>
    <class kind="struct">RTI_DL_Options</class>
    <member kind="function">
      <type>RTI_DL_Options *</type>
      <name>RTI_DL_Options_createDefault</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga88ff3c10c5548b87eb3ef458ff0e6a2c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>RTIBool</type>
      <name>RTI_DL_Options_copy</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga1778b68da04b605b0e57aef9873d72da</anchor>
      <arglist>(RTI_DL_Options *self, const RTI_DL_Options *other)</arglist>
    </member>
    <member kind="function">
      <type>DDS_DomainParticipant *</type>
      <name>RTI_DL_Options_getDomainParticipant</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gab6d3bdfdf2f657f9b744f7e0a9452c6e</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setDomainParticipant</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gaa0537733fbeed93d05770efdedeb0d59</anchor>
      <arglist>(RTI_DL_Options *self, DDS_DomainParticipant *domainParticipant)</arglist>
    </member>
    <member kind="function">
      <type>RTIBool</type>
      <name>RTI_DL_Options_getLogInfrastructureMessages</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gac027e4e4c26c736dc70fdff3f953d4be</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setLogInfrastructureMessages</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga658315ea8c43dfb432f6b99f2d5c5b7f</anchor>
      <arglist>(RTI_DL_Options *self, RTIBool log)</arglist>
    </member>
    <member kind="function">
      <type>RTIBool</type>
      <name>RTI_DL_Options_isRemoteAdministrationEnabled</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga08aacfba5a5e91f51a60936a256e14e9</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setRemoteAdministrationEnabled</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gad5ba3cad51d7dfb5b5092820cf6abc64</anchor>
      <arglist>(RTI_DL_Options *self, RTIBool enabled)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>RTI_DL_Options_getFilterLevel</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gad134dcff96fe6ae56ac24f815c8aa231</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setFilterLevel</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga90945204f181e7b5dae490f22c8f946d</anchor>
      <arglist>(RTI_DL_Options *self, int filterLevel)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>RTI_DL_Options_getDomainId</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gaf58491bece9a6fa42963c9a656fbd98c</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setDomainId</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga59ba2bb6a4794649f96811fcb1cedc10</anchor>
      <arglist>(RTI_DL_Options *self, int domainId)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>RTI_DL_Options_getQosLibrary</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gac8ebb7bd1a1415f36c6415fc15694682</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setQosLibrary</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gaa767fdf7ca1980c1614025161587abcd</anchor>
      <arglist>(RTI_DL_Options *self, const char *qosLibrary)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>RTI_DL_Options_getQosProfile</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gaf4eb98540b33227cb9b379fbd77438e5</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setQosProfile</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga5658d15aa4a3aade2ebb456d4f411434</anchor>
      <arglist>(RTI_DL_Options *self, const char *qosProfile)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>RTI_DL_Options_getQueueSize</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gaedfaf319f71722a6f78f6031bccba625</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setQueueSize</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga9428dd11c5ee38e46c6b49b4bf2eaaab</anchor>
      <arglist>(RTI_DL_Options *self, int queueSize)</arglist>
    </member>
    <member kind="function">
      <type>struct DDS_ThreadSettings_t *</type>
      <name>RTI_DL_Options_getThreadSettings</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga509ece42c8c26f82843eb069e8fcc645</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setThreadSettings</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga5f60fc7ee260f375dd39121adff6b3a1</anchor>
      <arglist>(RTI_DL_Options *self, const struct DDS_ThreadSettings_t *threadSettings)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>RTI_DL_Options_getApplicationKind</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga2ae0cd4991ebc2654f6217515c4a0c96</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setApplicationKind</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga1885b4fc4f3ea19b5f0f0fcf76836066</anchor>
      <arglist>(RTI_DL_Options *self, const char *applicationKind)</arglist>
    </member>
    <member kind="function">
      <type>RTIBool</type>
      <name>RTI_DL_Options_getEchoToStdout</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>gaadebecefbd12edd65d51f0e3ba83e450</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>RTI_DL_Options_setEchoToStdout</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga235f589da657cee2ca8c8498a2a7630e</anchor>
      <arglist>(RTI_DL_Options *self, RTIBool echoToStdout)</arglist>
    </member>
    <member kind="function">
      <type>RTI_DL_Options *</type>
      <name>RTI_DL_Options_delete</name>
      <anchorfile>group__RTI__DL__Options__Module.html</anchorfile>
      <anchor>ga850bba15078c98e522f89c18386c2864</anchor>
      <arglist>(RTI_DL_Options *self)</arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>RTI_DL_Utility_Module</name>
    <title>RTI Distributed Logger Utility Module</title>
    <filename>group__RTI__DL__Utility__Module.html</filename>
    <member kind="function">
      <type>void</type>
      <name>RTI_DL_Utility_sleep</name>
      <anchorfile>group__RTI__DL__Utility__Module.html</anchorfile>
      <anchor>gac5e3946903765fd954fd458e3b357405</anchor>
      <arglist>(int ms)</arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_DL_DistLogger</name>
    <filename>structRTI__DL__DistLogger.html</filename>
  </compound>
  <compound kind="struct">
    <name>RTI_DL_DistLogger_MessageParams</name>
    <filename>structRTI__DL__DistLogger__MessageParams.html</filename>
    <member kind="variable">
      <type>int</type>
      <name>log_level</name>
      <anchorfile>structRTI__DL__DistLogger__MessageParams.html</anchorfile>
      <anchor>aa2603e752f8cfbeed6c78e61a4336b0f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const char *</type>
      <name>message</name>
      <anchorfile>structRTI__DL__DistLogger__MessageParams.html</anchorfile>
      <anchor>a1737f525f3513d6af6e555d7f4679575</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const char *</type>
      <name>category</name>
      <anchorfile>structRTI__DL__DistLogger__MessageParams.html</anchorfile>
      <anchor>aef642989fd4798c79da900dc0b18fcba</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct DDS_Time_t</type>
      <name>timestamp</name>
      <anchorfile>structRTI__DL__DistLogger__MessageParams.html</anchorfile>
      <anchor>a479f67795f4b4aa0ed92f4e60d63ce31</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_DL_Options</name>
    <filename>structRTI__DL__Options.html</filename>
  </compound>
  <compound kind="dir">
    <name>interface</name>
    <path>/home/build/rti/waveworks/ndds523/distributed_log.1.0/interface/</path>
    <filename>dir_b31d54d5631803016a26f28213a41162.html</filename>
    <file>c.ifc</file>
    <file>dll_c.ifc</file>
    <file>dll_cpp.ifc</file>
    <file>xml_c.ifc</file>
  </compound>
  <compound kind="dir">
    <name>srcDoc</name>
    <path>/home/build/rti/waveworks/ndds523/distributed_log.1.0/srcDoc/</path>
    <filename>dir_507f75a1e0c128f1e01fa6c0943f3130.html</filename>
    <file>main.dxx</file>
  </compound>
  <compound kind="page">
    <name>index</name>
    <title></title>
    <filename>index</filename>
    <docanchor file="index">general_usage</docanchor>
    <docanchor file="index">main_support</docanchor>
  </compound>
</tagfile>
