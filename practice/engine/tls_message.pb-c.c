/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: tls_message.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "tls_message.pb-c.h"
void   tls_message__init
                     (TlsMessage         *message)
{
  static TlsMessage init_value = TLS_MESSAGE__INIT;
  *message = init_value;
}
size_t tls_message__get_packed_size
                     (const TlsMessage *message)
{
  assert(message->base.descriptor == &tls_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t tls_message__pack
                     (const TlsMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &tls_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t tls_message__pack_to_buffer
                     (const TlsMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &tls_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TlsMessage *
       tls_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TlsMessage *)
     protobuf_c_message_unpack (&tls_message__descriptor,
                                allocator, len, data);
}
void   tls_message__free_unpacked
                     (TlsMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &tls_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   rsa_dec_req__init
                     (RsaDecReq         *message)
{
  static RsaDecReq init_value = RSA_DEC_REQ__INIT;
  *message = init_value;
}
size_t rsa_dec_req__get_packed_size
                     (const RsaDecReq *message)
{
  assert(message->base.descriptor == &rsa_dec_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t rsa_dec_req__pack
                     (const RsaDecReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &rsa_dec_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t rsa_dec_req__pack_to_buffer
                     (const RsaDecReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &rsa_dec_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RsaDecReq *
       rsa_dec_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RsaDecReq *)
     protobuf_c_message_unpack (&rsa_dec_req__descriptor,
                                allocator, len, data);
}
void   rsa_dec_req__free_unpacked
                     (RsaDecReq *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &rsa_dec_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor tls_message__field_descriptors[4] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(TlsMessage, has_version),
    offsetof(TlsMessage, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(TlsMessage, has_id),
    offsetof(TlsMessage, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "private_key",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(TlsMessage, private_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "encryt_txt",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(TlsMessage, encryt_txt),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned tls_message__field_indices_by_name[] = {
  3,   /* field[3] = encryt_txt */
  1,   /* field[1] = id */
  2,   /* field[2] = private_key */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange tls_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor tls_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "tls_message",
  "TlsMessage",
  "TlsMessage",
  "",
  sizeof(TlsMessage),
  4,
  tls_message__field_descriptors,
  tls_message__field_indices_by_name,
  1,  tls_message__number_ranges,
  (ProtobufCMessageInit) tls_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor rsa_dec_req__field_descriptors[12] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RsaDecReq, has_id),
    offsetof(RsaDecReq, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "version",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RsaDecReq, has_version),
    offsetof(RsaDecReq, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RsaDecReq, has_type),
    offsetof(RsaDecReq, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "out_len",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RsaDecReq, has_out_len),
    offsetof(RsaDecReq, out_len),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "in_len",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RsaDecReq, has_in_len),
    offsetof(RsaDecReq, in_len),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "max_out",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RsaDecReq, has_max_out),
    offsetof(RsaDecReq, max_out),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "padding",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RsaDecReq, has_padding),
    offsetof(RsaDecReq, padding),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "public_key",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(RsaDecReq, has_public_key),
    offsetof(RsaDecReq, public_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "private_key",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(RsaDecReq, has_private_key),
    offsetof(RsaDecReq, private_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "encrypt_txt",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(RsaDecReq, has_encrypt_txt),
    offsetof(RsaDecReq, encrypt_txt),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "decrypt_txt",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(RsaDecReq, has_decrypt_txt),
    offsetof(RsaDecReq, decrypt_txt),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "private_key_len",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RsaDecReq, has_private_key_len),
    offsetof(RsaDecReq, private_key_len),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned rsa_dec_req__field_indices_by_name[] = {
  10,   /* field[10] = decrypt_txt */
  9,   /* field[9] = encrypt_txt */
  0,   /* field[0] = id */
  4,   /* field[4] = in_len */
  5,   /* field[5] = max_out */
  3,   /* field[3] = out_len */
  6,   /* field[6] = padding */
  8,   /* field[8] = private_key */
  11,   /* field[11] = private_key_len */
  7,   /* field[7] = public_key */
  2,   /* field[2] = type */
  1,   /* field[1] = version */
};
static const ProtobufCIntRange rsa_dec_req__number_ranges[3 + 1] =
{
  { 1, 0 },
  { 10, 7 },
  { 15, 11 },
  { 0, 12 }
};
const ProtobufCMessageDescriptor rsa_dec_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "rsa_dec_req",
  "RsaDecReq",
  "RsaDecReq",
  "",
  sizeof(RsaDecReq),
  12,
  rsa_dec_req__field_descriptors,
  rsa_dec_req__field_indices_by_name,
  3,  rsa_dec_req__number_ranges,
  (ProtobufCMessageInit) rsa_dec_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
