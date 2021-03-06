/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev */

#ifndef PB_ENVIRONMENTSENSORS_DATAREQUEST_PB_H_INCLUDED
#define PB_ENVIRONMENTSENSORS_DATAREQUEST_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _environmentSensors_DataRequest {
    bool temperature;
    bool humanity;
    bool atmosphericPressure;
    bool pm2_5;
/* @@protoc_insertion_point(struct:environmentSensors_DataRequest) */
} environmentSensors_DataRequest;


/* Initializer values for message structs */
#define environmentSensors_DataRequest_init_default {0, 0, 0, 0}
#define environmentSensors_DataRequest_init_zero {0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define environmentSensors_DataRequest_temperature_tag 3
#define environmentSensors_DataRequest_humanity_tag 4
#define environmentSensors_DataRequest_atmosphericPressure_tag 5
#define environmentSensors_DataRequest_pm2_5_tag 6

/* Struct field encoding specification for nanopb */
#define environmentSensors_DataRequest_FIELDLIST(X, a) \
X(a, STATIC, REQUIRED, BOOL, temperature, 3) \
X(a, STATIC, REQUIRED, BOOL, humanity, 4) \
X(a, STATIC, REQUIRED, BOOL, atmosphericPressure, 5) \
X(a, STATIC, REQUIRED, BOOL, pm2_5, 6)
#define environmentSensors_DataRequest_CALLBACK NULL
#define environmentSensors_DataRequest_DEFAULT NULL

extern const pb_msgdesc_t environmentSensors_DataRequest_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define environmentSensors_DataRequest_fields &environmentSensors_DataRequest_msg

/* Maximum encoded size of messages (where known) */
#define environmentSensors_DataRequest_size      8

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
