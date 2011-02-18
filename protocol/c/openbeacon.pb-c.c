/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "openbeacon.pb-c.h"
void   open_beacon__ob_tracking__init
                     (OpenBeacon__ObTracking         *message)
{
  static OpenBeacon__ObTracking init_value = OPEN_BEACON__OB_TRACKING__INIT;
  *message = init_value;
}
size_t open_beacon__ob_tracking__get_packed_size
                     (const OpenBeacon__ObTracking *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_tracking__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t open_beacon__ob_tracking__pack
                     (const OpenBeacon__ObTracking *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_tracking__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t open_beacon__ob_tracking__pack_to_buffer
                     (const OpenBeacon__ObTracking *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_tracking__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
OpenBeacon__ObTracking *
       open_beacon__ob_tracking__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (OpenBeacon__ObTracking *)
     protobuf_c_message_unpack (&open_beacon__ob_tracking__descriptor,
                                allocator, len, data);
}
void   open_beacon__ob_tracking__free_unpacked
                     (OpenBeacon__ObTracking *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_tracking__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   open_beacon__ob_proximity_tag_power__init
                     (OpenBeacon__ObProximityTagPower         *message)
{
  static OpenBeacon__ObProximityTagPower init_value = OPEN_BEACON__OB_PROXIMITY_TAG_POWER__INIT;
  *message = init_value;
}
size_t open_beacon__ob_proximity_tag_power__get_packed_size
                     (const OpenBeacon__ObProximityTagPower *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_tag_power__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t open_beacon__ob_proximity_tag_power__pack
                     (const OpenBeacon__ObProximityTagPower *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_tag_power__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t open_beacon__ob_proximity_tag_power__pack_to_buffer
                     (const OpenBeacon__ObProximityTagPower *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_tag_power__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
OpenBeacon__ObProximityTagPower *
       open_beacon__ob_proximity_tag_power__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (OpenBeacon__ObProximityTagPower *)
     protobuf_c_message_unpack (&open_beacon__ob_proximity_tag_power__descriptor,
                                allocator, len, data);
}
void   open_beacon__ob_proximity_tag_power__free_unpacked
                     (OpenBeacon__ObProximityTagPower *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_tag_power__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   open_beacon__ob_proximity_tag__init
                     (OpenBeacon__ObProximityTag         *message)
{
  static OpenBeacon__ObProximityTag init_value = OPEN_BEACON__OB_PROXIMITY_TAG__INIT;
  *message = init_value;
}
size_t open_beacon__ob_proximity_tag__get_packed_size
                     (const OpenBeacon__ObProximityTag *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_tag__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t open_beacon__ob_proximity_tag__pack
                     (const OpenBeacon__ObProximityTag *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_tag__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t open_beacon__ob_proximity_tag__pack_to_buffer
                     (const OpenBeacon__ObProximityTag *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_tag__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
OpenBeacon__ObProximityTag *
       open_beacon__ob_proximity_tag__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (OpenBeacon__ObProximityTag *)
     protobuf_c_message_unpack (&open_beacon__ob_proximity_tag__descriptor,
                                allocator, len, data);
}
void   open_beacon__ob_proximity_tag__free_unpacked
                     (OpenBeacon__ObProximityTag *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_tag__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   open_beacon__ob_proximity_log__init
                     (OpenBeacon__ObProximityLog         *message)
{
  static OpenBeacon__ObProximityLog init_value = OPEN_BEACON__OB_PROXIMITY_LOG__INIT;
  *message = init_value;
}
size_t open_beacon__ob_proximity_log__get_packed_size
                     (const OpenBeacon__ObProximityLog *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_log__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t open_beacon__ob_proximity_log__pack
                     (const OpenBeacon__ObProximityLog *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_log__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t open_beacon__ob_proximity_log__pack_to_buffer
                     (const OpenBeacon__ObProximityLog *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_log__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
OpenBeacon__ObProximityLog *
       open_beacon__ob_proximity_log__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (OpenBeacon__ObProximityLog *)
     protobuf_c_message_unpack (&open_beacon__ob_proximity_log__descriptor,
                                allocator, len, data);
}
void   open_beacon__ob_proximity_log__free_unpacked
                     (OpenBeacon__ObProximityLog *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_proximity_log__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   open_beacon__ob_tag__init
                     (OpenBeacon__ObTag         *message)
{
  static OpenBeacon__ObTag init_value = OPEN_BEACON__OB_TAG__INIT;
  *message = init_value;
}
size_t open_beacon__ob_tag__get_packed_size
                     (const OpenBeacon__ObTag *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_tag__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t open_beacon__ob_tag__pack
                     (const OpenBeacon__ObTag *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_tag__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t open_beacon__ob_tag__pack_to_buffer
                     (const OpenBeacon__ObTag *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_tag__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
OpenBeacon__ObTag *
       open_beacon__ob_tag__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (OpenBeacon__ObTag *)
     protobuf_c_message_unpack (&open_beacon__ob_tag__descriptor,
                                allocator, len, data);
}
void   open_beacon__ob_tag__free_unpacked
                     (OpenBeacon__ObTag *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &open_beacon__ob_tag__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor open_beacon__ob_tracking__field_descriptors[10] =
{
  {
    "x",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_x),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, x),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_y),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, y),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "z",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_z),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, z),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "unit",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_unit),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, unit),
    &open_beacon__ob_unit__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "reader_id",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, n_reader_id),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, reader_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tx_strength",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_tx_strength),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, tx_strength),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "area_id",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_area_id),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, area_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "room_id",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_room_id),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, room_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "building_id",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_building_id),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, building_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "installation_id",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, has_installation_id),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTracking, installation_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned open_beacon__ob_tracking__field_indices_by_name[] = {
  6,   /* field[6] = area_id */
  8,   /* field[8] = building_id */
  9,   /* field[9] = installation_id */
  4,   /* field[4] = reader_id */
  7,   /* field[7] = room_id */
  5,   /* field[5] = tx_strength */
  3,   /* field[3] = unit */
  0,   /* field[0] = x */
  1,   /* field[1] = y */
  2,   /* field[2] = z */
};
static const ProtobufCIntRange open_beacon__ob_tracking__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor open_beacon__ob_tracking__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "OpenBeacon.ObTracking",
  "ObTracking",
  "OpenBeacon__ObTracking",
  "OpenBeacon",
  sizeof(OpenBeacon__ObTracking),
  10,
  open_beacon__ob_tracking__field_descriptors,
  open_beacon__ob_tracking__field_indices_by_name,
  1,  open_beacon__ob_tracking__number_ranges,
  (ProtobufCMessageInit) open_beacon__ob_tracking__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor open_beacon__ob_proximity_tag_power__field_descriptors[2] =
{
  {
    "power",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityTagPower, has_power),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityTagPower, power),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "count",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityTagPower, has_count),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityTagPower, count),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned open_beacon__ob_proximity_tag_power__field_indices_by_name[] = {
  1,   /* field[1] = count */
  0,   /* field[0] = power */
};
static const ProtobufCIntRange open_beacon__ob_proximity_tag_power__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor open_beacon__ob_proximity_tag_power__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "OpenBeacon.ObProximityTagPower",
  "ObProximityTagPower",
  "OpenBeacon__ObProximityTagPower",
  "OpenBeacon",
  sizeof(OpenBeacon__ObProximityTagPower),
  2,
  open_beacon__ob_proximity_tag_power__field_descriptors,
  open_beacon__ob_proximity_tag_power__field_indices_by_name,
  1,  open_beacon__ob_proximity_tag_power__number_ranges,
  (ProtobufCMessageInit) open_beacon__ob_proximity_tag_power__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor open_beacon__ob_proximity_tag__field_descriptors[2] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityTag, id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "power",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityTag, n_power),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityTag, power),
    &open_beacon__ob_proximity_tag_power__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned open_beacon__ob_proximity_tag__field_indices_by_name[] = {
  0,   /* field[0] = id */
  1,   /* field[1] = power */
};
static const ProtobufCIntRange open_beacon__ob_proximity_tag__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor open_beacon__ob_proximity_tag__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "OpenBeacon.ObProximityTag",
  "ObProximityTag",
  "OpenBeacon__ObProximityTag",
  "OpenBeacon",
  sizeof(OpenBeacon__ObProximityTag),
  2,
  open_beacon__ob_proximity_tag__field_descriptors,
  open_beacon__ob_proximity_tag__field_indices_by_name,
  1,  open_beacon__ob_proximity_tag__number_ranges,
  (ProtobufCMessageInit) open_beacon__ob_proximity_tag__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor open_beacon__ob_proximity_log__field_descriptors[3] =
{
  {
    "time",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityLog, time),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "duration",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityLog, duration),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tag",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityLog, n_tag),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObProximityLog, tag),
    &open_beacon__ob_proximity_tag__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned open_beacon__ob_proximity_log__field_indices_by_name[] = {
  1,   /* field[1] = duration */
  2,   /* field[2] = tag */
  0,   /* field[0] = time */
};
static const ProtobufCIntRange open_beacon__ob_proximity_log__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor open_beacon__ob_proximity_log__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "OpenBeacon.ObProximityLog",
  "ObProximityLog",
  "OpenBeacon__ObProximityLog",
  "OpenBeacon",
  sizeof(OpenBeacon__ObProximityLog),
  3,
  open_beacon__ob_proximity_log__field_descriptors,
  open_beacon__ob_proximity_log__field_indices_by_name,
  1,  open_beacon__ob_proximity_log__number_ranges,
  (ProtobufCMessageInit) open_beacon__ob_proximity_log__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor open_beacon__ob_tag__field_descriptors[9] =
{
  {
    "tag_id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, has_tag_id),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, tag_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tag_time",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, has_tag_time),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, tag_time),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tag_power_cycles",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, has_tag_power_cycles),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, tag_power_cycles),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tag_strength",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, has_tag_strength),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, tag_strength),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "forwarder_id",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, n_forwarder_id),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, forwarder_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "forwarder_storage_time",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, has_forwarder_storage_time),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, forwarder_storage_time),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rx_time",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, has_rx_time),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, rx_time),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tracking",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, tracking),
    &open_beacon__ob_tracking__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "proximity",
    15,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, n_proximity),
    PROTOBUF_C_OFFSETOF(OpenBeacon__ObTag, proximity),
    &open_beacon__ob_proximity_log__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned open_beacon__ob_tag__field_indices_by_name[] = {
  4,   /* field[4] = forwarder_id */
  5,   /* field[5] = forwarder_storage_time */
  8,   /* field[8] = proximity */
  6,   /* field[6] = rx_time */
  0,   /* field[0] = tag_id */
  2,   /* field[2] = tag_power_cycles */
  3,   /* field[3] = tag_strength */
  1,   /* field[1] = tag_time */
  7,   /* field[7] = tracking */
};
static const ProtobufCIntRange open_beacon__ob_tag__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 14, 7 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor open_beacon__ob_tag__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "OpenBeacon.ObTag",
  "ObTag",
  "OpenBeacon__ObTag",
  "OpenBeacon",
  sizeof(OpenBeacon__ObTag),
  9,
  open_beacon__ob_tag__field_descriptors,
  open_beacon__ob_tag__field_indices_by_name,
  2,  open_beacon__ob_tag__number_ranges,
  (ProtobufCMessageInit) open_beacon__ob_tag__init,
  NULL,NULL,NULL    /* reserved[123] */
};
const ProtobufCEnumValue open_beacon__ob_unit__enum_values_by_number[8] =
{
  { "OB_UNIT_NONE", "OPEN_BEACON__OB_UNIT__OB_UNIT_NONE", 0 },
  { "OB_UNIT_PIXEL", "OPEN_BEACON__OB_UNIT__OB_UNIT_PIXEL", 1 },
  { "OB_UNIT_MILLIMETER", "OPEN_BEACON__OB_UNIT__OB_UNIT_MILLIMETER", 2 },
  { "OB_UNIT_CENTIMETER", "OPEN_BEACON__OB_UNIT__OB_UNIT_CENTIMETER", 3 },
  { "OB_UNIT_METER", "OPEN_BEACON__OB_UNIT__OB_UNIT_METER", 4 },
  { "OB_UNIT_INCH", "OPEN_BEACON__OB_UNIT__OB_UNIT_INCH", 5 },
  { "OB_UNIT_FEET", "OPEN_BEACON__OB_UNIT__OB_UNIT_FEET", 6 },
  { "OB_UNIT_YARD", "OPEN_BEACON__OB_UNIT__OB_UNIT_YARD", 7 },
};
static const ProtobufCIntRange open_beacon__ob_unit__value_ranges[] = {
{0, 0},{0, 8}
};
const ProtobufCEnumValueIndex open_beacon__ob_unit__enum_values_by_name[8] =
{
  { "OB_UNIT_CENTIMETER", 3 },
  { "OB_UNIT_FEET", 6 },
  { "OB_UNIT_INCH", 5 },
  { "OB_UNIT_METER", 4 },
  { "OB_UNIT_MILLIMETER", 2 },
  { "OB_UNIT_NONE", 0 },
  { "OB_UNIT_PIXEL", 1 },
  { "OB_UNIT_YARD", 7 },
};
const ProtobufCEnumDescriptor open_beacon__ob_unit__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "OpenBeacon.ObUnit",
  "ObUnit",
  "OpenBeacon__ObUnit",
  "OpenBeacon",
  8,
  open_beacon__ob_unit__enum_values_by_number,
  8,
  open_beacon__ob_unit__enum_values_by_name,
  1,
  open_beacon__ob_unit__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};