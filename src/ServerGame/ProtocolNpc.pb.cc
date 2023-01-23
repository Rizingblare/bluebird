// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtocolNpc.proto

#include "ProtocolNpc.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace Npc {
constexpr LoginData::LoginData(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : maplevel_(0)
  , matchroom_(0){}
struct LoginDataDefaultTypeInternal {
  constexpr LoginDataDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LoginDataDefaultTypeInternal() {}
  union {
    LoginData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LoginDataDefaultTypeInternal _LoginData_default_instance_;
constexpr GameData::GameData(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : obstacle_()
  , matchroom_(0)
  , obstaclesize_(0){}
struct GameDataDefaultTypeInternal {
  constexpr GameDataDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GameDataDefaultTypeInternal() {}
  union {
    GameData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GameDataDefaultTypeInternal _GameData_default_instance_;
constexpr Obstacle::Obstacle(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : id_(0)
  , x_(0)
  , y_(0)
  , z_(0){}
struct ObstacleDefaultTypeInternal {
  constexpr ObstacleDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ObstacleDefaultTypeInternal() {}
  union {
    Obstacle _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ObstacleDefaultTypeInternal _Obstacle_default_instance_;
}  // namespace Npc
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ProtocolNpc_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ProtocolNpc_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ProtocolNpc_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ProtocolNpc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Npc::LoginData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Npc::LoginData, maplevel_),
  PROTOBUF_FIELD_OFFSET(::Npc::LoginData, matchroom_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Npc::GameData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Npc::GameData, matchroom_),
  PROTOBUF_FIELD_OFFSET(::Npc::GameData, obstaclesize_),
  PROTOBUF_FIELD_OFFSET(::Npc::GameData, obstacle_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Npc::Obstacle, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Npc::Obstacle, id_),
  PROTOBUF_FIELD_OFFSET(::Npc::Obstacle, x_),
  PROTOBUF_FIELD_OFFSET(::Npc::Obstacle, y_),
  PROTOBUF_FIELD_OFFSET(::Npc::Obstacle, z_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Npc::LoginData)},
  { 7, -1, sizeof(::Npc::GameData)},
  { 15, -1, sizeof(::Npc::Obstacle)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Npc::_LoginData_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Npc::_GameData_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Npc::_Obstacle_default_instance_),
};

const char descriptor_table_protodef_ProtocolNpc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021ProtocolNpc.proto\022\003Npc\"0\n\tLoginData\022\020\n"
  "\010mapLevel\030\001 \001(\005\022\021\n\tmatchRoom\030\002 \001(\005\"T\n\010Ga"
  "meData\022\021\n\tmatchRoom\030\001 \001(\005\022\024\n\014obstacleSiz"
  "e\030\002 \001(\005\022\037\n\010obstacle\030\003 \003(\0132\r.Npc.Obstacle"
  "\"7\n\010Obstacle\022\n\n\002id\030\001 \001(\005\022\t\n\001x\030\002 \001(\002\022\t\n\001y"
  "\030\003 \001(\002\022\t\n\001z\030\004 \001(\002*\035\n\006INGAME\022\t\n\005LOGIN\020\000\022\010"
  "\n\004GAME\020\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ProtocolNpc_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ProtocolNpc_2eproto = {
  false, false, 256, descriptor_table_protodef_ProtocolNpc_2eproto, "ProtocolNpc.proto", 
  &descriptor_table_ProtocolNpc_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_ProtocolNpc_2eproto::offsets,
  file_level_metadata_ProtocolNpc_2eproto, file_level_enum_descriptors_ProtocolNpc_2eproto, file_level_service_descriptors_ProtocolNpc_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_ProtocolNpc_2eproto_getter() {
  return &descriptor_table_ProtocolNpc_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_ProtocolNpc_2eproto(&descriptor_table_ProtocolNpc_2eproto);
namespace Npc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* INGAME_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ProtocolNpc_2eproto);
  return file_level_enum_descriptors_ProtocolNpc_2eproto[0];
}
bool INGAME_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class LoginData::_Internal {
 public:
};

LoginData::LoginData(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Npc.LoginData)
}
LoginData::LoginData(const LoginData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&maplevel_, &from.maplevel_,
    static_cast<size_t>(reinterpret_cast<char*>(&matchroom_) -
    reinterpret_cast<char*>(&maplevel_)) + sizeof(matchroom_));
  // @@protoc_insertion_point(copy_constructor:Npc.LoginData)
}

void LoginData::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&maplevel_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&matchroom_) -
    reinterpret_cast<char*>(&maplevel_)) + sizeof(matchroom_));
}

