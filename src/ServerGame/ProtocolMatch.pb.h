// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtocolMatch.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ProtocolMatch_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ProtocolMatch_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ProtocolMatch_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ProtocolMatch_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ProtocolMatch_2eproto;
namespace Match {
class DATA;
struct DATADefaultTypeInternal;
extern DATADefaultTypeInternal _DATA_default_instance_;
}  // namespace Match
PROTOBUF_NAMESPACE_OPEN
template<> ::Match::DATA* Arena::CreateMaybeMessage<::Match::DATA>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Match {

enum STATE : int {
  C_LOGIN = 0,
  C_CANCLE = 1,
  FAIL = 2,
  S_LOGIN = 3,
  S_MATCH = 4,
  S_CANCLE = 5,
  STATE_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  STATE_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool STATE_IsValid(int value);
constexpr STATE STATE_MIN = C_LOGIN;
constexpr STATE STATE_MAX = S_CANCLE;
constexpr int STATE_ARRAYSIZE = STATE_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* STATE_descriptor();
template<typename T>
inline const std::string& STATE_Name(T enum_t_value) {
  static_assert(::std::is_same<T, STATE>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function STATE_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    STATE_descriptor(), enum_t_value);
}
inline bool STATE_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, STATE* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<STATE>(
    STATE_descriptor(), name, value);
}
// ===================================================================

class DATA final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Match.DATA) */ {
 public:
  inline DATA() : DATA(nullptr) {}
  ~DATA() override;
  explicit constexpr DATA(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DATA(const DATA& from);
  DATA(DATA&& from) noexcept
    : DATA() {
    *this = ::std::move(from);
  }

  inline DATA& operator=(const DATA& from) {
    CopyFrom(from);
    return *this;
  }
  inline DATA& operator=(DATA&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const DATA& default_instance() {
    return *internal_default_instance();
  }
  static inline const DATA* internal_default_instance() {
    return reinterpret_cast<const DATA*>(
               &_DATA_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DATA& a, DATA& b) {
    a.Swap(&b);
  }
  inline void Swap(DATA* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DATA* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DATA* New() const final {
    return new DATA();
  }

  DATA* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DATA>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DATA& from);
  void MergeFrom(const DATA& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DATA* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Match.DATA";
  }
  protected:
  explicit DATA(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kMapLevelFieldNumber = 2,
    kStateFieldNumber = 4,
  };
  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 mapLevel = 2;
  void clear_maplevel();
  ::PROTOBUF_NAMESPACE_ID::uint32 maplevel() const;
  void set_maplevel(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_maplevel() const;
  void _internal_set_maplevel(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bool state = 4;
  void clear_state();
  bool state() const;
  void set_state(bool value);
  private:
  bool _internal_state() const;
  void _internal_set_state(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Match.DATA)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 maplevel_;
  bool state_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtocolMatch_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DATA

// uint32 id = 1;
inline void DATA::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 DATA::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 DATA::id() const {
  // @@protoc_insertion_point(field_get:Match.DATA.id)
  return _internal_id();
}
inline void DATA::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void DATA::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Match.DATA.id)
}

// uint32 mapLevel = 2;
inline void DATA::clear_maplevel() {
  maplevel_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 DATA::_internal_maplevel() const {
  return maplevel_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 DATA::maplevel() const {
  // @@protoc_insertion_point(field_get:Match.DATA.mapLevel)
  return _internal_maplevel();
}
inline void DATA::_internal_set_maplevel(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  maplevel_ = value;
}
inline void DATA::set_maplevel(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_maplevel(value);
  // @@protoc_insertion_point(field_set:Match.DATA.mapLevel)
}

// bool state = 4;
inline void DATA::clear_state() {
  state_ = false;
}
inline bool DATA::_internal_state() const {
  return state_;
}
inline bool DATA::state() const {
  // @@protoc_insertion_point(field_get:Match.DATA.state)
  return _internal_state();
}
inline void DATA::_internal_set_state(bool value) {
  
  state_ = value;
}
inline void DATA::set_state(bool value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:Match.DATA.state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Match

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Match::STATE> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Match::STATE>() {
  return ::Match::STATE_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ProtocolMatch_2eproto