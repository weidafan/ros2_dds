// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/sensor/proto/sensor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/sensor/proto/sensor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace sensor {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* PointCloud_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PointCloud_reflection_ = NULL;
const ::google::protobuf::Descriptor* CompressedPointCloud_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CompressedPointCloud_reflection_ = NULL;
const ::google::protobuf::Descriptor* RangeData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RangeData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto() {
  protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/sensor/proto/sensor.proto");
  GOOGLE_CHECK(file != NULL);
  PointCloud_descriptor_ = file->message_type(0);
  static const int PointCloud_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PointCloud, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PointCloud, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PointCloud, z_),
  };
  PointCloud_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PointCloud_descriptor_,
      PointCloud::default_instance_,
      PointCloud_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PointCloud, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PointCloud, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PointCloud));
  CompressedPointCloud_descriptor_ = file->message_type(1);
  static const int CompressedPointCloud_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CompressedPointCloud, num_points_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CompressedPointCloud, point_data_),
  };
  CompressedPointCloud_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CompressedPointCloud_descriptor_,
      CompressedPointCloud::default_instance_,
      CompressedPointCloud_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CompressedPointCloud, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CompressedPointCloud, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CompressedPointCloud));
  RangeData_descriptor_ = file->message_type(2);
  static const int RangeData_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeData, origin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeData, point_cloud_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeData, missing_echo_point_cloud_),
  };
  RangeData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RangeData_descriptor_,
      RangeData::default_instance_,
      RangeData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RangeData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PointCloud_descriptor_, &PointCloud::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CompressedPointCloud_descriptor_, &CompressedPointCloud::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RangeData_descriptor_, &RangeData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fsensor_2eproto() {
  delete PointCloud::default_instance_;
  delete PointCloud_reflection_;
  delete CompressedPointCloud::default_instance_;
  delete CompressedPointCloud_reflection_;
  delete RangeData::default_instance_;
  delete RangeData_reflection_;
}

void protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::transform::proto::protobuf_AddDesc_cartographer_2ftransform_2fproto_2ftransform_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&cartographer/sensor/proto/sensor.proto"
    "\022\031cartographer.sensor.proto\032,cartographe"
    "r/transform/proto/transform.proto\"9\n\nPoi"
    "ntCloud\022\r\n\001x\030\003 \003(\002B\002\020\001\022\r\n\001y\030\004 \003(\002B\002\020\001\022\r\n"
    "\001z\030\005 \003(\002B\002\020\001\"B\n\024CompressedPointCloud\022\022\n\n"
    "num_points\030\001 \001(\005\022\026\n\npoint_data\030\003 \003(\005B\002\020\001"
    "\"\310\001\n\tRangeData\0226\n\006origin\030\001 \001(\0132&.cartogr"
    "apher.transform.proto.Vector3f\022:\n\013point_"
    "cloud\030\002 \001(\0132%.cartographer.sensor.proto."
    "PointCloud\022G\n\030missing_echo_point_cloud\030\003"
    " \001(\0132%.cartographer.sensor.proto.PointCl"
    "oudB\010B\006Sensor", 453);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/sensor/proto/sensor.proto", &protobuf_RegisterTypes);
  PointCloud::default_instance_ = new PointCloud();
  CompressedPointCloud::default_instance_ = new CompressedPointCloud();
  RangeData::default_instance_ = new RangeData();
  PointCloud::default_instance_->InitAsDefaultInstance();
  CompressedPointCloud::default_instance_->InitAsDefaultInstance();
  RangeData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fsensor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fsensor_2fproto_2fsensor_2eproto {
  StaticDescriptorInitializer_cartographer_2fsensor_2fproto_2fsensor_2eproto() {
    protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  }
} static_descriptor_initializer_cartographer_2fsensor_2fproto_2fsensor_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PointCloud::kXFieldNumber;
const int PointCloud::kYFieldNumber;
const int PointCloud::kZFieldNumber;
#endif  // !_MSC_VER

PointCloud::PointCloud()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.sensor.proto.PointCloud)
}

void PointCloud::InitAsDefaultInstance() {
}

PointCloud::PointCloud(const PointCloud& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.sensor.proto.PointCloud)
}

void PointCloud::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PointCloud::~PointCloud() {
  // @@protoc_insertion_point(destructor:cartographer.sensor.proto.PointCloud)
  SharedDtor();
}

void PointCloud::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PointCloud::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PointCloud::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PointCloud_descriptor_;
}

const PointCloud& PointCloud::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  return *default_instance_;
}

PointCloud* PointCloud::default_instance_ = NULL;

PointCloud* PointCloud::New() const {
  return new PointCloud;
}

void PointCloud::Clear() {
  x_.Clear();
  y_.Clear();
  z_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PointCloud::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.sensor.proto.PointCloud)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated float x = 3 [packed = true];
      case 3: {
        if (tag == 26) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_x())));
        } else if (tag == 29) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 26, input, this->mutable_x())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_y;
        break;
      }

      // repeated float y = 4 [packed = true];
      case 4: {
        if (tag == 34) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_y())));
        } else if (tag == 37) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 34, input, this->mutable_y())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_z;
        break;
      }

      // repeated float z = 5 [packed = true];
      case 5: {
        if (tag == 42) {
         parse_z:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_z())));
        } else if (tag == 45) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 42, input, this->mutable_z())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.sensor.proto.PointCloud)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.sensor.proto.PointCloud)
  return false;
#undef DO_
}

void PointCloud::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.sensor.proto.PointCloud)
  // repeated float x = 3 [packed = true];
  if (this->x_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_x_cached_byte_size_);
  }
  for (int i = 0; i < this->x_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->x(i), output);
  }

  // repeated float y = 4 [packed = true];
  if (this->y_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_y_cached_byte_size_);
  }
  for (int i = 0; i < this->y_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->y(i), output);
  }

  // repeated float z = 5 [packed = true];
  if (this->z_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_z_cached_byte_size_);
  }
  for (int i = 0; i < this->z_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->z(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.sensor.proto.PointCloud)
}

::google::protobuf::uint8* PointCloud::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.sensor.proto.PointCloud)
  // repeated float x = 3 [packed = true];
  if (this->x_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _x_cached_byte_size_, target);
  }
  for (int i = 0; i < this->x_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->x(i), target);
  }

  // repeated float y = 4 [packed = true];
  if (this->y_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _y_cached_byte_size_, target);
  }
  for (int i = 0; i < this->y_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->y(i), target);
  }

  // repeated float z = 5 [packed = true];
  if (this->z_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _z_cached_byte_size_, target);
  }
  for (int i = 0; i < this->z_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->z(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.sensor.proto.PointCloud)
  return target;
}

int PointCloud::ByteSize() const {
  int total_size = 0;

  // repeated float x = 3 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->x_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _x_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float y = 4 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->y_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _y_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float z = 5 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->z_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _z_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PointCloud::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PointCloud* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PointCloud*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PointCloud::MergeFrom(const PointCloud& from) {
  GOOGLE_CHECK_NE(&from, this);
  x_.MergeFrom(from.x_);
  y_.MergeFrom(from.y_);
  z_.MergeFrom(from.z_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PointCloud::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PointCloud::CopyFrom(const PointCloud& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PointCloud::IsInitialized() const {

  return true;
}

void PointCloud::Swap(PointCloud* other) {
  if (other != this) {
    x_.Swap(&other->x_);
    y_.Swap(&other->y_);
    z_.Swap(&other->z_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PointCloud::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PointCloud_descriptor_;
  metadata.reflection = PointCloud_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CompressedPointCloud::kNumPointsFieldNumber;
const int CompressedPointCloud::kPointDataFieldNumber;
#endif  // !_MSC_VER

CompressedPointCloud::CompressedPointCloud()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.sensor.proto.CompressedPointCloud)
}

void CompressedPointCloud::InitAsDefaultInstance() {
}

CompressedPointCloud::CompressedPointCloud(const CompressedPointCloud& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.sensor.proto.CompressedPointCloud)
}

void CompressedPointCloud::SharedCtor() {
  _cached_size_ = 0;
  num_points_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CompressedPointCloud::~CompressedPointCloud() {
  // @@protoc_insertion_point(destructor:cartographer.sensor.proto.CompressedPointCloud)
  SharedDtor();
}

void CompressedPointCloud::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CompressedPointCloud::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CompressedPointCloud::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CompressedPointCloud_descriptor_;
}

const CompressedPointCloud& CompressedPointCloud::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  return *default_instance_;
}

CompressedPointCloud* CompressedPointCloud::default_instance_ = NULL;

CompressedPointCloud* CompressedPointCloud::New() const {
  return new CompressedPointCloud;
}

void CompressedPointCloud::Clear() {
  num_points_ = 0;
  point_data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CompressedPointCloud::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.sensor.proto.CompressedPointCloud)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 num_points = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_points_)));
          set_has_num_points();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_point_data;
        break;
      }

      // repeated int32 point_data = 3 [packed = true];
      case 3: {
        if (tag == 26) {
         parse_point_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_point_data())));
        } else if (tag == 24) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26, input, this->mutable_point_data())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.sensor.proto.CompressedPointCloud)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.sensor.proto.CompressedPointCloud)
  return false;
