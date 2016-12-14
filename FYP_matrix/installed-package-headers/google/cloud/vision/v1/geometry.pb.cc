// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/vision/v1/geometry.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/cloud/vision/v1/geometry.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace cloud {
namespace vision {
namespace v1 {

namespace {

const ::google::protobuf::Descriptor* Vertex_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Vertex_reflection_ = NULL;
const ::google::protobuf::Descriptor* BoundingPoly_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BoundingPoly_reflection_ = NULL;
const ::google::protobuf::Descriptor* Position_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Position_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
  protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/cloud/vision/v1/geometry.proto");
  GOOGLE_CHECK(file != NULL);
  Vertex_descriptor_ = file->message_type(0);
  static const int Vertex_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vertex, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vertex, y_),
  };
  Vertex_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Vertex_descriptor_,
      Vertex::internal_default_instance(),
      Vertex_offsets_,
      -1,
      -1,
      -1,
      sizeof(Vertex),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vertex, _internal_metadata_));
  BoundingPoly_descriptor_ = file->message_type(1);
  static const int BoundingPoly_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoundingPoly, vertices_),
  };
  BoundingPoly_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BoundingPoly_descriptor_,
      BoundingPoly::internal_default_instance(),
      BoundingPoly_offsets_,
      -1,
      -1,
      -1,
      sizeof(BoundingPoly),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoundingPoly, _internal_metadata_));
  Position_descriptor_ = file->message_type(2);
  static const int Position_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, z_),
  };
  Position_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Position_descriptor_,
      Position::internal_default_instance(),
      Position_offsets_,
      -1,
      -1,
      -1,
      sizeof(Position),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Vertex_descriptor_, Vertex::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BoundingPoly_descriptor_, BoundingPoly::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Position_descriptor_, Position::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
  Vertex_default_instance_.Shutdown();
  delete Vertex_reflection_;
  BoundingPoly_default_instance_.Shutdown();
  delete BoundingPoly_reflection_;
  Position_default_instance_.Shutdown();
  delete Position_reflection_;
}

void protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Vertex_default_instance_.DefaultConstruct();
  BoundingPoly_default_instance_.DefaultConstruct();
  Position_default_instance_.DefaultConstruct();
  Vertex_default_instance_.get_mutable()->InitAsDefaultInstance();
  BoundingPoly_default_instance_.get_mutable()->InitAsDefaultInstance();
  Position_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_once_);
void protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_once_,
                 &protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl);
}
void protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%google/cloud/vision/v1/geometry.proto\022"
    "\026google.cloud.vision.v1\"\036\n\006Vertex\022\t\n\001x\030\001"
    " \001(\005\022\t\n\001y\030\002 \001(\005\"@\n\014BoundingPoly\0220\n\010verti"
    "ces\030\001 \003(\0132\036.google.cloud.vision.v1.Verte"
    "x\"+\n\010Position\022\t\n\001x\030\001 \001(\002\022\t\n\001y\030\002 \001(\002\022\t\n\001z"
    "\030\003 \001(\002Bn\n\032com.google.cloud.vision.v1B\rGe"
    "ometryProtoP\001Z<google.golang.org/genprot"
    "o/googleapis/cloud/vision/v1;vision\370\001\001b\006"
    "proto3", 326);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/vision/v1/geometry.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_once_);
void protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_once_,
                 &protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto {
  StaticDescriptorInitializer_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
    protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  }
} static_descriptor_initializer_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vertex::kXFieldNumber;
const int Vertex::kYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vertex::Vertex()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.vision.v1.Vertex)
}
Vertex::Vertex(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.cloud.vision.v1.Vertex)
}

void Vertex::InitAsDefaultInstance() {
}

Vertex::Vertex(const Vertex& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.cloud.vision.v1.Vertex)
}

void Vertex::SharedCtor() {
  ::memset(&x_, 0, reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_) + sizeof(y_));
  _cached_size_ = 0;
}

Vertex::~Vertex() {
  // @@protoc_insertion_point(destructor:google.cloud.vision.v1.Vertex)
  SharedDtor();
}

void Vertex::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void Vertex::ArenaDtor(void* object) {
  Vertex* _this = reinterpret_cast< Vertex* >(object);
  (void)_this;
}
void Vertex::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Vertex::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vertex::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Vertex_descriptor_;
}

const Vertex& Vertex::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Vertex> Vertex_default_instance_;

Vertex* Vertex::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Vertex>(arena);
}

void Vertex::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.vision.v1.Vertex)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Vertex, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Vertex*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(x_, y_);

#undef ZR_HELPER_
#undef ZR_

}

bool Vertex::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.vision.v1.Vertex)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 x = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_y;
        break;
      }

      // optional int32 y = 2;
      case 2: {
        if (tag == 16) {
         parse_y:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.vision.v1.Vertex)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.vision.v1.Vertex)
  return false;
#undef DO_
}

