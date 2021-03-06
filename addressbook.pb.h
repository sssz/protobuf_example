// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addressbook.proto

#ifndef PROTOBUF_INCLUDED_addressbook_2eproto
#define PROTOBUF_INCLUDED_addressbook_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_addressbook_2eproto 

namespace protobuf_addressbook_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_addressbook_2eproto
namespace tutorial {
class t1;
class t1DefaultTypeInternal;
extern t1DefaultTypeInternal _t1_default_instance_;
class t1_MEntry_DoNotUse;
class t1_MEntry_DoNotUseDefaultTypeInternal;
extern t1_MEntry_DoNotUseDefaultTypeInternal _t1_MEntry_DoNotUse_default_instance_;
}  // namespace tutorial
namespace google {
namespace protobuf {
template<> ::tutorial::t1* Arena::CreateMaybeMessage<::tutorial::t1>(Arena*);
template<> ::tutorial::t1_MEntry_DoNotUse* Arena::CreateMaybeMessage<::tutorial::t1_MEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tutorial {

// ===================================================================

class t1_MEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<t1_MEntry_DoNotUse, 
    ::google::protobuf::int32, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<t1_MEntry_DoNotUse, 
    ::google::protobuf::int32, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  t1_MEntry_DoNotUse();
  t1_MEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const t1_MEntry_DoNotUse& other);
  static const t1_MEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const t1_MEntry_DoNotUse*>(&_t1_MEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class t1 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.t1) */ {
 public:
  t1();
  virtual ~t1();

  t1(const t1& from);

  inline t1& operator=(const t1& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  t1(t1&& from) noexcept
    : t1() {
    *this = ::std::move(from);
  }

  inline t1& operator=(t1&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const t1& default_instance();

  enum One1OneofCase {
    kName = 3,
    kId = 4,
    ONE1_ONEOF_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const t1* internal_default_instance() {
    return reinterpret_cast<const t1*>(
               &_t1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(t1* other);
  friend void swap(t1& a, t1& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline t1* New() const final {
    return CreateMaybeMessage<t1>(NULL);
  }

  t1* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<t1>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const t1& from);
  void MergeFrom(const t1& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(t1* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<int32, string> m = 5;
  int m_size() const;
  void clear_m();
  static const int kMFieldNumber = 5;
  const ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >&
      m() const;
  ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >*
      mutable_m();

  // optional int32 b = 2;
  bool has_b() const;
  void clear_b();
  static const int kBFieldNumber = 2;
  ::google::protobuf::int32 b() const;
  void set_b(::google::protobuf::int32 value);

  // optional int32 a = 1 [default = 10];
  bool has_a() const;
  void clear_a();
  static const int kAFieldNumber = 1;
  ::google::protobuf::int32 a() const;
  void set_a(::google::protobuf::int32 value);

  // optional string name = 3;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int32 id = 4;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 4;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  void clear_one1_oneof();
  One1OneofCase one1_oneof_case() const;
  // @@protoc_insertion_point(class_scope:tutorial.t1)
 private:
  void set_has_a();
  void clear_has_a();
  void set_has_b();
  void clear_has_b();
  void set_has_name();
  void set_has_id();

  inline bool has_one1_oneof() const;
  inline void clear_has_one1_oneof();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::MapField<
      t1_MEntry_DoNotUse,
      ::google::protobuf::int32, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > m_;
  ::google::protobuf::int32 b_;
  ::google::protobuf::int32 a_;
  union One1OneofUnion {
    One1OneofUnion() {}
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::int32 id_;
  } one1_oneof_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_addressbook_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// t1

// optional int32 a = 1 [default = 10];
inline bool t1::has_a() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void t1::set_has_a() {
  _has_bits_[0] |= 0x00000002u;
}
inline void t1::clear_has_a() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void t1::clear_a() {
  a_ = 10;
  clear_has_a();
}
inline ::google::protobuf::int32 t1::a() const {
  // @@protoc_insertion_point(field_get:tutorial.t1.a)
  return a_;
}
inline void t1::set_a(::google::protobuf::int32 value) {
  set_has_a();
  a_ = value;
  // @@protoc_insertion_point(field_set:tutorial.t1.a)
}

// optional int32 b = 2;
inline bool t1::has_b() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void t1::set_has_b() {
  _has_bits_[0] |= 0x00000001u;
}
inline void t1::clear_has_b() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void t1::clear_b() {
  b_ = 0;
  clear_has_b();
}
inline ::google::protobuf::int32 t1::b() const {
  // @@protoc_insertion_point(field_get:tutorial.t1.b)
  return b_;
}
inline void t1::set_b(::google::protobuf::int32 value) {
  set_has_b();
  b_ = value;
  // @@protoc_insertion_point(field_set:tutorial.t1.b)
}

// optional string name = 3;
inline bool t1::has_name() const {
  return one1_oneof_case() == kName;
}
inline void t1::set_has_name() {
  _oneof_case_[0] = kName;
}
inline void t1::clear_name() {
  if (has_name()) {
    one1_oneof_.name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_one1_oneof();
  }
}
inline const ::std::string& t1::name() const {
  // @@protoc_insertion_point(field_get:tutorial.t1.name)
  if (has_name()) {
    return one1_oneof_.name_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void t1::set_name(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tutorial.t1.name)
  if (!has_name()) {
    clear_one1_oneof();
    set_has_name();
    one1_oneof_.name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  one1_oneof_.name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.t1.name)
}
#if LANG_CXX11
inline void t1::set_name(::std::string&& value) {
  // @@protoc_insertion_point(field_set:tutorial.t1.name)
  if (!has_name()) {
    clear_one1_oneof();
    set_has_name();
    one1_oneof_.name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  one1_oneof_.name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.t1.name)
}
#endif
inline void t1::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_name()) {
    clear_one1_oneof();
    set_has_name();
    one1_oneof_.name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  one1_oneof_.name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.t1.name)
}
inline void t1::set_name(const char* value, size_t size) {
  if (!has_name()) {
    clear_one1_oneof();
    set_has_name();
    one1_oneof_.name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  one1_oneof_.name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.t1.name)
}
inline ::std::string* t1::mutable_name() {
  if (!has_name()) {
    clear_one1_oneof();
    set_has_name();
    one1_oneof_.name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:tutorial.t1.name)
  return one1_oneof_.name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* t1::release_name() {
  // @@protoc_insertion_point(field_release:tutorial.t1.name)
  if (has_name()) {
    clear_has_one1_oneof();
    return one1_oneof_.name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void t1::set_allocated_name(::std::string* name) {
  if (!has_name()) {
    one1_oneof_.name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_one1_oneof();
  if (name != NULL) {
    set_has_name();
    one1_oneof_.name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.t1.name)
}

// optional int32 id = 4;
inline bool t1::has_id() const {
  return one1_oneof_case() == kId;
}
inline void t1::set_has_id() {
  _oneof_case_[0] = kId;
}
inline void t1::clear_id() {
  if (has_id()) {
    one1_oneof_.id_ = 0;
    clear_has_one1_oneof();
  }
}
inline ::google::protobuf::int32 t1::id() const {
  // @@protoc_insertion_point(field_get:tutorial.t1.id)
  if (has_id()) {
    return one1_oneof_.id_;
  }
  return 0;
}
inline void t1::set_id(::google::protobuf::int32 value) {
  if (!has_id()) {
    clear_one1_oneof();
    set_has_id();
  }
  one1_oneof_.id_ = value;
  // @@protoc_insertion_point(field_set:tutorial.t1.id)
}

// map<int32, string> m = 5;
inline int t1::m_size() const {
  return m_.size();
}
inline void t1::clear_m() {
  m_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >&
t1::m() const {
  // @@protoc_insertion_point(field_map:tutorial.t1.m)
  return m_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >*
t1::mutable_m() {
  // @@protoc_insertion_point(field_mutable_map:tutorial.t1.m)
  return m_.MutableMap();
}

inline bool t1::has_one1_oneof() const {
  return one1_oneof_case() != ONE1_ONEOF_NOT_SET;
}
inline void t1::clear_has_one1_oneof() {
  _oneof_case_[0] = ONE1_ONEOF_NOT_SET;
}
inline t1::One1OneofCase t1::one1_oneof_case() const {
  return t1::One1OneofCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_addressbook_2eproto
