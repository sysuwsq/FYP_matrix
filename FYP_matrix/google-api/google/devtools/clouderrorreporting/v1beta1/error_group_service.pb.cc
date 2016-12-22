// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/devtools/clouderrorreporting/v1beta1/error_group_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/devtools/clouderrorreporting/v1beta1/error_group_service.pb.h"

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
namespace devtools {
namespace clouderrorreporting {
namespace v1beta1 {

namespace {

const ::google::protobuf::Descriptor* GetGroupRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetGroupRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* UpdateGroupRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UpdateGroupRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto() {
  protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/devtools/clouderrorreporting/v1beta1/error_group_service.proto");
  GOOGLE_CHECK(file != NULL);
  GetGroupRequest_descriptor_ = file->message_type(0);
  static const int GetGroupRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetGroupRequest, group_name_),
  };
  GetGroupRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetGroupRequest_descriptor_,
      GetGroupRequest::internal_default_instance(),
      GetGroupRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(GetGroupRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetGroupRequest, _internal_metadata_));
  UpdateGroupRequest_descriptor_ = file->message_type(1);
  static const int UpdateGroupRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UpdateGroupRequest, group_),
  };
  UpdateGroupRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UpdateGroupRequest_descriptor_,
      UpdateGroupRequest::internal_default_instance(),
      UpdateGroupRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(UpdateGroupRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UpdateGroupRequest, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetGroupRequest_descriptor_, GetGroupRequest::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UpdateGroupRequest_descriptor_, UpdateGroupRequest::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto() {
  GetGroupRequest_default_instance_.Shutdown();
  delete GetGroupRequest_reflection_;
  UpdateGroupRequest_default_instance_.Shutdown();
  delete UpdateGroupRequest_reflection_;
}

void protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::api::protobuf_InitDefaults_google_2fapi_2fannotations_2eproto();
  ::google::devtools::clouderrorreporting::v1beta1::protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2fcommon_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  GetGroupRequest_default_instance_.DefaultConstruct();
  UpdateGroupRequest_default_instance_.DefaultConstruct();
  GetGroupRequest_default_instance_.get_mutable()->InitAsDefaultInstance();
  UpdateGroupRequest_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_once_);
void protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_once_,
                 &protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_impl);
}
void protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nEgoogle/devtools/clouderrorreporting/v1"
    "beta1/error_group_service.proto\022+google."
    "devtools.clouderrorreporting.v1beta1\032\034go"
    "ogle/api/annotations.proto\0328google/devto"
    "ols/clouderrorreporting/v1beta1/common.p"
    "roto\"%\n\017GetGroupRequest\022\022\n\ngroup_name\030\001 "
    "\001(\t\"\\\n\022UpdateGroupRequest\022F\n\005group\030\001 \001(\013"
    "27.google.devtools.clouderrorreporting.v"
    "1beta1.ErrorGroup2\216\003\n\021ErrorGroupService\022"
    "\264\001\n\010GetGroup\022<.google.devtools.clouderro"
    "rreporting.v1beta1.GetGroupRequest\0327.goo"
    "gle.devtools.clouderrorreporting.v1beta1"
    ".ErrorGroup\"1\202\323\344\223\002+\022)/v1beta1/{group_nam"
    "e=projects/*/groups/*}\022\301\001\n\013UpdateGroup\022\?"
    ".google.devtools.clouderrorreporting.v1b"
    "eta1.UpdateGroupRequest\0327.google.devtool"
    "s.clouderrorreporting.v1beta1.ErrorGroup"
    "\"8\202\323\344\223\0022\032)/v1beta1/{group.name=projects/"
    "*/groups/*}:\005groupB\321\001\n/com.google.devtoo"
    "ls.clouderrorreporting.v1beta1B\026ErrorGro"
    "upServiceProtoP\001Z^google.golang.org/genp"
    "roto/googleapis/devtools/clouderrorrepor"
    "ting/v1beta1;clouderrorreporting\252\002#Googl"
    "e.Cloud.ErrorReporting.V1Beta1b\006proto3", 958);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/devtools/clouderrorreporting/v1beta1/error_group_service.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_AddDesc_google_2fapi_2fannotations_2eproto();
  ::google::devtools::clouderrorreporting::v1beta1::protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2fcommon_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_once_);
void protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_once_,
                 &protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto {
  StaticDescriptorInitializer_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto() {
    protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto();
  }
} static_descriptor_initializer_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetGroupRequest::kGroupNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetGroupRequest::GetGroupRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
}

void GetGroupRequest::InitAsDefaultInstance() {
}

GetGroupRequest::GetGroupRequest(const GetGroupRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
}

