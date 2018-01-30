// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/trajectory.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();

class Trajectory;
class Trajectory_Node;
class Trajectory_Submap;

// ===================================================================

class Trajectory_Node : public ::google::protobuf::Message {
 public:
  Trajectory_Node();
  virtual ~Trajectory_Node();

  Trajectory_Node(const Trajectory_Node& from);

  inline Trajectory_Node& operator=(const Trajectory_Node& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Trajectory_Node& default_instance();

  void Swap(Trajectory_Node* other);

  // implements Message ----------------------------------------------

  Trajectory_Node* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Trajectory_Node& from);
  void MergeFrom(const Trajectory_Node& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 timestamp = 1;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  inline ::google::protobuf::int64 timestamp() const;
  inline void set_timestamp(::google::protobuf::int64 value);

  // optional .cartographer.transform.proto.Rigid3d pose = 5;
  inline bool has_pose() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 5;
  inline const ::cartographer::transform::proto::Rigid3d& pose() const;
  inline ::cartographer::transform::proto::Rigid3d* mutable_pose();
  inline ::cartographer::transform::proto::Rigid3d* release_pose();
  inline void set_allocated_pose(::cartographer::transform::proto::Rigid3d* pose);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.Trajectory.Node)
 private:
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_pose();
  inline void clear_has_pose();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 timestamp_;
  ::cartographer::transform::proto::Rigid3d* pose_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();

  void InitAsDefaultInstance();
  static Trajectory_Node* default_instance_;
};
// -------------------------------------------------------------------

class Trajectory_Submap : public ::google::protobuf::Message {
 public:
  Trajectory_Submap();
  virtual ~Trajectory_Submap();

  Trajectory_Submap(const Trajectory_Submap& from);

  inline Trajectory_Submap& operator=(const Trajectory_Submap& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Trajectory_Submap& default_instance();

  void Swap(Trajectory_Submap* other);

  // implements Message ----------------------------------------------

  Trajectory_Submap* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Trajectory_Submap& from);
  void MergeFrom(const Trajectory_Submap& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .cartographer.transform.proto.Rigid3d pose = 1;
  inline bool has_pose() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 1;
  inline const ::cartographer::transform::proto::Rigid3d& pose() const;
  inline ::cartographer::transform::proto::Rigid3d* mutable_pose();
  inline ::cartographer::transform::proto::Rigid3d* release_pose();
  inline void set_allocated_pose(::cartographer::transform::proto::Rigid3d* pose);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.Trajectory.Submap)
 private:
  inline void set_has_pose();
  inline void clear_has_pose();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::cartographer::transform::proto::Rigid3d* pose_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();

  void InitAsDefaultInstance();
  static Trajectory_Submap* default_instance_;
};
// -------------------------------------------------------------------

class Trajectory : public ::google::protobuf::Message {
 public:
  Trajectory();
  virtual ~Trajectory();

  Trajectory(const Trajectory& from);

  inline Trajectory& operator=(const Trajectory& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Trajectory& default_instance();

  void Swap(Trajectory* other);

  // implements Message ----------------------------------------------

  Trajectory* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Trajectory& from);
  void MergeFrom(const Trajectory& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Trajectory_Node Node;
  typedef Trajectory_Submap Submap;

  // accessors -------------------------------------------------------

  // repeated .cartographer.mapping.proto.Trajectory.Node node = 1;
  inline int node_size() const;
  inline void clear_node();
  static const int kNodeFieldNumber = 1;
  inline const ::cartographer::mapping::proto::Trajectory_Node& node(int index) const;
  inline ::cartographer::mapping::proto::Trajectory_Node* mutable_node(int index);
  inline ::cartographer::mapping::proto::Trajectory_Node* add_node();
  inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Node >&
      node() const;
  inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Node >*
      mutable_node();

  // repeated .cartographer.mapping.proto.Trajectory.Submap submap = 2;
  inline int submap_size() const;
  inline void clear_submap();
  static const int kSubmapFieldNumber = 2;
  inline const ::cartographer::mapping::proto::Trajectory_Submap& submap(int index) const;
  inline ::cartographer::mapping::proto::Trajectory_Submap* mutable_submap(int index);
  inline ::cartographer::mapping::proto::Trajectory_Submap* add_submap();
  inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Submap >&
      submap() const;
  inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Submap >*
      mutable_submap();

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.Trajectory)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Node > node_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Submap > submap_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_2eproto();

