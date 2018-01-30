<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile>
  <compound kind="group">
    <name>RTI_DL_DistLogger_Module</name>
    <title>RTI Distributed Logger Classes and API</title>
    <filename>group__RTI__DL__DistLogger__Module.html</filename>
    <class kind="class">RTI_DLOptions</class>
    <class kind="class">RTI_DLUtility</class>
    <class kind="class">RTI_DLDistLogger</class>
    <member kind="function">
      <type>void</type>
      <name>logMessageWithParams</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga90a1fc38d8f7934897491278a97c3bd1</anchor>
      <arglist>(const struct RTI_DL_DistLogger_MessageParams &amp;params)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>RTI_DLDistLogger</name>
    <filename>classRTI__DLDistLogger.html</filename>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setFilterLevel</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a484c1f19956cfc662f9ca817f01e6114</anchor>
      <arglist>(DDS_Long newLevel)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>setRTILoggerPrintFormat</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a6baf7f0e0be81eeae7d55285222d58d4</anchor>
      <arglist>(NDDS_Config_LogPrintFormat logPrintFormat)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setRTILoggerVerbosityByCategory</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a53be46d598e9addeebdd8b09c94dbb35</anchor>
      <arglist>(NDDS_Config_LogCategory category, NDDS_Config_LogVerbosity verbosity)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>logMessageWithLevelCategory</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a39fd93abe20388c646abd489e0ca0249</anchor>
      <arglist>(int logLevel, const char *message, const char *category)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>logMessageWithParams</name>
      <anchorfile>group__RTI__DL__DistLogger__Module.html</anchorfile>
      <anchor>ga90a1fc38d8f7934897491278a97c3bd1</anchor>
      <arglist>(const struct RTI_DL_DistLogger_MessageParams &amp;params)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>fatal</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a848a25f702f9f540d1c057fb8bbc5a49</anchor>
      <arglist>(const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>severe</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>ae2b14db03d58c756897325777f0faccc</anchor>
      <arglist>(const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>error</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>aac63683e4809138590bb6a20893b2117</anchor>
      <arglist>(const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>warning</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>afcbe185a052e64b3c59ba5d5019f9032</anchor>
      <arglist>(const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>notice</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>aa477e2aec9354443a272405f6bc83cde</anchor>
      <arglist>(const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>info</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>ae12f730f7fa5fc46c0a97a709c7b8441</anchor>
      <arglist>(const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>debug</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a6ca88685c39a126b1eb4b2eacf599d72</anchor>
      <arglist>(const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>trace</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a945ebc65e93c6acdba466e2478082e02</anchor>
      <arglist>(const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>log</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a1c21f2f08fa37442995ca7bc588a8194</anchor>
      <arglist>(int logLevel, const char *message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>finalizeInstance</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a5ff4bf38515dce83a455f2d9b0629560</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static RTI_DLDistLogger *</type>
      <name>getInstance</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a60340d8adbd0b91d2f28c6f24917d3ca</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>setOptions</name>
      <anchorfile>classRTI__DLDistLogger.html</anchorfile>
      <anchor>a5e9a568a57fc992d011848ede9b14138</anchor>
      <arglist>(RTI_DLOptions &amp;options)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>RTI_DLOptions</name>
    <filename>classRTI__DLOptions.html</filename>
    <member kind="function">
      <type></type>
      <name>RTI_DLOptions</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>ad390edd0ab8ba70b69335a75b8792766</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>~RTI_DLOptions</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a8997ee5695d5b9540e9386501843f6d6</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_DomainParticipant *</type>
      <name>getCDomainParticipantI</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a1fef3ac864fd0a9ed752537031f12bba</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setDomainParticipant</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>aa2b98d5b48f5ac96ecd4fb56465464de</anchor>
      <arglist>(DDSDomainParticipant *domainParticipant)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isRemoteAdministrationEnabled</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a345f99c4b2012bf1e94fc9806f6e5c7b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setRemoteAdministrationEnabled</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a71933ba02eea0ee60666c25924369156</anchor>
      <arglist>(bool enabled)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getFilterLevel</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a25ab902f742ff0d3f8b814b3c3cdb980</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setFilterLevel</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a3313e453e3ad2d0fc27965ec6913d0ca</anchor>
      <arglist>(int filterLevel)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getDomainId</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>ad396351ad35484c40f179d7cc73befa6</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setDomainId</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a0c1d46c2fda2e7402990d06ed22004a6</anchor>
      <arglist>(int domainId)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>getQosLibrary</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a3cf067832cb665b16fdd2e6fcb72b569</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setQosLibrary</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>aac9a3248a0bbb579a902bea16ff10e04</anchor>
      <arglist>(const char *qosLibrary)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>getQosProfile</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>aaf6e419328f11b5aac0cc4e67c3d49f4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setQosProfile</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>ae8faed3080e25f4ff18b14e8989fd8c6</anchor>
      <arglist>(const char *qosProfile)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getQueueSize</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a4d438411757eea84b9fcbde5b36d0953</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setQueueSize</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a0e97534a4743fa4e8bfe3833617f5baa</anchor>
      <arglist>(int queueSize)</arglist>
    </member>
    <member kind="function">
      <type>struct DDS_ThreadSettings_t *</type>
      <name>getThreadSettings</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>ae7469253666e419735745e93076cea8d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setThreadSettings</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a33b9e671d06ea1282ab8427949b68683</anchor>
      <arglist>(const struct DDS_ThreadSettings_t *threadSettings)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>getApplicationKind</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a97f1fbbdebbc3477f9bdd6ae63f230b8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setApplicationKind</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a28305eef1ffe4cc48cf71943152cd8f9</anchor>
      <arglist>(const char *applicationKind)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>getEchoToStdout</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a66abc7651101bfb3724dc45efd57a0bf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setEchoToStdout</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a61f4dacf017a2989de97ad9e62533c12</anchor>
      <arglist>(bool echoToStdout)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>getLogInfrastructureMessages</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a54cbb8326824028a8d190f522acd6af8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>DDS_ReturnCode_t</type>
      <name>setLogInfrastructureMessages</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a74b3aa0a11b051f3c3e184a78377c83e</anchor>
      <arglist>(bool log)</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>RTI_DLDistLogger</name>
      <anchorfile>classRTI__DLOptions.html</anchorfile>
      <anchor>a41ed5de75380263fb7558a043e83b3b3</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>RTI_DLUtility</name>
    <filename>classRTI__DLUtility.html</filename>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>sleep</name>
      <anchorfile>classRTI__DLUtility.html</anchorfile>
      <anchor>a2285174e3a09b60b4db9cd5b93f45119</anchor>
      <arglist>(int msec)</arglist>
    </member>
  </compound>
  <compound kind="dir">
    <name>interface</name>
    <path>/home/build/rti/waveworks/ndds523/distributed_log.1.0/interface/</path>
    <filename>dir_b31d54d5631803016a26f28213a41162.html</filename>
    <file>c.ifc</file>
    <file>cpp.ifcxx</file>
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
