
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HelloWorld.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "HelloWorldSupport.h"
#include "HelloWorldPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'HelloWorld' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   HelloWorldTYPENAME

/* Defines */
#define TDataWriter HelloWorldDataWriter
#define TData       HelloWorld

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   HelloWorldTYPENAME

/* Defines */
#define TDataReader HelloWorldDataReader
#define TDataSeq    HelloWorldSeq
#define TData       HelloWorld

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    HelloWorldTYPENAME
#define TPlugin_new  HelloWorldPlugin_new
#define TPlugin_delete  HelloWorldPlugin_delete

/* Defines */
#define TTypeSupport HelloWorldTypeSupport
#define TData        HelloWorld
#define TDataReader  HelloWorldDataReader
#define TDataWriter  HelloWorldDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