  void InitAsDefaultInstance();
  static Trajectory* default_instance_;
};
// ===================================================================


// ===================================================================

// Trajectory_Node

// optional int64 timestamp = 1;
inline bool Trajectory_Node::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Trajectory_Node::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Trajectory_Node::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Trajectory_Node::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 Trajectory_Node::timestamp() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Trajectory.Node.timestamp)
  return timestamp_;
}
inline void Trajectory_Node::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Trajectory.Node.timestamp)
}

// optional .cartographer.transform.proto.Rigid3d pose = 5;
inline bool Trajectory_Node::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Trajectory_Node::set_has_pose() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Trajectory_Node::clear_has_pose() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Trajectory_Node::clear_pose() {
  if (pose_ != NULL) pose_->::cartographer::transform::proto::Rigid3d::Clear();
  clear_has_pose();
}
inline const ::cartographer::transform::proto::Rigid3d& Trajectory_Node::pose() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Trajectory.Node.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::cartographer::transform::proto::Rigid3d* Trajectory_Node::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) pose_ = new ::cartographer::transform::proto::Rigid3d;
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Trajectory.Node.pose)
  return pose_;
}
inline ::cartographer::transform::proto::Rigid3d* Trajectory_Node::release_pose() {
  clear_has_pose();
  ::cartographer::transform::proto::Rigid3d* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void Trajectory_Node::set_allocated_pose(::cartographer::transform::proto::Rigid3d* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Trajectory.Node.pose)
}

// -------------------------------------------------------------------

// Trajectory_Submap

// optional .cartographer.transform.proto.Rigid3d pose = 1;
inline bool Trajectory_Submap::has_pose() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Trajectory_Submap::set_has_pose() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Trajectory_Submap::clear_has_pose() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Trajectory_Submap::clear_pose() {
  if (pose_ != NULL) pose_->::cartographer::transform::proto::Rigid3d::Clear();
  clear_has_pose();
}
inline const ::cartographer::transform::proto::Rigid3d& Trajectory_Submap::pose() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Trajectory.Submap.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::cartographer::transform::proto::Rigid3d* Trajectory_Submap::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) pose_ = new ::cartographer::transform::proto::Rigid3d;
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Trajectory.Submap.pose)
  return pose_;
}
inline ::cartographer::transform::proto::Rigid3d* Trajectory_Submap::release_pose() {
  clear_has_pose();
  ::cartographer::transform::proto::Rigid3d* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void Trajectory_Submap::set_allocated_pose(::cartographer::transform::proto::Rigid3d* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Trajectory.Submap.pose)
}

// -------------------------------------------------------------------

// Trajectory

// repeated .cartographer.mapping.proto.Trajectory.Node node = 1;
inline int Trajectory::node_size() const {
  return node_.size();
}
inline void Trajectory::clear_node() {
  node_.Clear();
}
inline const ::cartographer::mapping::proto::Trajectory_Node& Trajectory::node(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Trajectory.node)
  return node_.Get(index);
}
inline ::cartographer::mapping::proto::Trajectory_Node* Trajectory::mutable_node(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Trajectory.node)
  return node_.Mutable(index);
}
inline ::cartographer::mapping::proto::Trajectory_Node* Trajectory::add_node() {
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.Trajectory.node)
  return node_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Node >&
Trajectory::node() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.Trajectory.node)
  return node_;
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Node >*
Trajectory::mutable_node() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.Trajectory.node)
  return &node_;
}

// repeated .cartographer.mapping.proto.Trajectory.Submap submap = 2;
inline int Trajectory::submap_size() const {
  return submap_.size();
}
inline void Trajectory::clear_submap() {
  submap_.Clear();
}
inline const ::cartographer::mapping::proto::Trajectory_Submap& Trajectory::submap(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Trajectory.submap)
  return submap_.Get(index);
}
inline ::cartographer::mapping::proto::Trajectory_Submap* Trajectory::mutable_submap(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Trajectory.submap)
  return submap_.Mutable(index);
}
inline ::cartographer::mapping::proto::Trajectory_Submap* Trajectory::add_submap() {
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.Trajectory.submap)
  return submap_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Submap >&
Trajectory::submap() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.Trajectory.submap)
  return submap_;
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory_Submap >*
Trajectory::mutable_submap() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.Trajectory.submap)
  return &submap_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_2eproto__INCLUDED
