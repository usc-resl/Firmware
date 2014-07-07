// MESSAGE ACTUATOR_CONTROLS PACKING

#define MAVLINK_MSG_ID_ACTUATOR_CONTROLS 83

typedef struct __mavlink_actuator_controls_t
{
 uint32_t time_usec; ///< Timestamp (microseconds since system boot)
 float c0; ///< control 0
 float c1; ///< control 1
 float c2; ///< control 2
 float c3; ///< control 3
 float c4; ///< control 4
 float c5; ///< control 5
 float c6; ///< control 6
 float c7; ///< control 7
 uint8_t group; ///< Group (0-3)
} mavlink_actuator_controls_t;

#define MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN 37
#define MAVLINK_MSG_ID_83_LEN 37

#define MAVLINK_MSG_ID_ACTUATOR_CONTROLS_CRC 68
#define MAVLINK_MSG_ID_83_CRC 68



#define MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROLS { \
	"ACTUATOR_CONTROLS", \
	10, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_actuator_controls_t, time_usec) }, \
         { "c0", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_actuator_controls_t, c0) }, \
         { "c1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_actuator_controls_t, c1) }, \
         { "c2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_actuator_controls_t, c2) }, \
         { "c3", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_actuator_controls_t, c3) }, \
         { "c4", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_actuator_controls_t, c4) }, \
         { "c5", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_actuator_controls_t, c5) }, \
         { "c6", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_actuator_controls_t, c6) }, \
         { "c7", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_actuator_controls_t, c7) }, \
         { "group", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_actuator_controls_t, group) }, \
         } \
}


/**
 * @brief Pack a actuator_controls message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (microseconds since system boot)
 * @param group Group (0-3)
 * @param c0 control 0
 * @param c1 control 1
 * @param c2 control 2
 * @param c3 control 3
 * @param c4 control 4
 * @param c5 control 5
 * @param c6 control 6
 * @param c7 control 7
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_controls_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_usec, uint8_t group, float c0, float c1, float c2, float c3, float c4, float c5, float c6, float c7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN];
	_mav_put_uint32_t(buf, 0, time_usec);
	_mav_put_float(buf, 4, c0);
	_mav_put_float(buf, 8, c1);
	_mav_put_float(buf, 12, c2);
	_mav_put_float(buf, 16, c3);
	_mav_put_float(buf, 20, c4);
	_mav_put_float(buf, 24, c5);
	_mav_put_float(buf, 28, c6);
	_mav_put_float(buf, 32, c7);
	_mav_put_uint8_t(buf, 36, group);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#else
	mavlink_actuator_controls_t packet;
	packet.time_usec = time_usec;
	packet.c0 = c0;
	packet.c1 = c1;
	packet.c2 = c2;
	packet.c3 = c3;
	packet.c4 = c4;
	packet.c5 = c5;
	packet.c6 = c6;
	packet.c7 = c7;
	packet.group = group;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ACTUATOR_CONTROLS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif
}

/**
 * @brief Pack a actuator_controls message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (microseconds since system boot)
 * @param group Group (0-3)
 * @param c0 control 0
 * @param c1 control 1
 * @param c2 control 2
 * @param c3 control 3
 * @param c4 control 4
 * @param c5 control 5
 * @param c6 control 6
 * @param c7 control 7
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_controls_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_usec,uint8_t group,float c0,float c1,float c2,float c3,float c4,float c5,float c6,float c7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN];
	_mav_put_uint32_t(buf, 0, time_usec);
	_mav_put_float(buf, 4, c0);
	_mav_put_float(buf, 8, c1);
	_mav_put_float(buf, 12, c2);
	_mav_put_float(buf, 16, c3);
	_mav_put_float(buf, 20, c4);
	_mav_put_float(buf, 24, c5);
	_mav_put_float(buf, 28, c6);
	_mav_put_float(buf, 32, c7);
	_mav_put_uint8_t(buf, 36, group);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#else
	mavlink_actuator_controls_t packet;
	packet.time_usec = time_usec;
	packet.c0 = c0;
	packet.c1 = c1;
	packet.c2 = c2;
	packet.c3 = c3;
	packet.c4 = c4;
	packet.c5 = c5;
	packet.c6 = c6;
	packet.c7 = c7;
	packet.group = group;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ACTUATOR_CONTROLS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif
}

/**
 * @brief Encode a actuator_controls struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_controls C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_controls_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_controls_t* actuator_controls)
{
	return mavlink_msg_actuator_controls_pack(system_id, component_id, msg, actuator_controls->time_usec, actuator_controls->group, actuator_controls->c0, actuator_controls->c1, actuator_controls->c2, actuator_controls->c3, actuator_controls->c4, actuator_controls->c5, actuator_controls->c6, actuator_controls->c7);
}

/**
 * @brief Encode a actuator_controls struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_controls C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_controls_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_controls_t* actuator_controls)
{
	return mavlink_msg_actuator_controls_pack_chan(system_id, component_id, chan, msg, actuator_controls->time_usec, actuator_controls->group, actuator_controls->c0, actuator_controls->c1, actuator_controls->c2, actuator_controls->c3, actuator_controls->c4, actuator_controls->c5, actuator_controls->c6, actuator_controls->c7);
}

/**
 * @brief Send a actuator_controls message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (microseconds since system boot)
 * @param group Group (0-3)
 * @param c0 control 0
 * @param c1 control 1
 * @param c2 control 2
 * @param c3 control 3
 * @param c4 control 4
 * @param c5 control 5
 * @param c6 control 6
 * @param c7 control 7
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_controls_send(mavlink_channel_t chan, uint32_t time_usec, uint8_t group, float c0, float c1, float c2, float c3, float c4, float c5, float c6, float c7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN];
	_mav_put_uint32_t(buf, 0, time_usec);
	_mav_put_float(buf, 4, c0);
	_mav_put_float(buf, 8, c1);
	_mav_put_float(buf, 12, c2);
	_mav_put_float(buf, 16, c3);
	_mav_put_float(buf, 20, c4);
	_mav_put_float(buf, 24, c5);
	_mav_put_float(buf, 28, c6);
	_mav_put_float(buf, 32, c7);
	_mav_put_uint8_t(buf, 36, group);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS, buf, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS, buf, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif
#else
	mavlink_actuator_controls_t packet;
	packet.time_usec = time_usec;
	packet.c0 = c0;
	packet.c1 = c1;
	packet.c2 = c2;
	packet.c3 = c3;
	packet.c4 = c4;
	packet.c5 = c5;
	packet.c6 = c6;
	packet.c7 = c7;
	packet.group = group;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_controls_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_usec, uint8_t group, float c0, float c1, float c2, float c3, float c4, float c5, float c6, float c7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_usec);
	_mav_put_float(buf, 4, c0);
	_mav_put_float(buf, 8, c1);
	_mav_put_float(buf, 12, c2);
	_mav_put_float(buf, 16, c3);
	_mav_put_float(buf, 20, c4);
	_mav_put_float(buf, 24, c5);
	_mav_put_float(buf, 28, c6);
	_mav_put_float(buf, 32, c7);
	_mav_put_uint8_t(buf, 36, group);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS, buf, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS, buf, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif
#else
	mavlink_actuator_controls_t *packet = (mavlink_actuator_controls_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->c0 = c0;
	packet->c1 = c1;
	packet->c2 = c2;
	packet->c3 = c3;
	packet->c4 = c4;
	packet->c5 = c5;
	packet->c6 = c6;
	packet->c7 = c7;
	packet->group = group;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_CONTROLS, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_CONTROLS UNPACKING


/**
 * @brief Get field time_usec from actuator_controls message
 *
 * @return Timestamp (microseconds since system boot)
 */
