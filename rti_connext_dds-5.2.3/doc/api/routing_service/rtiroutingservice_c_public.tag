<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile>
  <compound kind="file">
    <name>adapter.ifc</name>
    <path>/home/build/rti/waveworks/ndds523/router.1.0/interface/</path>
    <filename>adapter_8ifc</filename>
    <class kind="struct">RTI_RoutingServiceStreamReaderListener</class>
    <class kind="struct">RTI_RoutingServiceAdapterPlugin</class>
    <member kind="define">
      <type>#define</type>
      <name>RTI_RoutingServiceAdapterPlugin_initialize</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga0abc8b7fc67a6fcdc363460dbfdc0169</anchor>
      <arglist>(adapter)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceStreamWriter</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gafae8e0807d30e7b5794f77bdb2deff95</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int(*</type>
      <name>RTI_RoutingServiceStreamWriter_WriteFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga9a505b2b5306c98aec671a12de3ab094</anchor>
      <arglist>)(RTI_RoutingServiceStreamWriter stream_writer, const RTI_RoutingServiceSample *sample_list, const RTI_RoutingServiceSampleInfo *info_list, int count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceStreamReader</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga4eee623c4c6e7e4f4bae3695c15809cc</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceStreamReaderListener_OnDataAvailableCallback</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga28f053cef503e9f1eaebc0b66694b674</anchor>
      <arglist>)(RTI_RoutingServiceStreamReader stream_reader, void *listener_data)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceStreamReader_ReadFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga4909d77b4141a0456596908bedf8aa12</anchor>
      <arglist>)(RTI_RoutingServiceStreamReader stream_reader, RTI_RoutingServiceSample **sample_list, RTI_RoutingServiceSampleInfo **info_list, int *count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceStreamReader_ReturnLoanFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gae10e468e9c6d90c4363261138ebf0f86</anchor>
      <arglist>)(RTI_RoutingServiceStreamReader stream_reader, RTI_RoutingServiceSample *sample_list, RTI_RoutingServiceSampleInfo *info_list, int count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceSession</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gaac46a8baa750af360135c27a99b8aac0</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceConnection</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga7b68c2c048c6b371efb8c80f470a720e</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>const char *(*</type>
      <name>RTI_RoutingServiceConnection_ToStringFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga77cb50c6660ff2491b7f88da574751d9</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceSession(*</type>
      <name>RTI_RoutingServiceConnection_CreateSessionFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga5a78718a0478ca8a4ebca0253e477c16</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceConnection_DeleteSessionFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gab8b83c8ce4f7384ea5c12d4de29c56c6</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceSession session, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceStreamReader(*</type>
      <name>RTI_RoutingServiceConnection_CreateStreamReaderFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gaecdc844c7985788617c38a55230487df</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceSession session, const struct RTI_RoutingServiceStreamInfo *stream_info, const struct RTI_RoutingServiceProperties *properties, const struct RTI_RoutingServiceStreamReaderListener *listener, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceConnection_DeleteStreamReaderFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gae40ec133d3ffa34d69a6ade61b3eb181</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceStreamReader stream_reader, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceStreamWriter(*</type>
      <name>RTI_RoutingServiceConnection_CreateStreamWriterFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gad45e580955c30cb805d8298ba488b2d3</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceSession session, const struct RTI_RoutingServiceStreamInfo *stream_info, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceConnection_DeleteStreamWriterFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga15235b65f43f0901531f6a6bc2c0be33</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceStreamWriter stream_writer, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceStreamReader(*</type>
      <name>RTI_RoutingServiceConnection_GetDiscoveryReaderFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga93d53f98c6aafa8836d3f8e941fb2b01</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceTypeRepresentation(*</type>
      <name>RTI_RoutingServiceConnection_CopyTypeRepresentationFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga351dd618ddddfcf4142e2bd8ccd55bb5</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceTypeRepresentationKind type_representation_kind, RTI_RoutingServiceTypeRepresentation type_representation, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceConnection_DeleteTypeRepresentationFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga253a1da13fa5b790e7d9a0b29866cc93</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceTypeRepresentationKind type_representation_kind, RTI_RoutingServiceTypeRepresentation type_representation, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>struct RTI_RoutingServiceProperties *(*</type>
      <name>RTI_RoutingServiceConnection_GetAttributesFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gadd8bf0c589aa4c81f472b1b1a9cf2f9b</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceAdapterEntity</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gaf63521bb23ae0a65647b30a0e4962362</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceAdapterEntity_UpdateFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga6fdc1a2d56474b890a01796c38f1b682</anchor>
      <arglist>)(RTI_RoutingServiceAdapterEntity entity, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceAdapterPlugin_DeleteConnectionFcn</name>
      <anchorfile>adapter_8ifc.html</anchorfile>
      <anchor>afe4c9018e122542a72769801809544d2</anchor>
      <arglist>)(struct RTI_RoutingServiceAdapterPlugin *plugin, RTI_RoutingServiceConnection connection, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceConnection(*</type>
      <name>RTI_RoutingServiceAdapterPlugin_CreateConnectionFcn</name>
      <anchorfile>adapter_8ifc.html</anchorfile>
      <anchor>affcbf63191a858fbcc9b2235b8acce8a</anchor>
      <arglist>)(struct RTI_RoutingServiceAdapterPlugin *plugin, const char *routing_service_name, const char *routing_service_group_name, const struct RTI_RoutingServiceStreamReaderListener *input_stream_discovery_listener, const struct RTI_RoutingServiceStreamReaderListener *output_stream_discovery_listener, const struct RTI_RoutingServiceTypeInfo **registeredTypes, int registeredTypeCount, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceAdapterPlugin_DeleteFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gacd2e9fa945dda1e9f520f1b1e5c82bb8</anchor>
      <arglist>)(struct RTI_RoutingServiceAdapterPlugin *plugin, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>struct RTI_RoutingServiceAdapterPlugin *(*</type>
      <name>RTI_RoutingServiceAdapterPlugin_CreateFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga2566431cd09273de3ab22ee9694ed26b</anchor>
      <arglist>)(const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>infrastructure.ifc</name>
    <path>/home/build/rti/waveworks/ndds523/router.1.0/interface/</path>
    <filename>infrastructure_8ifc</filename>
    <class kind="struct">RTI_RoutingServiceNameValue</class>
    <class kind="struct">RTI_RoutingServiceProperties</class>
    <class kind="struct">RTI_RoutingServiceVersion</class>
    <class kind="struct">RTI_RoutingServiceTypeInfo</class>
    <class kind="struct">RTI_RoutingServiceStreamInfo</class>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_ERROR</name>
      <anchorfile>group__RTI__RoutingServiceErrorCodeModule.html</anchorfile>
      <anchor>gabe07c3f1dd29ebd137694e934d1d00d7</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_ERROR_MAX_LENGTH</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga4373e2619e073437f1bac81750e38ccc</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_TYPE_REPRESENTATION_DYNAMIC_TYPE</name>
      <anchorfile>group__RTI__RoutingServiceTypeRepresentationModule.html</anchorfile>
      <anchor>gae1e7233d158d9f53d4b659c400cd7f31</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_TYPE_REPRESENTATION_XML</name>
      <anchorfile>group__RTI__RoutingServiceTypeRepresentationModule.html</anchorfile>
      <anchor>ga2a522df6932b50e64251759877316579</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_TYPE_REPRESENTATION_JAVA_OBJECT</name>
      <anchorfile>group__RTI__RoutingServiceTypeRepresentationModule.html</anchorfile>
      <anchor>gac4392aff749dcc4e12a254177ae80d3f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_DATA_REPRESENTATION_DYNAMIC_DATA</name>
      <anchorfile>group__RTI__RoutingServiceDataRepresentationModule.html</anchorfile>
      <anchor>ga00f703f2d29316a7bcaca5f25f205c18</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_DATA_REPRESENTATION_XML</name>
      <anchorfile>group__RTI__RoutingServiceDataRepresentationModule.html</anchorfile>
      <anchor>ga2c525e37c689131f47584aff52d10293</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_DATA_REPRESENTATION_JAVA_OBJECT</name>
      <anchorfile>group__RTI__RoutingServiceDataRepresentationModule.html</anchorfile>
      <anchor>ga6a2925007bc5fa22a38fbd90442f9619</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct RTI_RoutingServiceEnvironmentImpl</type>
      <name>RTI_RoutingServiceEnvironment</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga3905e42eed95577bed5ca8b99144c23f</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int</type>
      <name>RTI_RoutingServiceTypeRepresentationKind</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga3926b2933d8358cad42c0983542b1d9b</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceTypeRepresentation</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gaaddb2c0661aa87a88dd00d63066582bf</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int</type>
      <name>RTI_RoutingServiceDataRepresentationKind</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga7d8b754b4f3e3df76acfd7e3c1547307</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceSample</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gad8c7a9ff2d0c86956bee1fd6568ecd85</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceSampleInfo</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gae1ab81db1ad77adcf7d21b92fdf36dd3</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumeration">
      <name>RTI_RoutingServiceVerbosity</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga40441511b4f4a33f7fa7906f51f446fe</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_NONE</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446feab70e70be9d1777c551993c9c8ea9f7bb</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_EXCEPTION</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446feab524ff773c2b64bbdedec921afb1660f</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_WARN</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446fea47c31f81a7d3340394e562ed36b1401a</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_INFO</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446feafee6da7bebf7d8571c3fd50761ab9e9c</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_DEBUG</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446fea7a0b47c45cf78d75d6218728aa4ba26b</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumeration">
      <name>RTI_RoutingServiceLogicalValue</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga0a6d30a800a59397c9f6bf8fb0c3423b</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>RTI_RoutingServiceProperties_lookup_property</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga6a611f7ae3cb5c5203285f5060e4a04d</anchor>
      <arglist>(const struct RTI_RoutingServiceProperties *self, const char *name)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceEnvironment_set_error_w_params</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga4902dd7b03b81a551586176aefc5137a</anchor>
      <arglist>(RTI_RoutingServiceEnvironment *self, int overwrite, int error_code, int native_error_code, const char *error_format,...)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceEnvironment_set_error</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga86a9ac1fb2de9f4f14a5c5a8d4a4db08</anchor>
      <arglist>(RTI_RoutingServiceEnvironment *self, const char *error_format,...)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceEnvironment_clear_error</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga930df381d5d17c7a937a0f5a35a7011c</anchor>
      <arglist>(RTI_RoutingServiceEnvironment *self)</arglist>
    </member>
    <member kind="function">
      <type>RTI_RoutingServiceVerbosity</type>
      <name>RTI_RoutingServiceEnvironment_get_verbosity</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga13b1f79462f877afb6d606efb80eb185</anchor>
      <arglist>(const RTI_RoutingServiceEnvironment *self)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceEnvironment_get_version</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga0f4ce595afe3dc4d18186bbe69bfacad</anchor>
      <arglist>(const RTI_RoutingServiceEnvironment *self, struct RTI_RoutingServiceVersion *version)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>RTI_RoutingServiceEnvironment_error_occurred</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gac226042b5baf0a62da495754ae73cd3e</anchor>
      <arglist>(const RTI_RoutingServiceEnvironment *self)</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>RTI_RoutingServiceEnvironment_get_error_message</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga38caedbed6191ae9e7dd02cdc43c79b5</anchor>
      <arglist>(const RTI_RoutingServiceEnvironment *self)</arglist>
    </member>
    <member kind="function">
      <type>struct RTI_RoutingServiceStreamInfo *</type>
      <name>RTI_RoutingServiceStreamInfo_new_discovered</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gab513186c8a474701ddf364e5c13e790c</anchor>
      <arglist>(const char *stream_name, const char *registered_type_name, RTI_RoutingServiceTypeRepresentationKind type_representation_kind, RTI_RoutingServiceTypeRepresentation type_representation)</arglist>
    </member>
    <member kind="function">
      <type>struct RTI_RoutingServiceStreamInfo *</type>
      <name>RTI_RoutingServiceStreamInfo_new_disposed</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga32b30f7998a9deec8f8a02f9f47bf411</anchor>
      <arglist>(const char *stream_name)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceStreamInfo_delete</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gaf056980bc18b6e5958274a76b00fea64</anchor>
      <arglist>(struct RTI_RoutingServiceStreamInfo *self)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>service.ifc</name>
    <path>/home/build/rti/waveworks/ndds523/router.1.0/interface/</path>
    <filename>service_8ifc</filename>
    <class kind="struct">RTI_RoutingServiceTransportConfig</class>
    <class kind="struct">RTI_RoutingServiceProperty</class>
    <member kind="function">
      <type>struct RTI_RoutingService *</type>
      <name>RTI_RoutingService_new</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga80be459189af49d35e21dd9ddeb1f4db</anchor>
      <arglist>(struct RTI_RoutingServiceProperty *property)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingService_delete</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga925324f4f5d967da0753f1e11bbac300</anchor>
      <arglist>(struct RTI_RoutingService *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_Boolean</type>
      <name>RTI_RoutingService_start</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga4c8a0321fcad45171d7550090d95a975</anchor>
      <arglist>(struct RTI_RoutingService *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_Boolean</type>
      <name>RTI_RoutingService_stop</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>gada9ac166825aa164ec3aed882dc0ff9c</anchor>
      <arglist>(struct RTI_RoutingService *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_Boolean</type>
      <name>RTI_RoutingService_attach_adapter_plugin</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>gad41a89f104d092267faff572117312cc</anchor>
      <arglist>(struct RTI_RoutingService *self, void *adapter, const char *plugin_name)</arglist>
    </member>
    <member kind="variable">
      <type>struct RTI_RoutingServiceProperty</type>
      <name>RTI_RoutingServiceProperty_INITIALIZER</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>gac528edb6a228f3855c42bce8b7d3c5f6</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const int</type>
      <name>RTI_ROUTING_SERVICE_LOG_VERBOSITY_INFO</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga25fede37e8f615498aea027fecbda823</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const int</type>
      <name>RTI_ROUTING_SERVICE_LOG_VERBOSITY_WARNINGS</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga3f4d635fd0188c00b139efc768a3283b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const int</type>
      <name>RTI_ROUTING_SERVICE_LOG_VERBOSITY_EXCEPTIONS</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga69600fb20dd7822534681d5547cb676f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const int</type>
      <name>RTI_ROUTING_SERVICE_LOG_VERBOSITY_SILENT</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga546a9738690d6f644d4229b5d99c7f44</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>transformation.ifc</name>
    <path>/home/build/rti/waveworks/ndds523/router.1.0/interface/</path>
    <filename>transformation_8ifc</filename>
    <class kind="struct">RTI_RoutingServiceTransformationPlugin</class>
    <member kind="define">
      <type>#define</type>
      <name>RTI_RoutingServiceTransformationPlugin_initialize</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga8c679203ed6f8788265af3d42af61c8e</anchor>
      <arglist>(transf)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceTransformation</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga180ed3d26db8ab1e6ae6b1f31351fcd8</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct RTI_RoutingServiceTransformationPlugin *(*</type>
      <name>RTI_RoutingServiceTransformationPlugin_CreateFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga854bbdd3b9dfc86576d92c6c16447900</anchor>
      <arglist>)(const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformationPlugin_DeleteFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga654f3ca6596e7c598d08b5fe431fd35e</anchor>
      <arglist>)(struct RTI_RoutingServiceTransformationPlugin *plugin, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceTransformation(*</type>
      <name>RTI_RoutingServiceTransformationPlugin_CreateTransformationFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga0f16323881de889b0b583cca08dbb10a</anchor>
      <arglist>)(struct RTI_RoutingServiceTransformationPlugin *plugin, const struct RTI_RoutingServiceTypeInfo *input_type_info, const struct RTI_RoutingServiceTypeInfo *output_type_info, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformationPlugin_DeleteTransformationFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga9e576a52726fccfa51cb65d81157b211</anchor>
      <arglist>)(struct RTI_RoutingServiceTransformationPlugin *plugin, RTI_RoutingServiceTransformation transformation, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformation_TransformFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>gab693b4c9aafe2befddb32ac2456fc76e</anchor>
      <arglist>)(RTI_RoutingServiceTransformation transformation, RTI_RoutingServiceSample **out_sample_lst, RTI_RoutingServiceSampleInfo **out_info_lst, int *out_count, RTI_RoutingServiceSample *in_sample_lst, RTI_RoutingServiceSampleInfo *in_info_lst, int in_count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformation_ReturnLoanFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>gada07560b39a2a3f9fc752d5a35b0d111</anchor>
      <arglist>)(RTI_RoutingServiceTransformation transformation, RTI_RoutingServiceSample *sample_lst, RTI_RoutingServiceSampleInfo *info_lst, int count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformation_UpdateFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga68b9c777f99aa5fdb06649622e089ac7</anchor>
      <arglist>)(RTI_RoutingServiceTransformation transformation, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>RTI_RoutingServiceErrorCodeModule</name>
    <title>Standard Error Codes</title>
    <filename>group__RTI__RoutingServiceErrorCodeModule.html</filename>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_ERROR</name>
      <anchorfile>group__RTI__RoutingServiceErrorCodeModule.html</anchorfile>
      <anchor>gabe07c3f1dd29ebd137694e934d1d00d7</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>RTI_RoutingServiceLibModule</name>
    <title>RTI Routing Service API</title>
    <filename>group__RTI__RoutingServiceLibModule.html</filename>
    <class kind="struct">RTI_RoutingServiceTransportConfig</class>
    <class kind="struct">RTI_RoutingServiceProperty</class>
    <member kind="function">
      <type>struct RTI_RoutingService *</type>
      <name>RTI_RoutingService_new</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga80be459189af49d35e21dd9ddeb1f4db</anchor>
      <arglist>(struct RTI_RoutingServiceProperty *property)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingService_delete</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga925324f4f5d967da0753f1e11bbac300</anchor>
      <arglist>(struct RTI_RoutingService *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_Boolean</type>
      <name>RTI_RoutingService_start</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga4c8a0321fcad45171d7550090d95a975</anchor>
      <arglist>(struct RTI_RoutingService *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_Boolean</type>
      <name>RTI_RoutingService_stop</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>gada9ac166825aa164ec3aed882dc0ff9c</anchor>
      <arglist>(struct RTI_RoutingService *self)</arglist>
    </member>
    <member kind="function">
      <type>DDS_Boolean</type>
      <name>RTI_RoutingService_attach_adapter_plugin</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>gad41a89f104d092267faff572117312cc</anchor>
      <arglist>(struct RTI_RoutingService *self, void *adapter, const char *plugin_name)</arglist>
    </member>
    <member kind="variable">
      <type>struct RTI_RoutingServiceProperty</type>
      <name>RTI_RoutingServiceProperty_INITIALIZER</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>gac528edb6a228f3855c42bce8b7d3c5f6</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const int</type>
      <name>RTI_ROUTING_SERVICE_LOG_VERBOSITY_INFO</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga25fede37e8f615498aea027fecbda823</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const int</type>
      <name>RTI_ROUTING_SERVICE_LOG_VERBOSITY_WARNINGS</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga3f4d635fd0188c00b139efc768a3283b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const int</type>
      <name>RTI_ROUTING_SERVICE_LOG_VERBOSITY_EXCEPTIONS</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga69600fb20dd7822534681d5547cb676f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const int</type>
      <name>RTI_ROUTING_SERVICE_LOG_VERBOSITY_SILENT</name>
      <anchorfile>group__RTI__RoutingServiceLibModule.html</anchorfile>
      <anchor>ga546a9738690d6f644d4229b5d99c7f44</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>RTI_RoutingServiceTransformationModule</name>
    <title>RTI Routing Service Transformation API</title>
    <filename>group__RTI__RoutingServiceTransformationModule.html</filename>
    <class kind="struct">RTI_RoutingServiceTransformationPlugin</class>
    <member kind="define">
      <type>#define</type>
      <name>RTI_RoutingServiceTransformationPlugin_initialize</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga8c679203ed6f8788265af3d42af61c8e</anchor>
      <arglist>(transf)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceTransformation</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga180ed3d26db8ab1e6ae6b1f31351fcd8</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct RTI_RoutingServiceTransformationPlugin *(*</type>
      <name>RTI_RoutingServiceTransformationPlugin_CreateFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga854bbdd3b9dfc86576d92c6c16447900</anchor>
      <arglist>)(const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformationPlugin_DeleteFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga654f3ca6596e7c598d08b5fe431fd35e</anchor>
      <arglist>)(struct RTI_RoutingServiceTransformationPlugin *plugin, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceTransformation(*</type>
      <name>RTI_RoutingServiceTransformationPlugin_CreateTransformationFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga0f16323881de889b0b583cca08dbb10a</anchor>
      <arglist>)(struct RTI_RoutingServiceTransformationPlugin *plugin, const struct RTI_RoutingServiceTypeInfo *input_type_info, const struct RTI_RoutingServiceTypeInfo *output_type_info, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformationPlugin_DeleteTransformationFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga9e576a52726fccfa51cb65d81157b211</anchor>
      <arglist>)(struct RTI_RoutingServiceTransformationPlugin *plugin, RTI_RoutingServiceTransformation transformation, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformation_TransformFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>gab693b4c9aafe2befddb32ac2456fc76e</anchor>
      <arglist>)(RTI_RoutingServiceTransformation transformation, RTI_RoutingServiceSample **out_sample_lst, RTI_RoutingServiceSampleInfo **out_info_lst, int *out_count, RTI_RoutingServiceSample *in_sample_lst, RTI_RoutingServiceSampleInfo *in_info_lst, int in_count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformation_ReturnLoanFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>gada07560b39a2a3f9fc752d5a35b0d111</anchor>
      <arglist>)(RTI_RoutingServiceTransformation transformation, RTI_RoutingServiceSample *sample_lst, RTI_RoutingServiceSampleInfo *info_lst, int count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceTransformation_UpdateFcn</name>
      <anchorfile>group__RTI__RoutingServiceTransformationModule.html</anchorfile>
      <anchor>ga68b9c777f99aa5fdb06649622e089ac7</anchor>
      <arglist>)(RTI_RoutingServiceTransformation transformation, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <docanchor file="group__RTI__RoutingServiceAdapterModule">Requirements</docanchor>
  </compound>
  <compound kind="group">
    <name>RTI_RoutingServiceAdapterModule</name>
    <title>RTI Routing Service Adapter API</title>
    <filename>group__RTI__RoutingServiceAdapterModule.html</filename>
    <class kind="struct">RTI_RoutingServiceStreamReaderListener</class>
    <class kind="struct">RTI_RoutingServiceAdapterPlugin</class>
    <member kind="define">
      <type>#define</type>
      <name>RTI_RoutingServiceAdapterPlugin_initialize</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga0abc8b7fc67a6fcdc363460dbfdc0169</anchor>
      <arglist>(adapter)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceStreamWriter</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gafae8e0807d30e7b5794f77bdb2deff95</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int(*</type>
      <name>RTI_RoutingServiceStreamWriter_WriteFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga9a505b2b5306c98aec671a12de3ab094</anchor>
      <arglist>)(RTI_RoutingServiceStreamWriter stream_writer, const RTI_RoutingServiceSample *sample_list, const RTI_RoutingServiceSampleInfo *info_list, int count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceStreamReader</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga4eee623c4c6e7e4f4bae3695c15809cc</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceStreamReaderListener_OnDataAvailableCallback</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga28f053cef503e9f1eaebc0b66694b674</anchor>
      <arglist>)(RTI_RoutingServiceStreamReader stream_reader, void *listener_data)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceStreamReader_ReadFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga4909d77b4141a0456596908bedf8aa12</anchor>
      <arglist>)(RTI_RoutingServiceStreamReader stream_reader, RTI_RoutingServiceSample **sample_list, RTI_RoutingServiceSampleInfo **info_list, int *count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceStreamReader_ReturnLoanFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gae10e468e9c6d90c4363261138ebf0f86</anchor>
      <arglist>)(RTI_RoutingServiceStreamReader stream_reader, RTI_RoutingServiceSample *sample_list, RTI_RoutingServiceSampleInfo *info_list, int count, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceSession</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gaac46a8baa750af360135c27a99b8aac0</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceConnection</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga7b68c2c048c6b371efb8c80f470a720e</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>const char *(*</type>
      <name>RTI_RoutingServiceConnection_ToStringFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga77cb50c6660ff2491b7f88da574751d9</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceSession(*</type>
      <name>RTI_RoutingServiceConnection_CreateSessionFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga5a78718a0478ca8a4ebca0253e477c16</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceConnection_DeleteSessionFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gab8b83c8ce4f7384ea5c12d4de29c56c6</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceSession session, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceStreamReader(*</type>
      <name>RTI_RoutingServiceConnection_CreateStreamReaderFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gaecdc844c7985788617c38a55230487df</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceSession session, const struct RTI_RoutingServiceStreamInfo *stream_info, const struct RTI_RoutingServiceProperties *properties, const struct RTI_RoutingServiceStreamReaderListener *listener, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceConnection_DeleteStreamReaderFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gae40ec133d3ffa34d69a6ade61b3eb181</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceStreamReader stream_reader, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceStreamWriter(*</type>
      <name>RTI_RoutingServiceConnection_CreateStreamWriterFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gad45e580955c30cb805d8298ba488b2d3</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceSession session, const struct RTI_RoutingServiceStreamInfo *stream_info, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceConnection_DeleteStreamWriterFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga15235b65f43f0901531f6a6bc2c0be33</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceStreamWriter stream_writer, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceStreamReader(*</type>
      <name>RTI_RoutingServiceConnection_GetDiscoveryReaderFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga93d53f98c6aafa8836d3f8e941fb2b01</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>RTI_RoutingServiceTypeRepresentation(*</type>
      <name>RTI_RoutingServiceConnection_CopyTypeRepresentationFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga351dd618ddddfcf4142e2bd8ccd55bb5</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceTypeRepresentationKind type_representation_kind, RTI_RoutingServiceTypeRepresentation type_representation, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceConnection_DeleteTypeRepresentationFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga253a1da13fa5b790e7d9a0b29866cc93</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceTypeRepresentationKind type_representation_kind, RTI_RoutingServiceTypeRepresentation type_representation, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>struct RTI_RoutingServiceProperties *(*</type>
      <name>RTI_RoutingServiceConnection_GetAttributesFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gadd8bf0c589aa4c81f472b1b1a9cf2f9b</anchor>
      <arglist>)(RTI_RoutingServiceConnection connection, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceAdapterEntity</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gaf63521bb23ae0a65647b30a0e4962362</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceAdapterEntity_UpdateFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga6fdc1a2d56474b890a01796c38f1b682</anchor>
      <arglist>)(RTI_RoutingServiceAdapterEntity entity, const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>void(*</type>
      <name>RTI_RoutingServiceAdapterPlugin_DeleteFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gacd2e9fa945dda1e9f520f1b1e5c82bb8</anchor>
      <arglist>)(struct RTI_RoutingServiceAdapterPlugin *plugin, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="typedef">
      <type>struct RTI_RoutingServiceAdapterPlugin *(*</type>
      <name>RTI_RoutingServiceAdapterPlugin_CreateFcn</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>ga2566431cd09273de3ab22ee9694ed26b</anchor>
      <arglist>)(const struct RTI_RoutingServiceProperties *properties, RTI_RoutingServiceEnvironment *env)</arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceStreamReaderListener_OnDataAvailableCallback</type>
      <name>on_data_available</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gade499663aedbef464f04f8a8f1847abb</anchor>
      <arglist></arglist>
    </member>
    <docanchor file="group__RTI__RoutingServiceAdapterModule">Requirements</docanchor>
  </compound>
  <compound kind="group">
    <name>ROUTER</name>
    <title>RTI Routing Service</title>
    <filename>group__ROUTER.html</filename>
    <subgroup>RTI_RoutingServiceLibModule</subgroup>
    <subgroup>RTI_RoutingServiceTransformationModule</subgroup>
    <subgroup>RTI_RoutingServiceAdapterModule</subgroup>
    <subgroup>RTI_RoutingServiceInfrastructureModule</subgroup>
  </compound>
  <compound kind="group">
    <name>RTI_RoutingServiceInfrastructureModule</name>
    <title>RTI Routing Service Infrastructure</title>
    <filename>group__RTI__RoutingServiceInfrastructureModule.html</filename>
    <subgroup>RTI_RoutingServiceErrorCodeModule</subgroup>
    <subgroup>RTI_RoutingServiceTypeRepresentationModule</subgroup>
    <subgroup>RTI_RoutingServiceDataRepresentationModule</subgroup>
    <class kind="struct">RTI_RoutingServiceNameValue</class>
    <class kind="struct">RTI_RoutingServiceProperties</class>
    <class kind="struct">RTI_RoutingServiceVersion</class>
    <class kind="struct">RTI_RoutingServiceTypeInfo</class>
    <class kind="struct">RTI_RoutingServiceStreamInfo</class>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_ERROR_MAX_LENGTH</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga4373e2619e073437f1bac81750e38ccc</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct RTI_RoutingServiceEnvironmentImpl</type>
      <name>RTI_RoutingServiceEnvironment</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga3905e42eed95577bed5ca8b99144c23f</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int</type>
      <name>RTI_RoutingServiceTypeRepresentationKind</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga3926b2933d8358cad42c0983542b1d9b</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceTypeRepresentation</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gaaddb2c0661aa87a88dd00d63066582bf</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int</type>
      <name>RTI_RoutingServiceDataRepresentationKind</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga7d8b754b4f3e3df76acfd7e3c1547307</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceSample</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gad8c7a9ff2d0c86956bee1fd6568ecd85</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>void *</type>
      <name>RTI_RoutingServiceSampleInfo</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gae1ab81db1ad77adcf7d21b92fdf36dd3</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumeration">
      <name>RTI_RoutingServiceVerbosity</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga40441511b4f4a33f7fa7906f51f446fe</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_NONE</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446feab70e70be9d1777c551993c9c8ea9f7bb</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_EXCEPTION</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446feab524ff773c2b64bbdedec921afb1660f</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_WARN</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446fea47c31f81a7d3340394e562ed36b1401a</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_INFO</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446feafee6da7bebf7d8571c3fd50761ab9e9c</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumvalue">
      <name>RTI_ROUTING_SERVICE_VERBOSITY_DEBUG</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gga40441511b4f4a33f7fa7906f51f446fea7a0b47c45cf78d75d6218728aa4ba26b</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumeration">
      <name>RTI_RoutingServiceLogicalValue</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga0a6d30a800a59397c9f6bf8fb0c3423b</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>RTI_RoutingServiceProperties_lookup_property</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga6a611f7ae3cb5c5203285f5060e4a04d</anchor>
      <arglist>(const struct RTI_RoutingServiceProperties *self, const char *name)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceEnvironment_set_error_w_params</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga4902dd7b03b81a551586176aefc5137a</anchor>
      <arglist>(RTI_RoutingServiceEnvironment *self, int overwrite, int error_code, int native_error_code, const char *error_format,...)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceEnvironment_set_error</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga86a9ac1fb2de9f4f14a5c5a8d4a4db08</anchor>
      <arglist>(RTI_RoutingServiceEnvironment *self, const char *error_format,...)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceEnvironment_clear_error</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga930df381d5d17c7a937a0f5a35a7011c</anchor>
      <arglist>(RTI_RoutingServiceEnvironment *self)</arglist>
    </member>
    <member kind="function">
      <type>RTI_RoutingServiceVerbosity</type>
      <name>RTI_RoutingServiceEnvironment_get_verbosity</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga13b1f79462f877afb6d606efb80eb185</anchor>
      <arglist>(const RTI_RoutingServiceEnvironment *self)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceEnvironment_get_version</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga0f4ce595afe3dc4d18186bbe69bfacad</anchor>
      <arglist>(const RTI_RoutingServiceEnvironment *self, struct RTI_RoutingServiceVersion *version)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>RTI_RoutingServiceEnvironment_error_occurred</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gac226042b5baf0a62da495754ae73cd3e</anchor>
      <arglist>(const RTI_RoutingServiceEnvironment *self)</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>RTI_RoutingServiceEnvironment_get_error_message</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga38caedbed6191ae9e7dd02cdc43c79b5</anchor>
      <arglist>(const RTI_RoutingServiceEnvironment *self)</arglist>
    </member>
    <member kind="function">
      <type>struct RTI_RoutingServiceStreamInfo *</type>
      <name>RTI_RoutingServiceStreamInfo_new_discovered</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gab513186c8a474701ddf364e5c13e790c</anchor>
      <arglist>(const char *stream_name, const char *registered_type_name, RTI_RoutingServiceTypeRepresentationKind type_representation_kind, RTI_RoutingServiceTypeRepresentation type_representation)</arglist>
    </member>
    <member kind="function">
      <type>struct RTI_RoutingServiceStreamInfo *</type>
      <name>RTI_RoutingServiceStreamInfo_new_disposed</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>ga32b30f7998a9deec8f8a02f9f47bf411</anchor>
      <arglist>(const char *stream_name)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>RTI_RoutingServiceStreamInfo_delete</name>
      <anchorfile>group__RTI__RoutingServiceInfrastructureModule.html</anchorfile>
      <anchor>gaf056980bc18b6e5958274a76b00fea64</anchor>
      <arglist>(struct RTI_RoutingServiceStreamInfo *self)</arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>RTI_RoutingServiceTypeRepresentationModule</name>
    <title>Standard Type Representation Kinds</title>
    <filename>group__RTI__RoutingServiceTypeRepresentationModule.html</filename>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_TYPE_REPRESENTATION_DYNAMIC_TYPE</name>
      <anchorfile>group__RTI__RoutingServiceTypeRepresentationModule.html</anchorfile>
      <anchor>gae1e7233d158d9f53d4b659c400cd7f31</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_TYPE_REPRESENTATION_XML</name>
      <anchorfile>group__RTI__RoutingServiceTypeRepresentationModule.html</anchorfile>
      <anchor>ga2a522df6932b50e64251759877316579</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_TYPE_REPRESENTATION_JAVA_OBJECT</name>
      <anchorfile>group__RTI__RoutingServiceTypeRepresentationModule.html</anchorfile>
      <anchor>gac4392aff749dcc4e12a254177ae80d3f</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>RTI_RoutingServiceDataRepresentationModule</name>
    <title>Standard Data Representation Kinds</title>
    <filename>group__RTI__RoutingServiceDataRepresentationModule.html</filename>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_DATA_REPRESENTATION_DYNAMIC_DATA</name>
      <anchorfile>group__RTI__RoutingServiceDataRepresentationModule.html</anchorfile>
      <anchor>ga00f703f2d29316a7bcaca5f25f205c18</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_DATA_REPRESENTATION_XML</name>
      <anchorfile>group__RTI__RoutingServiceDataRepresentationModule.html</anchorfile>
      <anchor>ga2c525e37c689131f47584aff52d10293</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RTI_ROUTING_SERVICE_DATA_REPRESENTATION_JAVA_OBJECT</name>
      <anchorfile>group__RTI__RoutingServiceDataRepresentationModule.html</anchorfile>
      <anchor>ga6a2925007bc5fa22a38fbd90442f9619</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceAdapterPlugin</name>
    <filename>structRTI__RoutingServiceAdapterPlugin.html</filename>
    <member kind="variable">
      <type>struct RTI_RoutingServiceVersion</type>
      <name>plugin_version</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a780ccbbcc5697ffa1e4095d149ebcf61</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceAdapterPlugin_DeleteFcn</type>
      <name>adapter_plugin_delete</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a569ab4956c389a2c1c75cc91b8876a50</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceAdapterPlugin_CreateConnectionFcn</type>
      <name>adapter_plugin_create_connection</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a2dec112ab7fa90db69427a7c172b3a26</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceAdapterPlugin_DeleteConnectionFcn</type>
      <name>adapter_plugin_delete_connection</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>aa41fb122dd52d734ed969112433f5099</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_CreateSessionFcn</type>
      <name>connection_create_session</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a1706318615f3d6336467ef4243b289d6</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_DeleteSessionFcn</type>
      <name>connection_delete_session</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a185c310138b36636a9f4a460f0b28c40</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_CreateStreamReaderFcn</type>
      <name>connection_create_stream_reader</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a935c4320af44fbb4d6b0252077f7d717</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_DeleteStreamReaderFcn</type>
      <name>connection_delete_stream_reader</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a373119e0bf0be7716298e57710e0b1e5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_CreateStreamWriterFcn</type>
      <name>connection_create_stream_writer</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a3af54c84d129a441e3e645e2eb428c56</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_DeleteStreamWriterFcn</type>
      <name>connection_delete_stream_writer</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a569a6d695f60f2a866d902fe1d9ff527</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_GetDiscoveryReaderFcn</type>
      <name>connection_get_input_stream_discovery_reader</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>adce4bb1600f18bc7a6e07ee865ac5b15</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_GetDiscoveryReaderFcn</type>
      <name>connection_get_output_stream_discovery_reader</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a582ead6dd952d32462f02b660e864c63</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_CopyTypeRepresentationFcn</type>
      <name>connection_copy_type_representation</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a92824b0b79e724bda7d26d2e75464474</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_DeleteTypeRepresentationFcn</type>
      <name>connection_delete_type_representation</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a81394ec6162217a57f5907c815606810</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_ToStringFcn</type>
      <name>connection_to_string</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a9778dc98a12ab24c74232f0e84bbeff5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceAdapterEntity_UpdateFcn</type>
      <name>connection_update</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a26973c31a602ce04f85dbf4a2577e5d9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceConnection_GetAttributesFcn</type>
      <name>connection_get_attributes</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>ae7708053371184cac33501dbc0884710</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceAdapterEntity_UpdateFcn</type>
      <name>session_update</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a3172b3e3bbfe8cf9050a4854e09b0e0d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceStreamReader_ReadFcn</type>
      <name>stream_reader_read</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a354ab308a0a05d8139beb25953fb48de</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceStreamReader_ReturnLoanFcn</type>
      <name>stream_reader_return_loan</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>ae9821d84e6e2778cfe8317ecea45b384</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceAdapterEntity_UpdateFcn</type>
      <name>stream_reader_update</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a3e4936f3b5a864c49b885ce5c05fb253</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceStreamWriter_WriteFcn</type>
      <name>stream_writer_write</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>ae17f40bb138671f87e755ec3df8dbcbe</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceAdapterEntity_UpdateFcn</type>
      <name>stream_writer_update</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>aa5844d030d10fda970630a09f35e376e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void *</type>
      <name>user_object</name>
      <anchorfile>structRTI__RoutingServiceAdapterPlugin.html</anchorfile>
      <anchor>a1219425c8d7f6c55df46756df072aa48</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceNameValue</name>
    <filename>structRTI__RoutingServiceNameValue.html</filename>
    <member kind="variable">
      <type>char *</type>
      <name>name</name>
      <anchorfile>structRTI__RoutingServiceNameValue.html</anchorfile>
      <anchor>a05f2c608ee4550f1f34305ffa8e56458</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void *</type>
      <name>value</name>
      <anchorfile>structRTI__RoutingServiceNameValue.html</anchorfile>
      <anchor>a6857566b2dff1c048b3d9de06e505daa</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceProperties</name>
    <filename>structRTI__RoutingServiceProperties.html</filename>
    <member kind="variable">
      <type>struct RTI_RoutingServiceNameValue *</type>
      <name>properties</name>
      <anchorfile>structRTI__RoutingServiceProperties.html</anchorfile>
      <anchor>a370ee54222b4a9e68f8772580990f2bd</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>count</name>
      <anchorfile>structRTI__RoutingServiceProperties.html</anchorfile>
      <anchor>a3678461dcd95e1c17ad34fd812af0059</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>string_values</name>
      <anchorfile>structRTI__RoutingServiceProperties.html</anchorfile>
      <anchor>a50a25f3b6e15de0fdc506a57b816685a</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceProperty</name>
    <filename>structRTI__RoutingServiceProperty.html</filename>
    <member kind="variable">
      <type>char *</type>
      <name>cfg_file</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>af74a9d56eb9e99000f11f62ae484c521</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const char **</type>
      <name>cfg_strings</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>ad4bc2d84da9303b526363726b2177d9f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>cfg_strings_count</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a7c4336138ec5674ee74c33810dedc17f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>service_name</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a1955f30e4c824d5951f95d3e1e142db5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>application_name</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>adebe2ccf845030508d173c5a2130696c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>service_kind</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a2e0fe729ac64ba67082a2791b25208a2</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>service_verbosity</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a67d91386aa4a67a8c2fba9b2b98c9c0e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>dds_verbosity</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>ac0747d7692d48058ef67eb41f716fe3a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>domain_id_base</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>aecb1a10e63348bd89f3a483b3e041ba3</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>executable_path</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a24090edc38f9101ec4994d5b843787c9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>transformation_search_path</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a6dedb520e52a2d6a4bf5509abe6c95b5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>DDS_Boolean</type>
      <name>dont_start_service</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>aada95ee9b63850b27dcbf540eaef151b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>DDS_Boolean</type>
      <name>enable_administration</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a3f2cb2e299cc92053abdd0d0cde5abcb</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>administration_domain_id</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a8ed8e568c29b9712fd468c780210ce70</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>DDS_Boolean</type>
      <name>enable_monitoring</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a30159f1184d1050dea2d15017ef16dc4</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>monitoring_domain_id</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a2e6dedab4fc7af65baf9339fa15d35ee</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>DDS_Boolean</type>
      <name>skip_default_files</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a2e4db883f605ae86dcb37560a58fa170</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>DDS_Boolean</type>
      <name>identify_execution</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>aa5cd64abab8d57be1be45670353577a6</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct RTI_RoutingServiceTransportConfig</type>
      <name>registered_transports</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a9dd58ae8eb97f328c2b9c59fdd97a715</anchor>
      <arglist>[8]</arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>registered_transports_count</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a6cb4b4b930983476e1b9bb243f5fa58a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>DDS_Boolean</type>
      <name>use_42e_alignment</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>a963399864fc1c1c4a58555c69dc50e37</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>licenseFileName</name>
      <anchorfile>structRTI__RoutingServiceProperty.html</anchorfile>
      <anchor>aa5dc2a0df64356d491f8c0c5a6a43a95</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceStreamInfo</name>
    <filename>structRTI__RoutingServiceStreamInfo.html</filename>
    <member kind="variable">
      <type>int</type>
      <name>disposed</name>
      <anchorfile>structRTI__RoutingServiceStreamInfo.html</anchorfile>
      <anchor>a8b193b288be4cb1f3ff8723561bf89c6</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>stream_name</name>
      <anchorfile>structRTI__RoutingServiceStreamInfo.html</anchorfile>
      <anchor>a4a1de036d401f1ce9be8b2a9689cce7e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct RTI_RoutingServiceTypeInfo</type>
      <name>type_info</name>
      <anchorfile>structRTI__RoutingServiceStreamInfo.html</anchorfile>
      <anchor>a9de8c294ffb3c58dd8b0b5791fec653c</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceStreamReaderListener</name>
    <filename>structRTI__RoutingServiceStreamReaderListener.html</filename>
    <member kind="variable">
      <type>void *</type>
      <name>listener_data</name>
      <anchorfile>structRTI__RoutingServiceStreamReaderListener.html</anchorfile>
      <anchor>aff26cd1f1824734896bedd0318bd6df6</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceStreamReaderListener_OnDataAvailableCallback</type>
      <name>on_data_available</name>
      <anchorfile>group__RTI__RoutingServiceAdapterModule.html</anchorfile>
      <anchor>gade499663aedbef464f04f8a8f1847abb</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceTransformationPlugin</name>
    <filename>structRTI__RoutingServiceTransformationPlugin.html</filename>
    <member kind="variable">
      <type>struct RTI_RoutingServiceVersion</type>
      <name>plugin_version</name>
      <anchorfile>structRTI__RoutingServiceTransformationPlugin.html</anchorfile>
      <anchor>a4c63eeae9ed860ca457971a8769ea2c9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceTransformationPlugin_DeleteFcn</type>
      <name>transformation_plugin_delete</name>
      <anchorfile>structRTI__RoutingServiceTransformationPlugin.html</anchorfile>
      <anchor>a497bde10be85df7249dd03ff456f56c8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceTransformationPlugin_CreateTransformationFcn</type>
      <name>transformation_plugin_create_transformation</name>
      <anchorfile>structRTI__RoutingServiceTransformationPlugin.html</anchorfile>
      <anchor>a6f3902365476e229048344aabd3eed0d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceTransformationPlugin_DeleteTransformationFcn</type>
      <name>transformation_plugin_delete_transformation</name>
      <anchorfile>structRTI__RoutingServiceTransformationPlugin.html</anchorfile>
      <anchor>a432ad19365c84c507b9cf8edf49348f4</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceTransformation_TransformFcn</type>
      <name>transformation_transform</name>
      <anchorfile>structRTI__RoutingServiceTransformationPlugin.html</anchorfile>
      <anchor>ab58438c906e929e9185ab27caeabbb6c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceTransformation_ReturnLoanFcn</type>
      <name>transformation_return_loan</name>
      <anchorfile>structRTI__RoutingServiceTransformationPlugin.html</anchorfile>
      <anchor>ac5f9744443a240afe128dc8ec6969675</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceTransformation_UpdateFcn</type>
      <name>transformation_update</name>
      <anchorfile>structRTI__RoutingServiceTransformationPlugin.html</anchorfile>
      <anchor>add546ff84dc703e05e6599facf8324a6</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void *</type>
      <name>user_object</name>
      <anchorfile>structRTI__RoutingServiceTransformationPlugin.html</anchorfile>
      <anchor>a84580fce41227b7254c64fc091d08b62</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceTransportConfig</name>
    <filename>structRTI__RoutingServiceTransportConfig.html</filename>
    <member kind="variable">
      <type>char *</type>
      <name>alias</name>
      <anchorfile>structRTI__RoutingServiceTransportConfig.html</anchorfile>
      <anchor>ad7f70f5c074b5200654868f17147f39d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>NDDS_Transport_create_plugin</type>
      <name>create_function</name>
      <anchorfile>structRTI__RoutingServiceTransportConfig.html</anchorfile>
      <anchor>a3b72ec3050130a5315fd7349745567b9</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceTypeInfo</name>
    <filename>structRTI__RoutingServiceTypeInfo.html</filename>
    <member kind="variable">
      <type>char *</type>
      <name>type_name</name>
      <anchorfile>structRTI__RoutingServiceTypeInfo.html</anchorfile>
      <anchor>ac699c7ed4dd68c04fedd6597bd8073bd</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceTypeRepresentationKind</type>
      <name>type_representation_kind</name>
      <anchorfile>structRTI__RoutingServiceTypeInfo.html</anchorfile>
      <anchor>a130a2da52d687fab13ad71588880cd5d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>RTI_RoutingServiceTypeRepresentation</type>
      <name>type_representation</name>
      <anchorfile>structRTI__RoutingServiceTypeInfo.html</anchorfile>
      <anchor>a5dbcaf1b5910b9c6907c93c3b0cc6922</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>RTI_RoutingServiceVersion</name>
    <filename>structRTI__RoutingServiceVersion.html</filename>
    <member kind="variable">
      <type>int</type>
      <name>major</name>
      <anchorfile>structRTI__RoutingServiceVersion.html</anchorfile>
      <anchor>afd54e350dda576bb0a8faf682c686f16</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>minor</name>
      <anchorfile>structRTI__RoutingServiceVersion.html</anchorfile>
      <anchor>a03ce30d649166a3dad43d0c1d34a0f80</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>release</name>
      <anchorfile>structRTI__RoutingServiceVersion.html</anchorfile>
      <anchor>af4660954aeac497be6a328bf466e4605</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>revision</name>
      <anchorfile>structRTI__RoutingServiceVersion.html</anchorfile>
      <anchor>a8513621b62181ff7401e8c17de6d0954</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="dir">
    <name>interface</name>
    <path>/home/build/rti/waveworks/ndds523/router.1.0/interface/</path>
    <filename>dir_b31d54d5631803016a26f28213a41162.html</filename>
    <file>adapter.ifc</file>
    <file>adapter_new.ifc</file>
    <file>dll.ifc</file>
    <file>infrastructure.ifc</file>
    <file>log.ifc</file>
    <file>processor.ifc</file>
    <file>remote_config.ifc</file>
    <file>service.ifc</file>
    <file>test_system.ifc</file>
    <file>transformation.ifc</file>
  </compound>
  <compound kind="dir">
    <name>srcDoc</name>
    <path>/home/build/rti/waveworks/ndds523/router.1.0/srcDoc/</path>
    <filename>dir_507f75a1e0c128f1e01fa6c0943f3130.html</filename>
    <file>adapter.dxx</file>
    <file>main.dxx</file>
  </compound>
  <compound kind="page">
    <name>index</name>
    <title></title>
    <filename>index</filename>
    <docanchor file="index">main_support</docanchor>
  </compound>
</tagfile>