void Vertex::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.vision.v1.Vertex)
  // optional int32 x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->x(), output);
  }

  // optional int32 y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->y(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.vision.v1.Vertex)
}

::google::protobuf::uint8* Vertex::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.vision.v1.Vertex)
  // optional int32 x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->x(), target);
  }

  // optional int32 y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->y(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.vision.v1.Vertex)
  return target;
}

size_t Vertex::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.vision.v1.Vertex)
  size_t total_size = 0;

  // optional int32 x = 1;
  if (this->x() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x());
  }

  // optional int32 y = 2;
  if (this->y() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Vertex::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.vision.v1.Vertex)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Vertex* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vertex>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.vision.v1.Vertex)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.vision.v1.Vertex)
    UnsafeMergeFrom(*source);
  }
}

void Vertex::MergeFrom(const Vertex& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.vision.v1.Vertex)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Vertex::UnsafeMergeFrom(const Vertex& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
}

void Vertex::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.vision.v1.Vertex)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vertex::CopyFrom(const Vertex& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.vision.v1.Vertex)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Vertex::IsInitialized() const {

  return true;
}

void Vertex::Swap(Vertex* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Vertex temp;
    temp.UnsafeMergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void Vertex::UnsafeArenaSwap(Vertex* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Vertex::InternalSwap(Vertex* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Vertex::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Vertex_descriptor_;
  metadata.reflection = Vertex_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Vertex

// optional int32 x = 1;
void Vertex::clear_x() {
  x_ = 0;
}
::google::protobuf::int32 Vertex::x() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Vertex.x)
  return x_;
}
void Vertex::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Vertex.x)
}

// optional int32 y = 2;
void Vertex::clear_y() {
  y_ = 0;
}
::google::protobuf::int32 Vertex::y() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Vertex.y)
  return y_;
}
void Vertex::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Vertex.y)
}

inline const Vertex* Vertex::internal_default_instance() {
  return &Vertex_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BoundingPoly::kVerticesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BoundingPoly::BoundingPoly()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.vision.v1.BoundingPoly)
}
BoundingPoly::BoundingPoly(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  vertices_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.cloud.vision.v1.BoundingPoly)
}

void BoundingPoly::InitAsDefaultInstance() {
}

BoundingPoly::BoundingPoly(const BoundingPoly& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.cloud.vision.v1.BoundingPoly)
}

void BoundingPoly::SharedCtor() {
  _cached_size_ = 0;
}

BoundingPoly::~BoundingPoly() {
  // @@protoc_insertion_point(destructor:google.cloud.vision.v1.BoundingPoly)
  SharedDtor();
}

void BoundingPoly::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void BoundingPoly::ArenaDtor(void* object) {
  BoundingPoly* _this = reinterpret_cast< BoundingPoly* >(object);
  (void)_this;
}
void BoundingPoly::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void BoundingPoly::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BoundingPoly::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BoundingPoly_descriptor_;
}

const BoundingPoly& BoundingPoly::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<BoundingPoly> BoundingPoly_default_instance_;

BoundingPoly* BoundingPoly::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<BoundingPoly>(arena);
}

void BoundingPoly::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.vision.v1.BoundingPoly)
  vertices_.Clear();
}

bool BoundingPoly::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.vision.v1.BoundingPoly)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.cloud.vision.v1.Vertex vertices = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_vertices:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_vertices()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_vertices;
        input->UnsafeDecrementRecursionDepth();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.vision.v1.BoundingPoly)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.vision.v1.BoundingPoly)
  return false;
#undef DO_
}

void BoundingPoly::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.vision.v1.BoundingPoly)
  // repeated .google.cloud.vision.v1.Vertex vertices = 1;
  for (unsigned int i = 0, n = this->vertices_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->vertices(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.vision.v1.BoundingPoly)
}

::google::protobuf::uint8* BoundingPoly::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.vision.v1.BoundingPoly)
  // repeated .google.cloud.vision.v1.Vertex vertices = 1;
  for (unsigned int i = 0, n = this->vertices_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->vertices(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.vision.v1.BoundingPoly)
  return target;
}

size_t BoundingPoly::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.vision.v1.BoundingPoly)
  size_t total_size = 0;

  // repeated .google.cloud.vision.v1.Vertex vertices = 1;
  {
    unsigned int count = this->vertices_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->vertices(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BoundingPoly::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.vision.v1.BoundingPoly)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const BoundingPoly* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BoundingPoly>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.vision.v1.BoundingPoly)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.vision.v1.BoundingPoly)
    UnsafeMergeFrom(*source);
  }
}

void BoundingPoly::MergeFrom(const BoundingPoly& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.vision.v1.BoundingPoly)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void BoundingPoly::UnsafeMergeFrom(const BoundingPoly& from) {
  GOOGLE_DCHECK(&from != this);
  vertices_.MergeFrom(from.vertices_);
}

void BoundingPoly::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.vision.v1.BoundingPoly)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BoundingPoly::CopyFrom(const BoundingPoly& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.vision.v1.BoundingPoly)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool BoundingPoly::IsInitialized() const {

  return true;
}

