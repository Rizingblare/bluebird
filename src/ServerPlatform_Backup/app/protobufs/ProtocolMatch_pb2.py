# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ProtocolMatch.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x13ProtocolMatch.proto\x12\x05Match\"3\n\x06Header\x12\x0c\n\x04size\x18\x01 \x01(\r\x12\x1b\n\x05state\x18\x02 \x01(\x0e\x32\x0c.Match.STATE\"\x15\n\x05\x43heck\x12\x0c\n\x04type\x18\x01 \x01(\x05\"$\n\x07\x43_Login\x12\n\n\x02id\x18\x01 \x01(\x03\x12\r\n\x05level\x18\x02 \x01(\x05\"3\n\x08\x43_Cancel\x12\n\n\x02id\x18\x01 \x01(\x03\x12\r\n\x05level\x18\x02 \x01(\x05\x12\x0c\n\x04room\x18\x03 \x01(\x05\"3\n\x08S_Cancel\x12\n\n\x02id\x18\x01 \x01(\x03\x12\x0c\n\x04room\x18\x02 \x01(\x05\x12\r\n\x05state\x18\x03 \x01(\x08\"$\n\x07S_Login\x12\n\n\x02id\x18\x01 \x01(\x03\x12\r\n\x05level\x18\x02 \x01(\x05\"3\n\x07S_Match\x12\x0c\n\x04room\x18\x01 \x01(\x05\x12\r\n\x05level\x18\x02 \x01(\x05\x12\x0b\n\x03ids\x18\x03 \x03(\x03*i\n\x05STATE\x12\x08\n\x04NULL\x10\x00\x12\x0b\n\x07\x43_LOGIN\x10\x01\x12\x0c\n\x08\x43_CANCEL\x10\x02\x12\x08\n\x04\x46\x41IL\x10\x03\x12\x0b\n\x07S_LOGIN\x10\x04\x12\x0b\n\x07S_MATCH\x10\x05\x12\x0c\n\x08S_CANCEL\x10\x06\x12\t\n\x05\x43HECK\x10\x07\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ProtocolMatch_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _STATE._serialized_start=341
  _STATE._serialized_end=446
  _HEADER._serialized_start=30
  _HEADER._serialized_end=81
  _CHECK._serialized_start=83
  _CHECK._serialized_end=104
  _C_LOGIN._serialized_start=106
  _C_LOGIN._serialized_end=142
  _C_CANCEL._serialized_start=144
  _C_CANCEL._serialized_end=195
  _S_CANCEL._serialized_start=197
  _S_CANCEL._serialized_end=248
  _S_LOGIN._serialized_start=250
  _S_LOGIN._serialized_end=286
  _S_MATCH._serialized_start=288
  _S_MATCH._serialized_end=339
# @@protoc_insertion_point(module_scope)