#undef DO_
}

void CompressedPointCloud::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.sensor.proto.CompressedPointCloud)
  // optional int32 num_points = 1;
  if (has_num_points()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->num_points(), output);
  }

  // repeated int32 point_data = 3 [packed = true];
  if (this->point_data_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_point_data_cached_byte_size_);
  }
  for (int i = 0; i < this->point_data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->point_data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.sensor.proto.CompressedPointCloud)
}

::google::protobuf::uint8* CompressedPointCloud::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.sensor.proto.CompressedPointCloud)
  // optional int32 num_points = 1;
  if (has_num_points()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->num_points(), target);
  }

  // repeated int32 point_data = 3 [packed = true];
  if (this->point_data_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _point_data_cached_byte_size_, target);
  }
  for (int i = 0; i < this->point_data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->point_data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.sensor.proto.CompressedPointCloud)
  return target;
}

int CompressedPointCloud::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 num_points = 1;
    if (has_num_points()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->num_points());
    }

  }
  // repeated int32 point_data = 3 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->point_data_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->point_data(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _point_data_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CompressedPointCloud::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CompressedPointCloud* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CompressedPointCloud*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CompressedPointCloud::MergeFrom(const CompressedPointCloud& from) {
  GOOGLE_CHECK_NE(&from, this);
  point_data_.MergeFrom(from.point_data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_num_points()) {
      set_num_points(from.num_points());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CompressedPointCloud::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CompressedPointCloud::CopyFrom(const CompressedPointCloud& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CompressedPointCloud::IsInitialized() const {

  return true;
}

void CompressedPointCloud::Swap(CompressedPointCloud* other) {
  if (other != this) {
    std::swap(num_points_, other->num_points_);
    point_data_.Swap(&other->point_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CompressedPointCloud::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CompressedPointCloud_descriptor_;
  metadata.reflection = CompressedPointCloud_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RangeData::kOriginFieldNumber;
const int RangeData::kPointCloudFieldNumber;
const int RangeData::kMissingEchoPointCloudFieldNumber;
#endif  // !_MSC_VER

RangeData::RangeData()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.sensor.proto.RangeData)
}

void RangeData::InitAsDefaultInstance() {
  origin_ = const_cast< ::cartographer::transform::proto::Vector3f*>(&::cartographer::transform::proto::Vector3f::default_instance());
  point_cloud_ = const_cast< ::cartographer::sensor::proto::PointCloud*>(&::cartographer::sensor::proto::PointCloud::default_instance());
  missing_echo_point_cloud_ = const_cast< ::cartographer::sensor::proto::PointCloud*>(&::cartographer::sensor::proto::PointCloud::default_instance());
}

RangeData::RangeData(const RangeData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.sensor.proto.RangeData)
}

void RangeData::SharedCtor() {
  _cached_size_ = 0;
  origin_ = NULL;
  point_cloud_ = NULL;
  missing_echo_point_cloud_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RangeData::~RangeData() {
  // @@protoc_insertion_point(destructor:cartographer.sensor.proto.RangeData)
  SharedDtor();
}

void RangeData::SharedDtor() {
  if (this != default_instance_) {
    delete origin_;
    delete point_cloud_;
    delete missing_echo_point_cloud_;
  }
}

void RangeData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RangeData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RangeData_descriptor_;
}

const RangeData& RangeData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  return *default_instance_;
}

RangeData* RangeData::default_instance_ = NULL;

RangeData* RangeData::New() const {
  return new RangeData;
}

void RangeData::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    if (has_origin()) {
      if (origin_ != NULL) origin_->::cartographer::transform::proto::Vector3f::Clear();
    }
    if (has_point_cloud()) {
      if (point_cloud_ != NULL) point_cloud_->::cartographer::sensor::proto::PointCloud::Clear();
    }
    if (has_missing_echo_point_cloud()) {
      if (missing_echo_point_cloud_ != NULL) missing_echo_point_cloud_->::cartographer::sensor::proto::PointCloud::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RangeData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.sensor.proto.RangeData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cartographer.transform.proto.Vector3f origin = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_origin()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_point_cloud;
        break;
      }

      // optional .cartographer.sensor.proto.PointCloud point_cloud = 2;
      case 2: {
        if (tag == 18) {
         parse_point_cloud:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_point_cloud()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_missing_echo_point_cloud;
        break;
      }

      // optional .cartographer.sensor.proto.PointCloud missing_echo_point_cloud = 3;
      case 3: {
        if (tag == 26) {
         parse_missing_echo_point_cloud:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_missing_echo_point_cloud()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.sensor.proto.RangeData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.sensor.proto.RangeData)
  return false;
#undef DO_
}

void RangeData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.sensor.proto.RangeData)
  // optional .cartographer.transform.proto.Vector3f origin = 1;
  if (has_origin()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->origin(), output);
  }

  // optional .cartographer.sensor.proto.PointCloud point_cloud = 2;
  if (has_point_cloud()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->point_cloud(), output);
  }

  // optional .cartographer.sensor.proto.PointCloud missing_echo_point_cloud = 3;
  if (has_missing_echo_point_cloud()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->missing_echo_point_cloud(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.sensor.proto.RangeData)
}