LoginData::~LoginData() {
  // @@protoc_insertion_point(destructor:Npc.LoginData)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LoginData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void LoginData::ArenaDtor(void* object) {
  LoginData* _this = reinterpret_cast< LoginData* >(object);
  (void)_this;
}
void LoginData::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LoginData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LoginData::Clear() {
// @@protoc_insertion_point(message_clear_start:Npc.LoginData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&maplevel_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&matchroom_) -
      reinterpret_cast<char*>(&maplevel_)) + sizeof(matchroom_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 mapLevel = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          maplevel_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 matchRoom = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          matchroom_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LoginData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Npc.LoginData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 mapLevel = 1;
  if (this->maplevel() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_maplevel(), target);
  }

  // int32 matchRoom = 2;
  if (this->matchroom() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_matchroom(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Npc.LoginData)
  return target;
}

size_t LoginData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Npc.LoginData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 mapLevel = 1;
  if (this->maplevel() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_maplevel());
  }

  // int32 matchRoom = 2;
  if (this->matchroom() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_matchroom());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Npc.LoginData)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LoginData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Npc.LoginData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Npc.LoginData)
    MergeFrom(*source);
  }
}

void LoginData::MergeFrom(const LoginData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Npc.LoginData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.maplevel() != 0) {
    _internal_set_maplevel(from._internal_maplevel());
  }
  if (from.matchroom() != 0) {
    _internal_set_matchroom(from._internal_matchroom());
  }
}

void LoginData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Npc.LoginData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginData::CopyFrom(const LoginData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Npc.LoginData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginData::IsInitialized() const {
  return true;
}

void LoginData::InternalSwap(LoginData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LoginData, matchroom_)
      + sizeof(LoginData::matchroom_)
      - PROTOBUF_FIELD_OFFSET(LoginData, maplevel_)>(
          reinterpret_cast<char*>(&maplevel_),
          reinterpret_cast<char*>(&other->maplevel_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginData::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ProtocolNpc_2eproto_getter, &descriptor_table_ProtocolNpc_2eproto_once,
      file_level_metadata_ProtocolNpc_2eproto[0]);
}

// ===================================================================

class GameData::_Internal {
 public:
};

GameData::GameData(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  obstacle_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Npc.GameData)
}
GameData::GameData(const GameData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      obstacle_(from.obstacle_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&matchroom_, &from.matchroom_,
    static_cast<size_t>(reinterpret_cast<char*>(&obstaclesize_) -
    reinterpret_cast<char*>(&matchroom_)) + sizeof(obstaclesize_));
  // @@protoc_insertion_point(copy_constructor:Npc.GameData)
}

void GameData::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&matchroom_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&obstaclesize_) -
    reinterpret_cast<char*>(&matchroom_)) + sizeof(obstaclesize_));
}

GameData::~GameData() {
  // @@protoc_insertion_point(destructor:Npc.GameData)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GameData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void GameData::ArenaDtor(void* object) {
  GameData* _this = reinterpret_cast< GameData* >(object);
  (void)_this;
}
void GameData::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GameData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GameData::Clear() {
// @@protoc_insertion_point(message_clear_start:Npc.GameData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  obstacle_.Clear();
  ::memset(&matchroom_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&obstaclesize_) -
      reinterpret_cast<char*>(&matchroom_)) + sizeof(obstaclesize_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GameData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 matchRoom = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          matchroom_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 obstacleSize = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          obstaclesize_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Npc.Obstacle obstacle = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_obstacle(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GameData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Npc.GameData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 matchRoom = 1;
  if (this->matchroom() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_matchroom(), target);
  }

  // int32 obstacleSize = 2;
  if (this->obstaclesize() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_obstaclesize(), target);
  }

  // repeated .Npc.Obstacle obstacle = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_obstacle_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_obstacle(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Npc.GameData)
  return target;
}