void GetGroupRequest::SharedCtor() {
  group_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

GetGroupRequest::~GetGroupRequest() {
  // @@protoc_insertion_point(destructor:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  SharedDtor();
}

void GetGroupRequest::SharedDtor() {
  group_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GetGroupRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetGroupRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetGroupRequest_descriptor_;
}

const GetGroupRequest& GetGroupRequest::default_instance() {
  protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<GetGroupRequest> GetGroupRequest_default_instance_;

GetGroupRequest* GetGroupRequest::New(::google::protobuf::Arena* arena) const {
  GetGroupRequest* n = new GetGroupRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetGroupRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  group_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool GetGroupRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string group_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_group_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->group_name().data(), this->group_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name"));
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
  // @@protoc_insertion_point(parse_success:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  return false;
#undef DO_
}

void GetGroupRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  // optional string group_name = 1;
  if (this->group_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->group_name().data(), this->group_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->group_name(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
}

::google::protobuf::uint8* GetGroupRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  // optional string group_name = 1;
  if (this->group_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->group_name().data(), this->group_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->group_name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  return target;
}

size_t GetGroupRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  size_t total_size = 0;

  // optional string group_name = 1;
  if (this->group_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->group_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetGroupRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const GetGroupRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetGroupRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
    UnsafeMergeFrom(*source);
  }
}

void GetGroupRequest::MergeFrom(const GetGroupRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void GetGroupRequest::UnsafeMergeFrom(const GetGroupRequest& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.group_name().size() > 0) {

    group_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.group_name_);
  }
}

void GetGroupRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetGroupRequest::CopyFrom(const GetGroupRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool GetGroupRequest::IsInitialized() const {

  return true;
}

void GetGroupRequest::Swap(GetGroupRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetGroupRequest::InternalSwap(GetGroupRequest* other) {
  group_name_.Swap(&other->group_name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetGroupRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetGroupRequest_descriptor_;
  metadata.reflection = GetGroupRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetGroupRequest

// optional string group_name = 1;
void GetGroupRequest::clear_group_name() {
  group_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& GetGroupRequest::group_name() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  return group_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void GetGroupRequest::set_group_name(const ::std::string& value) {
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
void GetGroupRequest::set_group_name(const char* value) {
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
void GetGroupRequest::set_group_name(const char* value, size_t size) {
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
::std::string* GetGroupRequest::mutable_group_name() {
  
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  return group_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* GetGroupRequest::release_group_name() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  
  return group_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void GetGroupRequest::set_allocated_group_name(::std::string* group_name) {
  if (group_name != NULL) {
    
  } else {
    
  }
  group_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), group_name);
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}

inline const GetGroupRequest* GetGroupRequest::internal_default_instance() {
  return &GetGroupRequest_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UpdateGroupRequest::kGroupFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UpdateGroupRequest::UpdateGroupRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
}

void UpdateGroupRequest::InitAsDefaultInstance() {
  group_ = const_cast< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup*>(
      ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup::internal_default_instance());
}

UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
}

void UpdateGroupRequest::SharedCtor() {
  group_ = NULL;
  _cached_size_ = 0;
}

UpdateGroupRequest::~UpdateGroupRequest() {
  // @@protoc_insertion_point(destructor:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  SharedDtor();
}

void UpdateGroupRequest::SharedDtor() {
  if (this != &UpdateGroupRequest_default_instance_.get()) {
    delete group_;
  }
}

void UpdateGroupRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UpdateGroupRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UpdateGroupRequest_descriptor_;
}

const UpdateGroupRequest& UpdateGroupRequest::default_instance() {
  protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<UpdateGroupRequest> UpdateGroupRequest_default_instance_;

UpdateGroupRequest* UpdateGroupRequest::New(::google::protobuf::Arena* arena) const {
  UpdateGroupRequest* n = new UpdateGroupRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UpdateGroupRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  if (GetArenaNoVirtual() == NULL && group_ != NULL) delete group_;
  group_ = NULL;
}

bool UpdateGroupRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_group()));
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
  // @@protoc_insertion_point(parse_success:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  return false;
#undef DO_
}

void UpdateGroupRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  // optional .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
  if (this->has_group()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->group_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
}

::google::protobuf::uint8* UpdateGroupRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  // optional .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
  if (this->has_group()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->group_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  return target;
}

size_t UpdateGroupRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  size_t total_size = 0;

  // optional .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
  if (this->has_group()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->group_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UpdateGroupRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const UpdateGroupRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const UpdateGroupRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
    UnsafeMergeFrom(*source);
  }
}

void UpdateGroupRequest::MergeFrom(const UpdateGroupRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void UpdateGroupRequest::UnsafeMergeFrom(const UpdateGroupRequest& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.has_group()) {
    mutable_group()->::google::devtools::clouderrorreporting::v1beta1::ErrorGroup::MergeFrom(from.group());
  }
}

void UpdateGroupRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UpdateGroupRequest::CopyFrom(const UpdateGroupRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool UpdateGroupRequest::IsInitialized() const {

  return true;
}

void UpdateGroupRequest::Swap(UpdateGroupRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UpdateGroupRequest::InternalSwap(UpdateGroupRequest* other) {
  std::swap(group_, other->group_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UpdateGroupRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UpdateGroupRequest_descriptor_;
  metadata.reflection = UpdateGroupRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UpdateGroupRequest

// optional .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
bool UpdateGroupRequest::has_group() const {
  return this != internal_default_instance() && group_ != NULL;
}
void UpdateGroupRequest::clear_group() {
  if (GetArenaNoVirtual() == NULL && group_ != NULL) delete group_;
  group_ = NULL;
}
const ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup& UpdateGroupRequest::group() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  return group_ != NULL ? *group_
                         : *::google::devtools::clouderrorreporting::v1beta1::ErrorGroup::internal_default_instance();
}
::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* UpdateGroupRequest::mutable_group() {
  
  if (group_ == NULL) {
    group_ = new ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  return group_;
}
::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* UpdateGroupRequest::release_group() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  
  ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* temp = group_;
  group_ = NULL;
  return temp;
}
void UpdateGroupRequest::set_allocated_group(::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* group) {
  delete group_;
  group_ = group;
  if (group) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
}

inline const UpdateGroupRequest* UpdateGroupRequest::internal_default_instance() {
  return &UpdateGroupRequest_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace clouderrorreporting
}  // namespace devtools
}  // namespace google

// @@protoc_insertion_point(global_scope)