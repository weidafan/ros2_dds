// ****************************************************************************
//         (c) Copyright, Real-Time Innovations, All rights reserved.
//
//         Permission to modify and use for internal purposes granted.
// This software is provided "as is", without warranty, express or implied.
//
// ****************************************************************************

package com.rti.routingservice.adapter.jms;

import javax.jms.JMSException;
import javax.jms.MapMessage;
import javax.jms.Message;
import com.rti.dds.dynamicdata.DynamicData;
import com.rti.dds.dynamicdata.DynamicDataMemberInfo;
import com.rti.dds.infrastructure.BadKind;
import com.rti.dds.infrastructure.Bounds;
import com.rti.dds.infrastructure.ByteSeq;
import com.rti.dds.subscription.InstanceStateKind;
import com.rti.dds.subscription.SampleInfo;
import com.rti.dds.typecode.TCKind;

/**
 * The JMSAdapterDynamicDataToJMSTranslation implements the
 * DynamicDataToJMSMessageTranslation interface to translate DynamicData
 * samples to JMS Message messages.
 */
public class JMSAdapterDynamicDataToJMSTranslation implements
                                          DynamicDataToJMSMessageTranslation {
    /** Null JMS Message Factory parameter message */
    private static final String ERROR_INVALID_JMS_MESSAGE_FACTORY =
                            "JMS Message Factory provided is invalid (null).";
    /** Null DynamicData parameter message */
    private static final String ERROR_DYNAMICDATA_EMPTY =
                           "DynamicData instance provided is invalid (null).";
    /** Null SampleInfo parameter message */
    private static final String ERROR_SAMPLEINFO_EMPTY =
                            "SampleInfo instance provided is invalid (null).";
    /** Invalid DynamicData Sample parameter message */
    private static final String ERROR_DYNAMICDATA_SAMPLE_NOT_VALID =
                             "DynamicData Sample provided does not contain " +
                             "valid data or is no longer alive.";
    /** Default boolean value */
    private static final boolean DEFAULT_BOOLEAN_VALUE = false;
    /** Default octet value */
    private static final byte DEFAULT_OCTET_VALUE = 0;
    /** Default octet sequence value */
    private static final byte[] DEFAULT_OCTET_SEQUENCE_VALUE = new byte[0];
    /** Default char value */
    private static final char DEFAULT_CHAR_VALUE = '\0';
    /** Default double value */
    private static final double DEFAULT_DOUBLE_VALUE = 0;
    /** Default float value */
    private static final float DEFAULT_FLOAT_VALUE = 0;
    /** Default long value */
    private static final int DEFAULT_LONG_VALUE = 0;
    /** Default long long value */
    private static final long DEFAULT_LONGLONG_VALUE = 0;
    /** Default short value */
    private static final short DEFAULT_SHORT_VALUE = 0;
    /** Default string value */
    private static final String DEFAULT_STRING_VALUE = "";
    /** Instance used to get each member's information */
    private final DynamicDataMemberInfo _memberInfo =
                                                  new DynamicDataMemberInfo();
    /** Object used to translate octet sequences */
    private final ByteSeq _octetSequence = new ByteSeq();


    /**
     * This method translates a DynamicData sample with fundamental data type
     * members only into a JMS MapMessage with fundamental data type members
     * only, setting the key string of every value in the MapMessage structure
     * to the name of the member of such value in the DynamicData sample
     * structure.
     * This implementation does not handle composite samples, such as unions,
     * sequences, etc.; and it does not handle routing nor discovery samples,
     * only data samples. This implementation can be modified to support
     * these and other kind of samples.
     *
     * @param jmsMessageFactory A JMS Message Factory instance provided by the
     *                          JMS Adapter to create new JMS Message
     *                          instances inside a valid JMS Session (Message,
     *                          BytesMessage, MapMessage, ObjectMessage,
     *                          StreamMessage, and TextMessage).
     * @param dynamicDataSample The DynamicData instance that contains the
     *                          sample data that must be translated to JMS
     *                          message data.
     * @param dynamicDataInfo   The SampleInfo instance that contains the
     *                          sample info that must be translated to JMS
     *                          message info.
     *
     * @throws IllegalArgumentException If a parameter is not valid.
     * @throws BadKind                  If a TypeCode exception ocurred.
     * @throws Bounds                   If a TypeCode out-of-bounds occurred.
     * @throws RETCODE_ERROR            If a DynamicData exception occurred.
     * @throws JMSException             If a JMS exception occurred.
     *
     * @returns A new JMS Message instance with the translated DynamicData
     *          Sample (data and info).
     */
    public Message translateDynamicDataToJMSMessage(
                                   JMSAdapterMessageFactory jmsMessageFactory,
                    DynamicData dynamicDataSample, SampleInfo dynamicDataInfo)
                                                       throws Bounds, BadKind,
                                                                JMSException {
        // Is there a JMS message factory to create the translated message?
        if (jmsMessageFactory == null) {
            // Notify failure
            throw new
                  IllegalArgumentException(ERROR_INVALID_JMS_MESSAGE_FACTORY);
        }

        // Is there a DynamicData instance to translate?
        if (dynamicDataSample == null) {
            // Notify failure
            throw new IllegalArgumentException(ERROR_DYNAMICDATA_EMPTY);
        }

        // Is there a SampleInfo instance to translate?
        if (dynamicDataInfo == null) {
            // Notify failure
            throw new IllegalArgumentException(ERROR_SAMPLEINFO_EMPTY);
        }

        // Accept valid and alive data only
        if (dynamicDataInfo.valid_data != true ||
            dynamicDataInfo.instance_state !=
                                     InstanceStateKind.ALIVE_INSTANCE_STATE) {
            // Notify failure
            throw new
                 IllegalArgumentException(ERROR_DYNAMICDATA_SAMPLE_NOT_VALID);
        }

        // Create an empty MapMessages
        MapMessage jmsMapMessage = jmsMessageFactory.createMapMessage();

        // Copy all members to the MapMessage
        copyDynamicDataToJMSMapMessage(jmsMapMessage, dynamicDataSample);
        // Translate time stamp
        jmsMapMessage.setJMSTimestamp(
                               (dynamicDataInfo.source_timestamp.sec * 1000) +
                        (dynamicDataInfo.source_timestamp.nanosec / 1000000));

        // Return translated MapMessage
        return jmsMapMessage;
    }

    /**
     * This method copies a DynamicData fundamental data type structure into a
     * JMS MapMessage object.
     *
     * @param jmsMapMessage     The MapMessage object where the data type will
     *                          be added.
     * @param dynamicDataSample The DynamicData structure encapsulating the
     *                          fundamental data type members.
     *
     * @throws BadKind          If a TypeCode exception occurred.
     * @throws Bounds           If a TypeCode out-of-bounds occurred.
     * @throws RETCODE_ERROR    If a DynamicData operation failed.
     * @throws JMSException     If a JMS operation failed.
     */
    private void copyDynamicDataToJMSMapMessage(MapMessage jmsMapMessage,
                                                DynamicData dynamicDataSample)
                                                       throws Bounds, BadKind,
                                                                JMSException {

        // Copy all members in this sample's TypeCode
        int numberOfMembers = dynamicDataSample.get_member_count();

        for (int memberIndex = 1;
             memberIndex <= numberOfMembers;
             memberIndex++) {
            // Get member information
            dynamicDataSample.get_member_info(_memberInfo, null, memberIndex);

            // Translate according to member kind
            if (_memberInfo.member_kind == TCKind.TK_BOOLEAN) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Boolean type; assign directly
                    jmsMapMessage.setBoolean(_memberInfo.member_name,
                                             dynamicDataSample.get_boolean(
                                                      _memberInfo.member_name,
                                                      _memberInfo.member_id));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setBoolean(_memberInfo.member_name,
                                             DEFAULT_BOOLEAN_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_OCTET) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Byte type; assign directly
                    jmsMapMessage.setByte(_memberInfo.member_name,
                                          dynamicDataSample.get_byte(
                                                      _memberInfo.member_name,
                                                      _memberInfo.member_id));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setByte(_memberInfo.member_name,
                                          DEFAULT_OCTET_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_SEQUENCE) {
                // Sequence; only Octet Sequence
                if (_memberInfo.element_kind != TCKind.TK_OCTET) {
                    continue;
                }

                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Get byte array from octet sequence
                    dynamicDataSample.get_byte_seq(_octetSequence,
                                                   _memberInfo.member_name,
                                                   _memberInfo.member_id);
                    byte[] byteArray = null;
                    byteArray = _octetSequence.toArrayByte(byteArray);
                    // Assign byte array
                    jmsMapMessage.setBytes(_memberInfo.member_name,
                                                                   byteArray);
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setBytes(_memberInfo.member_name,
                                           DEFAULT_OCTET_SEQUENCE_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_CHAR) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Char type; assign directly
                    jmsMapMessage.setChar(_memberInfo.member_name,
                                          dynamicDataSample.get_char(
                                                      _memberInfo.member_name,
                                                      _memberInfo.member_id));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setChar(_memberInfo.member_name,
                                          DEFAULT_CHAR_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_DOUBLE) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Double type; assign directly
                    jmsMapMessage.setDouble(_memberInfo.member_name,
                                            dynamicDataSample.get_double(
                                                      _memberInfo.member_name,
                                                      _memberInfo.member_id));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setDouble(_memberInfo.member_name,
                                            DEFAULT_DOUBLE_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_FLOAT) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Float type; assign directly
                    jmsMapMessage.setFloat(_memberInfo.member_name,
                                           dynamicDataSample.get_float(
                                                      _memberInfo.member_name,
                                                      _memberInfo.member_id));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setFloat(_memberInfo.member_name,
                                           DEFAULT_FLOAT_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_LONG) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Long type; assign int from long
                    jmsMapMessage.setInt(_memberInfo.member_name,
                                         dynamicDataSample.get_int(
                                                      _memberInfo.member_name,
                                                      _memberInfo.member_id));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setInt(_memberInfo.member_name,
                                         DEFAULT_LONG_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_LONGLONG) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Long Long type; assign long from long long
                    jmsMapMessage.setLong(_memberInfo.member_name,
                                          dynamicDataSample.get_long(
                                                      _memberInfo.member_name,
                                                      _memberInfo.member_id));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setLong(_memberInfo.member_name,
                                          DEFAULT_LONGLONG_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_SHORT) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // Short type; assign directly
                    jmsMapMessage.setShort(_memberInfo.member_name,
                                           dynamicDataSample.get_short(
                                                      _memberInfo.member_name,
                                                      _memberInfo.member_id));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setShort(_memberInfo.member_name,
                                           DEFAULT_SHORT_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_STRING) {
                // Member present in this sample?
                if (_memberInfo.member_exists) {
                    // String type; assign directly
                    jmsMapMessage.setString(_memberInfo.member_name,
                                      new String(dynamicDataSample.get_string(
                                                      _memberInfo.member_name,
                                                     _memberInfo.member_id)));
                } else {
                    // Member not present in this sample; set default
                    jmsMapMessage.setString(_memberInfo.member_name,
                                            DEFAULT_STRING_VALUE);
                }
            }
        }
    }
}
