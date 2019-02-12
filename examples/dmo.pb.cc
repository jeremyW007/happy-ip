// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dmo.proto

#include "dmo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace happy {
namespace utils {
namespace network {
class RequestInfoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RequestInfo> _instance;
} _RequestInfo_default_instance_;
class ResponseInfoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ResponseInfo> _instance;
} _ResponseInfo_default_instance_;
}  // namespace network
}  // namespace utils
}  // namespace happy
static void InitDefaultsRequestInfo_dmo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::happy::utils::network::_RequestInfo_default_instance_;
    new (ptr) ::happy::utils::network::RequestInfo();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::happy::utils::network::RequestInfo::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RequestInfo_dmo_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRequestInfo_dmo_2eproto}, {}};

static void InitDefaultsResponseInfo_dmo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::happy::utils::network::_ResponseInfo_default_instance_;
    new (ptr) ::happy::utils::network::ResponseInfo();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::happy::utils::network::ResponseInfo::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ResponseInfo_dmo_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResponseInfo_dmo_2eproto}, {}};

void InitDefaults_dmo_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_RequestInfo_dmo_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ResponseInfo_dmo_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_dmo_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_dmo_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_dmo_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_dmo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::RequestInfo, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::RequestInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::RequestInfo, info_),
  0,
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::ResponseInfo, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::ResponseInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::ResponseInfo, info_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::happy::utils::network::RequestInfo)},
  { 7, 13, sizeof(::happy::utils::network::ResponseInfo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::happy::utils::network::_RequestInfo_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::happy::utils::network::_ResponseInfo_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_dmo_2eproto = {
  {}, AddDescriptors_dmo_2eproto, "dmo.proto", schemas,
  file_default_instances, TableStruct_dmo_2eproto::offsets,
  file_level_metadata_dmo_2eproto, 2, file_level_enum_descriptors_dmo_2eproto, file_level_service_descriptors_dmo_2eproto,
};

const char descriptor_table_protodef_dmo_2eproto[] =
  "\n\tdmo.proto\022\023happy.utils.network\"\033\n\013Requ"
  "estInfo\022\014\n\004info\030\001 \002(\t\"\034\n\014ResponseInfo\022\014\n"
  "\004info\030\001 \002(\t"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_dmo_2eproto = {
  false, InitDefaults_dmo_2eproto, 
  descriptor_table_protodef_dmo_2eproto,
  "dmo.proto", &assign_descriptors_table_dmo_2eproto, 91,
};

void AddDescriptors_dmo_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_dmo_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_dmo_2eproto = []() { AddDescriptors_dmo_2eproto(); return true; }();
namespace happy {
namespace utils {
namespace network {

// ===================================================================

void RequestInfo::InitAsDefaultInstance() {
}
class RequestInfo::HasBitSetters {
 public:
  static void set_has_info(RequestInfo* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RequestInfo::kInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RequestInfo::RequestInfo()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:happy.utils.network.RequestInfo)
}
RequestInfo::RequestInfo(const RequestInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  info_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_info()) {
    info_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.info_);
  }
  // @@protoc_insertion_point(copy_constructor:happy.utils.network.RequestInfo)
}

void RequestInfo::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_RequestInfo_dmo_2eproto.base);
  info_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

RequestInfo::~RequestInfo() {
  // @@protoc_insertion_point(destructor:happy.utils.network.RequestInfo)
  SharedDtor();
}

void RequestInfo::SharedDtor() {
  info_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RequestInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RequestInfo& RequestInfo::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_RequestInfo_dmo_2eproto.base);
  return *internal_default_instance();
}


void RequestInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:happy.utils.network.RequestInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    info_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* RequestInfo::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<RequestInfo*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // required string info = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("happy.utils.network.RequestInfo.info");
        auto str = msg->mutable_info();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          object = str;
          str->clear();
          str->reserve(size);
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8Verify;
          goto len_delim_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8Verify(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(str, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool RequestInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:happy.utils.network.RequestInfo)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string info = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_info()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->info().data(), static_cast<int>(this->info().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "happy.utils.network.RequestInfo.info");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:happy.utils.network.RequestInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:happy.utils.network.RequestInfo)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void RequestInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:happy.utils.network.RequestInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string info = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->info().data(), static_cast<int>(this->info().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "happy.utils.network.RequestInfo.info");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->info(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:happy.utils.network.RequestInfo)
}

::google::protobuf::uint8* RequestInfo::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:happy.utils.network.RequestInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string info = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->info().data(), static_cast<int>(this->info().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "happy.utils.network.RequestInfo.info");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->info(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:happy.utils.network.RequestInfo)
  return target;
}

size_t RequestInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:happy.utils.network.RequestInfo)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required string info = 1;
  if (has_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->info());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RequestInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:happy.utils.network.RequestInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const RequestInfo* source =
      ::google::protobuf::DynamicCastToGenerated<RequestInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:happy.utils.network.RequestInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:happy.utils.network.RequestInfo)
    MergeFrom(*source);
  }
}

void RequestInfo::MergeFrom(const RequestInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:happy.utils.network.RequestInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_info()) {
    _has_bits_[0] |= 0x00000001u;
    info_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.info_);
  }
}

void RequestInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:happy.utils.network.RequestInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestInfo::CopyFrom(const RequestInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:happy.utils.network.RequestInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void RequestInfo::Swap(RequestInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RequestInfo::InternalSwap(RequestInfo* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  info_.Swap(&other->info_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata RequestInfo::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_dmo_2eproto);
  return ::file_level_metadata_dmo_2eproto[kIndexInFileMessages];
}


// ===================================================================

void ResponseInfo::InitAsDefaultInstance() {
}
class ResponseInfo::HasBitSetters {
 public:
  static void set_has_info(ResponseInfo* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResponseInfo::kInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResponseInfo::ResponseInfo()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:happy.utils.network.ResponseInfo)
}
ResponseInfo::ResponseInfo(const ResponseInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  info_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_info()) {
    info_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.info_);
  }
  // @@protoc_insertion_point(copy_constructor:happy.utils.network.ResponseInfo)
}

void ResponseInfo::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ResponseInfo_dmo_2eproto.base);
  info_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ResponseInfo::~ResponseInfo() {
  // @@protoc_insertion_point(destructor:happy.utils.network.ResponseInfo)
  SharedDtor();
}

void ResponseInfo::SharedDtor() {
  info_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResponseInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResponseInfo& ResponseInfo::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ResponseInfo_dmo_2eproto.base);
  return *internal_default_instance();
}


void ResponseInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:happy.utils.network.ResponseInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    info_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ResponseInfo::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ResponseInfo*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // required string info = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("happy.utils.network.ResponseInfo.info");
        auto str = msg->mutable_info();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          object = str;
          str->clear();
          str->reserve(size);
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8Verify;
          goto len_delim_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8Verify(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(str, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ResponseInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:happy.utils.network.ResponseInfo)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string info = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_info()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->info().data(), static_cast<int>(this->info().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "happy.utils.network.ResponseInfo.info");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:happy.utils.network.ResponseInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:happy.utils.network.ResponseInfo)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ResponseInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:happy.utils.network.ResponseInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string info = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->info().data(), static_cast<int>(this->info().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "happy.utils.network.ResponseInfo.info");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->info(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:happy.utils.network.ResponseInfo)
}

::google::protobuf::uint8* ResponseInfo::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:happy.utils.network.ResponseInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string info = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->info().data(), static_cast<int>(this->info().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "happy.utils.network.ResponseInfo.info");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->info(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:happy.utils.network.ResponseInfo)
  return target;
}

size_t ResponseInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:happy.utils.network.ResponseInfo)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required string info = 1;
  if (has_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->info());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResponseInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:happy.utils.network.ResponseInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ResponseInfo* source =
      ::google::protobuf::DynamicCastToGenerated<ResponseInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:happy.utils.network.ResponseInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:happy.utils.network.ResponseInfo)
    MergeFrom(*source);
  }
}

void ResponseInfo::MergeFrom(const ResponseInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:happy.utils.network.ResponseInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_info()) {
    _has_bits_[0] |= 0x00000001u;
    info_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.info_);
  }
}

void ResponseInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:happy.utils.network.ResponseInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResponseInfo::CopyFrom(const ResponseInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:happy.utils.network.ResponseInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void ResponseInfo::Swap(ResponseInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResponseInfo::InternalSwap(ResponseInfo* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  info_.Swap(&other->info_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata ResponseInfo::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_dmo_2eproto);
  return ::file_level_metadata_dmo_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace network
}  // namespace utils
}  // namespace happy
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::happy::utils::network::RequestInfo* Arena::CreateMaybeMessage< ::happy::utils::network::RequestInfo >(Arena* arena) {
  return Arena::CreateInternal< ::happy::utils::network::RequestInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::happy::utils::network::ResponseInfo* Arena::CreateMaybeMessage< ::happy::utils::network::ResponseInfo >(Arena* arena) {
  return Arena::CreateInternal< ::happy::utils::network::ResponseInfo >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
