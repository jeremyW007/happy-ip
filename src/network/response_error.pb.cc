// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: response_error.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "response_error.pb.h"

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

namespace happy {
namespace utils {
namespace network {
class ResponseErrorDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ResponseError> {
} _ResponseError_default_instance_;

namespace protobuf_response_5ferror_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseError, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseError, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseError, error_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseError, error_string_),
  1,
  0,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(ResponseError)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ResponseError_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "response_error.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _ResponseError_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ResponseError_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\024response_error.proto\022\023happy.utils.netw"
      "ork\"9\n\rResponseError\022\022\n\nerror_code\030\001 \002(\005"
      "\022\024\n\014error_string\030\002 \002(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 102);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "response_error.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_response_5ferror_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResponseError::kErrorCodeFieldNumber;
const int ResponseError::kErrorStringFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResponseError::ResponseError()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_response_5ferror_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:happy.utils.network.ResponseError)
}
ResponseError::ResponseError(const ResponseError& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  error_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_error_string()) {
    error_string_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_string_);
  }
  error_code_ = from.error_code_;
  // @@protoc_insertion_point(copy_constructor:happy.utils.network.ResponseError)
}

void ResponseError::SharedCtor() {
  _cached_size_ = 0;
  error_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_code_ = 0;
}

ResponseError::~ResponseError() {
  // @@protoc_insertion_point(destructor:happy.utils.network.ResponseError)
  SharedDtor();
}

void ResponseError::SharedDtor() {
  error_string_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResponseError::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResponseError::descriptor() {
  protobuf_response_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_response_5ferror_2eproto::file_level_metadata[0].descriptor;
}

const ResponseError& ResponseError::default_instance() {
  protobuf_response_5ferror_2eproto::InitDefaults();
  return *internal_default_instance();
}

ResponseError* ResponseError::New(::google::protobuf::Arena* arena) const {
  ResponseError* n = new ResponseError;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ResponseError::Clear() {
// @@protoc_insertion_point(message_clear_start:happy.utils.network.ResponseError)
  if (has_error_string()) {
    GOOGLE_DCHECK(!error_string_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*error_string_.UnsafeRawStringPointer())->clear();
  }
  error_code_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ResponseError::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:happy.utils.network.ResponseError)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 error_code = 1;
      case 1: {
        if (tag == 8u) {
          set_has_error_code();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string error_string = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error_string()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->error_string().data(), this->error_string().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "happy.utils.network.ResponseError.error_string");
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:happy.utils.network.ResponseError)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:happy.utils.network.ResponseError)
  return false;
#undef DO_
}

void ResponseError::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:happy.utils.network.ResponseError)
  // required int32 error_code = 1;
  if (has_error_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->error_code(), output);
  }

  // required string error_string = 2;
  if (has_error_string()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error_string().data(), this->error_string().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "happy.utils.network.ResponseError.error_string");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->error_string(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:happy.utils.network.ResponseError)
}

::google::protobuf::uint8* ResponseError::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:happy.utils.network.ResponseError)
  // required int32 error_code = 1;
  if (has_error_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->error_code(), target);
  }

  // required string error_string = 2;
  if (has_error_string()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error_string().data(), this->error_string().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "happy.utils.network.ResponseError.error_string");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->error_string(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:happy.utils.network.ResponseError)
  return target;
}

size_t ResponseError::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:happy.utils.network.ResponseError)
  size_t total_size = 0;

  if (has_error_string()) {
    // required string error_string = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error_string());
  }

  if (has_error_code()) {
    // required int32 error_code = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->error_code());
  }

  return total_size;
}
size_t ResponseError::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:happy.utils.network.ResponseError)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string error_string = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error_string());

    // required int32 error_code = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->error_code());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResponseError::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:happy.utils.network.ResponseError)
  GOOGLE_DCHECK_NE(&from, this);
  const ResponseError* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ResponseError>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:happy.utils.network.ResponseError)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:happy.utils.network.ResponseError)
    MergeFrom(*source);
  }
}

void ResponseError::MergeFrom(const ResponseError& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:happy.utils.network.ResponseError)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._has_bits_[0 / 32] & 3u) {
    if (from.has_error_string()) {
      set_has_error_string();
      error_string_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_string_);
    }
    if (from.has_error_code()) {
      set_error_code(from.error_code());
    }
  }
}

void ResponseError::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:happy.utils.network.ResponseError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResponseError::CopyFrom(const ResponseError& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:happy.utils.network.ResponseError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseError::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void ResponseError::Swap(ResponseError* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResponseError::InternalSwap(ResponseError* other) {
  error_string_.Swap(&other->error_string_);
  std::swap(error_code_, other->error_code_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ResponseError::GetMetadata() const {
  protobuf_response_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_response_5ferror_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ResponseError

// required int32 error_code = 1;
bool ResponseError::has_error_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ResponseError::set_has_error_code() {
  _has_bits_[0] |= 0x00000002u;
}
void ResponseError::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000002u;
}
void ResponseError::clear_error_code() {
  error_code_ = 0;
  clear_has_error_code();
}
::google::protobuf::int32 ResponseError::error_code() const {
  // @@protoc_insertion_point(field_get:happy.utils.network.ResponseError.error_code)
  return error_code_;
}
void ResponseError::set_error_code(::google::protobuf::int32 value) {
  set_has_error_code();
  error_code_ = value;
  // @@protoc_insertion_point(field_set:happy.utils.network.ResponseError.error_code)
}

// required string error_string = 2;
bool ResponseError::has_error_string() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ResponseError::set_has_error_string() {
  _has_bits_[0] |= 0x00000001u;
}
void ResponseError::clear_has_error_string() {
  _has_bits_[0] &= ~0x00000001u;
}
void ResponseError::clear_error_string() {
  error_string_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_error_string();
}
const ::std::string& ResponseError::error_string() const {
  // @@protoc_insertion_point(field_get:happy.utils.network.ResponseError.error_string)
  return error_string_.GetNoArena();
}
void ResponseError::set_error_string(const ::std::string& value) {
  set_has_error_string();
  error_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:happy.utils.network.ResponseError.error_string)
}
#if LANG_CXX11
void ResponseError::set_error_string(::std::string&& value) {
  set_has_error_string();
  error_string_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:happy.utils.network.ResponseError.error_string)
}
#endif
void ResponseError::set_error_string(const char* value) {
  set_has_error_string();
  error_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:happy.utils.network.ResponseError.error_string)
}
void ResponseError::set_error_string(const char* value, size_t size) {
  set_has_error_string();
  error_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:happy.utils.network.ResponseError.error_string)
}
::std::string* ResponseError::mutable_error_string() {
  set_has_error_string();
  // @@protoc_insertion_point(field_mutable:happy.utils.network.ResponseError.error_string)
  return error_string_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ResponseError::release_error_string() {
  // @@protoc_insertion_point(field_release:happy.utils.network.ResponseError.error_string)
  clear_has_error_string();
  return error_string_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ResponseError::set_allocated_error_string(::std::string* error_string) {
  if (error_string != NULL) {
    set_has_error_string();
  } else {
    clear_has_error_string();
  }
  error_string_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_string);
  // @@protoc_insertion_point(field_set_allocated:happy.utils.network.ResponseError.error_string)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace network
}  // namespace utils
}  // namespace happy

// @@protoc_insertion_point(global_scope)