size_t GameData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Npc.GameData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Npc.Obstacle obstacle = 3;
  total_size += 1UL * this->_internal_obstacle_size();
  for (const auto& msg : this->obstacle_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // int32 matchRoom = 1;
  if (this->matchroom() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_matchroom());
  }

  // int32 obstacleSize = 2;
  if (this->obstaclesize() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_obstaclesize());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GameData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Npc.GameData)
  GOOGLE_DCHECK_NE(&from, this);
  const GameData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GameData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Npc.GameData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Npc.GameData)
    MergeFrom(*source);
  }
}

void GameData::MergeFrom(const GameData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Npc.GameData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  obstacle_.MergeFrom(from.obstacle_);
  if (from.matchroom() != 0) {
    _internal_set_matchroom(from._internal_matchroom());
  }
  if (from.obstaclesize() != 0) {
    _internal_set_obstaclesize(from._internal_obstaclesize());
  }
}

void GameData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Npc.GameData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameData::CopyFrom(const GameData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Npc.GameData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameData::IsInitialized() const {
  return true;
}

void GameData::InternalSwap(GameData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  obstacle_.InternalSwap(&other->obstacle_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GameData, obstaclesize_)
      + sizeof(GameData::obstaclesize_)
      - PROTOBUF_FIELD_OFFSET(GameData, matchroom_)>(
          reinterpret_cast<char*>(&matchroom_),
          reinterpret_cast<char*>(&other->matchroom_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GameData::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ProtocolNpc_2eproto_getter, &descriptor_table_ProtocolNpc_2eproto_once,
      file_level_metadata_ProtocolNpc_2eproto[1]);
}

// ===================================================================

class Obstacle::_Internal {
 public:
};

Obstacle::Obstacle(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Npc.Obstacle)
}
Obstacle::Obstacle(const Obstacle& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&id_)) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:Npc.Obstacle)
}

void Obstacle::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&id_)) + sizeof(z_));
}

Obstacle::~Obstacle() {
  // @@protoc_insertion_point(destructor:Npc.Obstacle)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Obstacle::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Obstacle::ArenaDtor(void* object) {
  Obstacle* _this = reinterpret_cast< Obstacle* >(object);
  (void)_this;
}
void Obstacle::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Obstacle::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Obstacle::Clear() {
// @@protoc_insertion_point(message_clear_start:Npc.Obstacle)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&id_)) + sizeof(z_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Obstacle::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float x = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float y = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float z = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Obstacle::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Npc.Obstacle)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // float x = 2;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_x(), target);
  }

  // float y = 3;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_y(), target);
  }

  // float z = 4;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Npc.Obstacle)
  return target;
}

size_t Obstacle::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Npc.Obstacle)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_id());
  }

  // float x = 2;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 4;
  }

  // float y = 3;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 4;
  }

  // float z = 4;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Obstacle::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Npc.Obstacle)
  GOOGLE_DCHECK_NE(&from, this);
  const Obstacle* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Obstacle>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Npc.Obstacle)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Npc.Obstacle)
    MergeFrom(*source);
  }
}

void Obstacle::MergeFrom(const Obstacle& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Npc.Obstacle)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (!(from.x() <= 0 && from.x() >= 0)) {
    _internal_set_x(from._internal_x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    _internal_set_y(from._internal_y());
  }
  if (!(from.z() <= 0 && from.z() >= 0)) {
    _internal_set_z(from._internal_z());
  }
}

void Obstacle::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Npc.Obstacle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Obstacle::CopyFrom(const Obstacle& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Npc.Obstacle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Obstacle::IsInitialized() const {
  return true;
}

void Obstacle::InternalSwap(Obstacle* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Obstacle, z_)
      + sizeof(Obstacle::z_)
      - PROTOBUF_FIELD_OFFSET(Obstacle, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Obstacle::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ProtocolNpc_2eproto_getter, &descriptor_table_ProtocolNpc_2eproto_once,
      file_level_metadata_ProtocolNpc_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Npc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Npc::LoginData* Arena::CreateMaybeMessage< ::Npc::LoginData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Npc::LoginData >(arena);
}
template<> PROTOBUF_NOINLINE ::Npc::GameData* Arena::CreateMaybeMessage< ::Npc::GameData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Npc::GameData >(arena);
}
template<> PROTOBUF_NOINLINE ::Npc::Obstacle* Arena::CreateMaybeMessage< ::Npc::Obstacle >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Npc::Obstacle >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