::google::protobuf::uint8* RangeData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.sensor.proto.RangeData)
  // optional .cartographer.transform.proto.Vector3f origin = 1;
  if (has_origin()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->origin(), target);
  }

  // optional .cartographer.sensor.proto.PointCloud point_cloud = 2;
  if (has_point_cloud()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->point_cloud(), target);
  }

  // optional .cartographer.sensor.proto.PointCloud missing_echo_point_cloud = 3;
  if (has_missing_echo_point_cloud()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->missing_echo_point_cloud(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.sensor.proto.RangeData)
  return target;
}

int RangeData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .cartographer.transform.proto.Vector3f origin = 1;
    if (has_origin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->origin());
    }

    // optional .cartographer.sensor.proto.PointCloud point_cloud = 2;
    if (has_point_cloud()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->point_cloud());
    }

    // optional .cartographer.sensor.proto.PointCloud missing_echo_point_cloud = 3;
    if (has_missing_echo_point_cloud()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->missing_echo_point_cloud());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RangeData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RangeData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RangeData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RangeData::MergeFrom(const RangeData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_origin()) {
      mutable_origin()->::cartographer::transform::proto::Vector3f::MergeFrom(from.origin());
    }
    if (from.has_point_cloud()) {
      mutable_point_cloud()->::cartographer::sensor::proto::PointCloud::MergeFrom(from.point_cloud());
    }
    if (from.has_missing_echo_point_cloud()) {
      mutable_missing_echo_point_cloud()->::cartographer::sensor::proto::PointCloud::MergeFrom(from.missing_echo_point_cloud());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RangeData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RangeData::CopyFrom(const RangeData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RangeData::IsInitialized() const {

  return true;
}

void RangeData::Swap(RangeData* other) {
  if (other != this) {
    std::swap(origin_, other->origin_);
    std::swap(point_cloud_, other->point_cloud_);
    std::swap(missing_echo_point_cloud_, other->missing_echo_point_cloud_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RangeData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RangeData_descriptor_;
  metadata.reflection = RangeData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace sensor
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)