void BoundingPoly::Swap(BoundingPoly* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    BoundingPoly temp;
    temp.UnsafeMergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void BoundingPoly::UnsafeArenaSwap(BoundingPoly* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void BoundingPoly::InternalSwap(BoundingPoly* other) {
  vertices_.UnsafeArenaSwap(&other->vertices_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BoundingPoly::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BoundingPoly_descriptor_;
  metadata.reflection = BoundingPoly_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BoundingPoly

// repeated .google.cloud.vision.v1.Vertex vertices = 1;
int BoundingPoly::vertices_size() const {
  return vertices_.size();
}
void BoundingPoly::clear_vertices() {
  vertices_.Clear();
}
const ::google::cloud::vision::v1::Vertex& BoundingPoly::vertices(int index) const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Get(index);
}
::google::cloud::vision::v1::Vertex* BoundingPoly::mutable_vertices(int index) {
  // @@protoc_insertion_point(field_mutable:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Mutable(index);
}
::google::cloud::vision::v1::Vertex* BoundingPoly::add_vertices() {
  // @@protoc_insertion_point(field_add:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex >*
BoundingPoly::mutable_vertices() {
  // @@protoc_insertion_point(field_mutable_list:google.cloud.vision.v1.BoundingPoly.vertices)
  return &vertices_;
}
const ::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex >&
BoundingPoly::vertices() const {
  // @@protoc_insertion_point(field_list:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_;
}

inline const BoundingPoly* BoundingPoly::internal_default_instance() {
  return &BoundingPoly_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Position::kXFieldNumber;
const int Position::kYFieldNumber;
const int Position::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Position::Position()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.vision.v1.Position)
}
Position::Position(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.cloud.vision.v1.Position)
}

void Position::InitAsDefaultInstance() {
}

Position::Position(const Position& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.cloud.vision.v1.Position)
}

void Position::SharedCtor() {
  ::memset(&x_, 0, reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
  _cached_size_ = 0;
}

Position::~Position() {
  // @@protoc_insertion_point(destructor:google.cloud.vision.v1.Position)
  SharedDtor();
}

void Position::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void Position::ArenaDtor(void* object) {
  Position* _this = reinterpret_cast< Position* >(object);
  (void)_this;
}
void Position::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Position::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Position::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Position_descriptor_;
}

const Position& Position::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Position> Position_default_instance_;

Position* Position::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Position>(arena);
}

void Position::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.vision.v1.Position)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Position, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Position*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(x_, z_);

#undef ZR_HELPER_
#undef ZR_

}

bool Position::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.vision.v1.Position)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float x = 1;
      case 1: {
        if (tag == 13) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_y;
        break;
      }

      // optional float y = 2;
      case 2: {
        if (tag == 21) {
         parse_y:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_z;
        break;
      }

      // optional float z = 3;
      case 3: {
        if (tag == 29) {
         parse_z:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &z_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.vision.v1.Position)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.vision.v1.Position)
  return false;
#undef DO_
}

void Position::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.vision.v1.Position)
  // optional float x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->x(), output);
  }

  // optional float y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->y(), output);
  }

  // optional float z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->z(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.vision.v1.Position)
}

::google::protobuf::uint8* Position::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.vision.v1.Position)
  // optional float x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->x(), target);
  }

  // optional float y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->y(), target);
  }

  // optional float z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->z(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.vision.v1.Position)
  return target;
}

size_t Position::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.vision.v1.Position)
  size_t total_size = 0;

  // optional float x = 1;
  if (this->x() != 0) {
    total_size += 1 + 4;
  }

  // optional float y = 2;
  if (this->y() != 0) {
    total_size += 1 + 4;
  }

  // optional float z = 3;
  if (this->z() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Position::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.vision.v1.Position)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Position* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Position>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.vision.v1.Position)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.vision.v1.Position)
    UnsafeMergeFrom(*source);
  }
}

void Position::MergeFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.vision.v1.Position)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Position::UnsafeMergeFrom(const Position& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void Position::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.vision.v1.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Position::CopyFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.vision.v1.Position)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Position::IsInitialized() const {

  return true;
}

void Position::Swap(Position* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Position temp;
    temp.UnsafeMergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void Position::UnsafeArenaSwap(Position* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Position::InternalSwap(Position* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(z_, other->z_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Position::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Position_descriptor_;
  metadata.reflection = Position_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Position

// optional float x = 1;
void Position::clear_x() {
  x_ = 0;
}
float Position::x() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.x)
  return x_;
}
void Position::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.x)
}

// optional float y = 2;
void Position::clear_y() {
  y_ = 0;
}
float Position::y() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.y)
  return y_;
}
void Position::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.y)
}

// optional float z = 3;
void Position::clear_z() {
  z_ = 0;
}
float Position::z() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.z)
  return z_;
}
void Position::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.z)
}

inline const Position* Position::internal_default_instance() {
  return &Position_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace vision
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)
