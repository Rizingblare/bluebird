// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtocolServer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ProtocolServer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ProtocolServer_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ProtocolServer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ProtocolServer_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ProtocolServer_2eproto;
namespace Protocol {
class Data;
struct DataDefaultTypeInternal;
extern DataDefaultTypeInternal _Data_default_instance_;
class Enemy;
struct EnemyDefaultTypeInternal;
extern EnemyDefaultTypeInternal _Enemy_default_instance_;
class Player;
struct PlayerDefaultTypeInternal;
extern PlayerDefaultTypeInternal _Player_default_instance_;
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::Protocol::Data* Arena::CreateMaybeMessage<::Protocol::Data>(Arena*);
template<> ::Protocol::Enemy* Arena::CreateMaybeMessage<::Protocol::Enemy>(Arena*);
template<> ::Protocol::Player* Arena::CreateMaybeMessage<::Protocol::Player>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Protocol {

enum INGAME : int {
  MOVE = 0,
  CHARATERS_CRASH = 1,
  OBSTACLE_CRASH = 2,
  NO_MOVE = 3,
  DROP = 4,
  COMPLTE = 5,
  FAIL = 6,
  PACKET_FAIL = 7,
  OBSTACLE_MOVE = 8,
  CONNECT = 9,
  INGAME_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  INGAME_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool INGAME_IsValid(int value);
constexpr INGAME INGAME_MIN = MOVE;
constexpr INGAME INGAME_MAX = CONNECT;
constexpr int INGAME_ARRAYSIZE = INGAME_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* INGAME_descriptor();
template<typename T>
inline const std::string& INGAME_Name(T enum_t_value) {
  static_assert(::std::is_same<T, INGAME>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function INGAME_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    INGAME_descriptor(), enum_t_value);
}
inline bool INGAME_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, INGAME* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<INGAME>(
    INGAME_descriptor(), name, value);
}
// ===================================================================

class Data final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.Data) */ {
 public:
  inline Data() : Data(nullptr) {}
  ~Data() override;
  explicit constexpr Data(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Data(const Data& from);
  Data(Data&& from) noexcept
    : Data() {
    *this = ::std::move(from);
  }

  inline Data& operator=(const Data& from) {
    CopyFrom(from);
    return *this;
  }
  inline Data& operator=(Data&& from) noexcept {
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
  static const Data& default_instance() {
    return *internal_default_instance();
  }
  static inline const Data* internal_default_instance() {
    return reinterpret_cast<const Data*>(
               &_Data_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Data& a, Data& b) {
    a.Swap(&b);
  }
  inline void Swap(Data* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Data* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Data* New() const final {
    return new Data();
  }

  Data* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Data>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Data& from);
  void MergeFrom(const Data& from);
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
  void InternalSwap(Data* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.Data";
  }
  protected:
  explicit Data(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPlayerFieldNumber = 4,
    kEnemyFieldNumber = 5,
    kIdFieldNumber = 1,
    kMapLevelFieldNumber = 2,
    kMatchRoomFieldNumber = 3,
  };
  // repeated .Protocol.Player player = 4;
  int player_size() const;
  private:
  int _internal_player_size() const;
  public:
  void clear_player();
  ::Protocol::Player* mutable_player(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Player >*
      mutable_player();
  private:
  const ::Protocol::Player& _internal_player(int index) const;
  ::Protocol::Player* _internal_add_player();
  public:
  const ::Protocol::Player& player(int index) const;
  ::Protocol::Player* add_player();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Player >&
      player() const;

  // repeated .Protocol.Enemy enemy = 5;
  int enemy_size() const;
  private:
  int _internal_enemy_size() const;
  public:
  void clear_enemy();
  ::Protocol::Enemy* mutable_enemy(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Enemy >*
      mutable_enemy();
  private:
  const ::Protocol::Enemy& _internal_enemy(int index) const;
  ::Protocol::Enemy* _internal_add_enemy();
  public:
  const ::Protocol::Enemy& enemy(int index) const;
  ::Protocol::Enemy* add_enemy();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Enemy >&
      enemy() const;

  // int32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 mapLevel = 2;
  void clear_maplevel();
  ::PROTOBUF_NAMESPACE_ID::int32 maplevel() const;
  void set_maplevel(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_maplevel() const;
  void _internal_set_maplevel(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 matchRoom = 3;
  void clear_matchroom();
  ::PROTOBUF_NAMESPACE_ID::int32 matchroom() const;
  void set_matchroom(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_matchroom() const;
  void _internal_set_matchroom(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.Data)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Player > player_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Enemy > enemy_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  ::PROTOBUF_NAMESPACE_ID::int32 maplevel_;
  ::PROTOBUF_NAMESPACE_ID::int32 matchroom_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtocolServer_2eproto;
};
// -------------------------------------------------------------------

class Enemy final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.Enemy) */ {
 public:
  inline Enemy() : Enemy(nullptr) {}
  ~Enemy() override;
  explicit constexpr Enemy(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Enemy(const Enemy& from);
  Enemy(Enemy&& from) noexcept
    : Enemy() {
    *this = ::std::move(from);
  }

  inline Enemy& operator=(const Enemy& from) {
    CopyFrom(from);
    return *this;
  }
  inline Enemy& operator=(Enemy&& from) noexcept {
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
  static const Enemy& default_instance() {
    return *internal_default_instance();
  }
  static inline const Enemy* internal_default_instance() {
    return reinterpret_cast<const Enemy*>(
               &_Enemy_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Enemy& a, Enemy& b) {
    a.Swap(&b);
  }
  inline void Swap(Enemy* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Enemy* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Enemy* New() const final {
    return new Enemy();
  }

  Enemy* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Enemy>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Enemy& from);
  void MergeFrom(const Enemy& from);
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
  void InternalSwap(Enemy* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.Enemy";
  }
  protected:
  explicit Enemy(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kXFieldNumber = 2,
    kYFieldNumber = 3,
    kZFieldNumber = 4,
  };
  // int32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // float x = 2;
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // float y = 3;
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // float z = 4;
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.Enemy)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  float x_;
  float y_;
  float z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtocolServer_2eproto;
};
// -------------------------------------------------------------------

class Player final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.Player) */ {
 public:
  inline Player() : Player(nullptr) {}
  ~Player() override;
  explicit constexpr Player(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Player(const Player& from);
  Player(Player&& from) noexcept
    : Player() {
    *this = ::std::move(from);
  }

  inline Player& operator=(const Player& from) {
    CopyFrom(from);
    return *this;
  }
  inline Player& operator=(Player&& from) noexcept {
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
  static const Player& default_instance() {
    return *internal_default_instance();
  }
  static inline const Player* internal_default_instance() {
    return reinterpret_cast<const Player*>(
               &_Player_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Player& a, Player& b) {
    a.Swap(&b);
  }
  inline void Swap(Player* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Player* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Player* New() const final {
    return new Player();
  }

  Player* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Player>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Player& from);
  void MergeFrom(const Player& from);
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
  void InternalSwap(Player* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.Player";
  }
  protected:
  explicit Player(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // float x = 1;
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // float y = 2;
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // float z = 3;
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.Player)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  float x_;
  float y_;
  float z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtocolServer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Data

// int32 id = 1;
inline void Data::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Data::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Data::id() const {
  // @@protoc_insertion_point(field_get:Protocol.Data.id)
  return _internal_id();
}
inline void Data::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Data::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Protocol.Data.id)
}

// int32 mapLevel = 2;
inline void Data::clear_maplevel() {
  maplevel_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Data::_internal_maplevel() const {
  return maplevel_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Data::maplevel() const {
  // @@protoc_insertion_point(field_get:Protocol.Data.mapLevel)
  return _internal_maplevel();
}
inline void Data::_internal_set_maplevel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  maplevel_ = value;
}
inline void Data::set_maplevel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_maplevel(value);
  // @@protoc_insertion_point(field_set:Protocol.Data.mapLevel)
}

// int32 matchRoom = 3;
inline void Data::clear_matchroom() {
  matchroom_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Data::_internal_matchroom() const {
  return matchroom_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Data::matchroom() const {
  // @@protoc_insertion_point(field_get:Protocol.Data.matchRoom)
  return _internal_matchroom();
}
inline void Data::_internal_set_matchroom(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  matchroom_ = value;
}
inline void Data::set_matchroom(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_matchroom(value);
  // @@protoc_insertion_point(field_set:Protocol.Data.matchRoom)
}

// repeated .Protocol.Player player = 4;
inline int Data::_internal_player_size() const {
  return player_.size();
}
inline int Data::player_size() const {
  return _internal_player_size();
}
inline void Data::clear_player() {
  player_.Clear();
}
inline ::Protocol::Player* Data::mutable_player(int index) {
  // @@protoc_insertion_point(field_mutable:Protocol.Data.player)
  return player_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Player >*
Data::mutable_player() {
  // @@protoc_insertion_point(field_mutable_list:Protocol.Data.player)
  return &player_;
}
inline const ::Protocol::Player& Data::_internal_player(int index) const {
  return player_.Get(index);
}
inline const ::Protocol::Player& Data::player(int index) const {
  // @@protoc_insertion_point(field_get:Protocol.Data.player)
  return _internal_player(index);
}
inline ::Protocol::Player* Data::_internal_add_player() {
  return player_.Add();
}
inline ::Protocol::Player* Data::add_player() {
  // @@protoc_insertion_point(field_add:Protocol.Data.player)
  return _internal_add_player();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Player >&
Data::player() const {
  // @@protoc_insertion_point(field_list:Protocol.Data.player)
  return player_;
}

// repeated .Protocol.Enemy enemy = 5;
inline int Data::_internal_enemy_size() const {
  return enemy_.size();
}
inline int Data::enemy_size() const {
  return _internal_enemy_size();
}
inline void Data::clear_enemy() {
  enemy_.Clear();
}
inline ::Protocol::Enemy* Data::mutable_enemy(int index) {
  // @@protoc_insertion_point(field_mutable:Protocol.Data.enemy)
  return enemy_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Enemy >*
Data::mutable_enemy() {
  // @@protoc_insertion_point(field_mutable_list:Protocol.Data.enemy)
  return &enemy_;
}
inline const ::Protocol::Enemy& Data::_internal_enemy(int index) const {
  return enemy_.Get(index);
}
inline const ::Protocol::Enemy& Data::enemy(int index) const {
  // @@protoc_insertion_point(field_get:Protocol.Data.enemy)
  return _internal_enemy(index);
}
inline ::Protocol::Enemy* Data::_internal_add_enemy() {
  return enemy_.Add();
}
inline ::Protocol::Enemy* Data::add_enemy() {
  // @@protoc_insertion_point(field_add:Protocol.Data.enemy)
  return _internal_add_enemy();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Protocol::Enemy >&
Data::enemy() const {
  // @@protoc_insertion_point(field_list:Protocol.Data.enemy)
  return enemy_;
}

// -------------------------------------------------------------------

// Enemy

// int32 id = 1;
inline void Enemy::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Enemy::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Enemy::id() const {
  // @@protoc_insertion_point(field_get:Protocol.Enemy.id)
  return _internal_id();
}
inline void Enemy::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Enemy::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Protocol.Enemy.id)
}

// float x = 2;
inline void Enemy::clear_x() {
  x_ = 0;
}
inline float Enemy::_internal_x() const {
  return x_;
}
inline float Enemy::x() const {
  // @@protoc_insertion_point(field_get:Protocol.Enemy.x)
  return _internal_x();
}
inline void Enemy::_internal_set_x(float value) {
  
  x_ = value;
}
inline void Enemy::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:Protocol.Enemy.x)
}

// float y = 3;
inline void Enemy::clear_y() {
  y_ = 0;
}
inline float Enemy::_internal_y() const {
  return y_;
}
inline float Enemy::y() const {
  // @@protoc_insertion_point(field_get:Protocol.Enemy.y)
  return _internal_y();
}
inline void Enemy::_internal_set_y(float value) {
  
  y_ = value;
}
inline void Enemy::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:Protocol.Enemy.y)
}

// float z = 4;
inline void Enemy::clear_z() {
  z_ = 0;
}
inline float Enemy::_internal_z() const {
  return z_;
}
inline float Enemy::z() const {
  // @@protoc_insertion_point(field_get:Protocol.Enemy.z)
  return _internal_z();
}
inline void Enemy::_internal_set_z(float value) {
  
  z_ = value;
}
inline void Enemy::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:Protocol.Enemy.z)
}

// -------------------------------------------------------------------

// Player

// float x = 1;
inline void Player::clear_x() {
  x_ = 0;
}
inline float Player::_internal_x() const {
  return x_;
}
inline float Player::x() const {
  // @@protoc_insertion_point(field_get:Protocol.Player.x)
  return _internal_x();
}
inline void Player::_internal_set_x(float value) {
  
  x_ = value;
}
inline void Player::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:Protocol.Player.x)
}

// float y = 2;
inline void Player::clear_y() {
  y_ = 0;
}
inline float Player::_internal_y() const {
  return y_;
}
inline float Player::y() const {
  // @@protoc_insertion_point(field_get:Protocol.Player.y)
  return _internal_y();
}
inline void Player::_internal_set_y(float value) {
  
  y_ = value;
}
inline void Player::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:Protocol.Player.y)
}

// float z = 3;
inline void Player::clear_z() {
  z_ = 0;
}
inline float Player::_internal_z() const {
  return z_;
}
inline float Player::z() const {
  // @@protoc_insertion_point(field_get:Protocol.Player.z)
  return _internal_z();
}
inline void Player::_internal_set_z(float value) {
  
  z_ = value;
}
inline void Player::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:Protocol.Player.z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Protocol::INGAME> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Protocol::INGAME>() {
  return ::Protocol::INGAME_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ProtocolServer_2eproto
