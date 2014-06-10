// MESSAGE OFFBOARD_CONTROL PACKING

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL 201

typedef struct __mavlink_offboard_control_t
{
 uint64_t time_usec; ///< Unix timestamp in microseconds
 double p1; ///< roll / x
 double p2; ///< pitch / y
 double p3; ///< yaw
 double p4; ///< thrust / z
 uint8_t mode; ///< ID of the control mode. DIRECT=0; DIRECT_RATES=1; DIRECT_ATTITUDE=2; DIRECT_VELOCITY=3; DIRECT_POSITION=4;
} mavlink_offboard_control_t;

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN 41
#define MAVLINK_MSG_ID_201_LEN 41

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC 180
#define MAVLINK_MSG_ID_201_CRC 180



#define MAVLINK_MESSAGE_INFO_OFFBOARD_CONTROL { \
	"OFFBOARD_CONTROL", \
	6, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_offboard_control_t, time_usec) }, \
         { "p1", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_offboard_control_t, p1) }, \
         { "p2", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_offboard_control_t, p2) }, \
         { "p3", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_offboard_control_t, p3) }, \
         { "p4", NULL, MAVLINK_TYPE_DOUBLE, 0, 32, offsetof(mavlink_offboard_control_t, p4) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_offboard_control_t, mode) }, \
         } \
}


/**
 * @brief Pack a offboard_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Unix timestamp in microseconds
 * @param mode ID of the control mode. DIRECT=0; DIRECT_RATES=1; DIRECT_ATTITUDE=2; DIRECT_VELOCITY=3; DIRECT_POSITION=4;
 * @param p1 roll / x
 * @param p2 pitch / y
 * @param p3 yaw
 * @param p4 thrust / z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, uint8_t mode, double p1, double p2, double p3, double p4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_double(buf, 8, p1);
	_mav_put_double(buf, 16, p2);
	_mav_put_double(buf, 24, p3);
	_mav_put_double(buf, 32, p4);
	_mav_put_uint8_t(buf, 40, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#else
	mavlink_offboard_control_t packet;
	packet.time_usec = time_usec;
	packet.p1 = p1;
	packet.p2 = p2;
	packet.p3 = p3;
	packet.p4 = p4;
	packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_OFFBOARD_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a offboard_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Unix timestamp in microseconds
 * @param mode ID of the control mode. DIRECT=0; DIRECT_RATES=1; DIRECT_ATTITUDE=2; DIRECT_VELOCITY=3; DIRECT_POSITION=4;
 * @param p1 roll / x
 * @param p2 pitch / y
 * @param p3 yaw
 * @param p4 thrust / z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,uint8_t mode,double p1,double p2,double p3,double p4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_double(buf, 8, p1);
	_mav_put_double(buf, 16, p2);
	_mav_put_double(buf, 24, p3);
	_mav_put_double(buf, 32, p4);
	_mav_put_uint8_t(buf, 40, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#else
	mavlink_offboard_control_t packet;
	packet.time_usec = time_usec;
	packet.p1 = p1;
	packet.p2 = p2;
	packet.p3 = p3;
	packet.p4 = p4;
	packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_OFFBOARD_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
}

/**
 * @brief Encode a offboard_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param offboard_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_offboard_control_t* offboard_control)
{
	return mavlink_msg_offboard_control_pack(system_id, component_id, msg, offboard_control->time_usec, offboard_control->mode, offboard_control->p1, offboard_control->p2, offboard_control->p3, offboard_control->p4);
}

/**
 * @brief Encode a offboard_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param offboard_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_offboard_control_t* offboard_control)
{
	return mavlink_msg_offboard_control_pack_chan(system_id, component_id, chan, msg, offboard_control->time_usec, offboard_control->mode, offboard_control->p1, offboard_control->p2, offboard_control->p3, offboard_control->p4);
}

/**
 * @brief Send a offboard_control message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Unix timestamp in microseconds
 * @param mode ID of the control mode. DIRECT=0; DIRECT_RATES=1; DIRECT_ATTITUDE=2; DIRECT_VELOCITY=3; DIRECT_POSITION=4;
 * @param p1 roll / x
 * @param p2 pitch / y
 * @param p3 yaw
 * @param p4 thrust / z
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_offboard_control_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t mode, double p1, double p2, double p3, double p4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_double(buf, 8, p1);
	_mav_put_double(buf, 16, p2);
	_mav_put_double(buf, 24, p3);
	_mav_put_double(buf, 32, p4);
	_mav_put_uint8_t(buf, 40, mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
#else
	mavlink_offboard_control_t packet;
	packet.time_usec = time_usec;
	packet.p1 = p1;
	packet.p2 = p2;
	packet.p3 = p3;
	packet.p4 = p4;
	packet.mode = mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_offboard_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t mode, double p1, double p2, double p3, double p4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_double(buf, 8, p1);
	_mav_put_double(buf, 16, p2);
	_mav_put_double(buf, 24, p3);
	_mav_put_double(buf, 32, p4);
	_mav_put_uint8_t(buf, 40, mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
#else
	mavlink_offboard_control_t *packet = (mavlink_offboard_control_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->p1 = p1;
	packet->p2 = p2;
	packet->p3 = p3;
	packet->p4 = p4;
	packet->mode = mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, (const char *)packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, (const char *)packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE OFFBOARD_CONTROL UNPACKING


/**
 * @brief Get field time_usec from offboard_control message
 *
 * @return Unix timestamp in microseconds
 */
static inline uint64_t mavlink_msg_offboard_control_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field mode from offboard_control message
 *
 * @return ID of the control mode. DIRECT=0; DIRECT_RATES=1; DIRECT_ATTITUDE=2; DIRECT_VELOCITY=3; DIRECT_POSITION=4;
 */
static inline uint8_t mavlink_msg_offboard_control_get_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field p1 from offboard_control message
 *
 * @return roll / x
 */
static inline double mavlink_msg_offboard_control_get_p1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field p2 from offboard_control message
 *
 * @return pitch / y
 */
static inline double mavlink_msg_offboard_control_get_p2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field p3 from offboard_control message
 *
 * @return yaw
 */
static inline double mavlink_msg_offboard_control_get_p3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_double(msg,  24);
}

/**
 * @brief Get field p4 from offboard_control message
 *
 * @return thrust / z
 */
static inline double mavlink_msg_offboard_control_get_p4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_double(msg,  32);
}

/**
 * @brief Decode a offboard_control message into a struct
 *
 * @param msg The message to decode
 * @param offboard_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_offboard_control_decode(const mavlink_message_t* msg, mavlink_offboard_control_t* offboard_control)
{
#if MAVLINK_NEED_BYTE_SWAP
	offboard_control->time_usec = mavlink_msg_offboard_control_get_time_usec(msg);
	offboard_control->p1 = mavlink_msg_offboard_control_get_p1(msg);
	offboard_control->p2 = mavlink_msg_offboard_control_get_p2(msg);
	offboard_control->p3 = mavlink_msg_offboard_control_get_p3(msg);
	offboard_control->p4 = mavlink_msg_offboard_control_get_p4(msg);
	offboard_control->mode = mavlink_msg_offboard_control_get_mode(msg);
#else
	memcpy(offboard_control, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
}