static inline uint32_t mavlink_msg_actuator_controls_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field group from actuator_controls message
 *
 * @return Group (0-3)
 */
static inline uint8_t mavlink_msg_actuator_controls_get_group(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field c0 from actuator_controls message
 *
 * @return control 0
 */
static inline float mavlink_msg_actuator_controls_get_c0(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field c1 from actuator_controls message
 *
 * @return control 1
 */
static inline float mavlink_msg_actuator_controls_get_c1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field c2 from actuator_controls message
 *
 * @return control 2
 */
static inline float mavlink_msg_actuator_controls_get_c2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field c3 from actuator_controls message
 *
 * @return control 3
 */
static inline float mavlink_msg_actuator_controls_get_c3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field c4 from actuator_controls message
 *
 * @return control 4
 */
static inline float mavlink_msg_actuator_controls_get_c4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field c5 from actuator_controls message
 *
 * @return control 5
 */
static inline float mavlink_msg_actuator_controls_get_c5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field c6 from actuator_controls message
 *
 * @return control 6
 */
static inline float mavlink_msg_actuator_controls_get_c6(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field c7 from actuator_controls message
 *
 * @return control 7
 */
static inline float mavlink_msg_actuator_controls_get_c7(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a actuator_controls message into a struct
 *
 * @param msg The message to decode
 * @param actuator_controls C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_controls_decode(const mavlink_message_t* msg, mavlink_actuator_controls_t* actuator_controls)
{
#if MAVLINK_NEED_BYTE_SWAP
	actuator_controls->time_usec = mavlink_msg_actuator_controls_get_time_usec(msg);
	actuator_controls->c0 = mavlink_msg_actuator_controls_get_c0(msg);
	actuator_controls->c1 = mavlink_msg_actuator_controls_get_c1(msg);
	actuator_controls->c2 = mavlink_msg_actuator_controls_get_c2(msg);
	actuator_controls->c3 = mavlink_msg_actuator_controls_get_c3(msg);
	actuator_controls->c4 = mavlink_msg_actuator_controls_get_c4(msg);
	actuator_controls->c5 = mavlink_msg_actuator_controls_get_c5(msg);
	actuator_controls->c6 = mavlink_msg_actuator_controls_get_c6(msg);
	actuator_controls->c7 = mavlink_msg_actuator_controls_get_c7(msg);
	actuator_controls->group = mavlink_msg_actuator_controls_get_group(msg);
#else
	memcpy(actuator_controls, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ACTUATOR_CONTROLS_LEN);
#endif
}
