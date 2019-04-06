/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev */

#ifndef PB_IOTA_TRANSACTION_PB_H_INCLUDED
#define PB_IOTA_TRANSACTION_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _IotaTransactionMessage {
    pb_callback_t signatureMessageFragment;
    pb_callback_t address;
    uint64_t value;
    pb_callback_t obsoleteTag;
    uint32_t timestamp;
    uint32_t currentIndex;
    uint32_t lastIndex;
/* @@protoc_insertion_point(struct:IotaTransactionMessage) */
} IotaTransactionMessage;


/* Initializer values for message structs */
#define IotaTransactionMessage_init_default      {{{NULL}, NULL}, {{NULL}, NULL}, 0, {{NULL}, NULL}, 0, 0, 0}
#define IotaTransactionMessage_init_zero         {{{NULL}, NULL}, {{NULL}, NULL}, 0, {{NULL}, NULL}, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define IotaTransactionMessage_signatureMessageFragment_tag 1
#define IotaTransactionMessage_address_tag       2
#define IotaTransactionMessage_value_tag         3
#define IotaTransactionMessage_obsoleteTag_tag   4
#define IotaTransactionMessage_timestamp_tag     5
#define IotaTransactionMessage_currentIndex_tag  6
#define IotaTransactionMessage_lastIndex_tag     7

/* Struct field encoding specification for nanopb */
#define IotaTransactionMessage_FIELDLIST(X, a) \
X(a, CALLBACK, REQUIRED, BYTES, signatureMessageFragment, 1) \
X(a, CALLBACK, REQUIRED, BYTES, address, 2) \
X(a, STATIC, REQUIRED, FIXED64, value, 3) \
X(a, CALLBACK, REQUIRED, BYTES, obsoleteTag, 4) \
X(a, STATIC, REQUIRED, FIXED32, timestamp, 5) \
X(a, STATIC, REQUIRED, FIXED32, currentIndex, 6) \
X(a, STATIC, REQUIRED, FIXED32, lastIndex, 7)
#define IotaTransactionMessage_CALLBACK pb_default_field_callback
#define IotaTransactionMessage_DEFAULT NULL

extern const pb_msgdesc_t IotaTransactionMessage_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define IotaTransactionMessage_fields &IotaTransactionMessage_msg

/* Maximum encoded size of messages (where known) */
/* IotaTransactionMessage_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif