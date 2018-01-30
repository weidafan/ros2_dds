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
 * The JMSAdapterJMSToDynamicDataTranslation implements the
 * JMSToDynamicDataMessageTranslation interface to translate DynamicData
 * samples to JMS Message messages.
 */
public class JMSAdapterJMSToDynamicDataTranslation implements
                                          JMSToDynamicDataMessageTranslation {
    /** Null JMS Message parameter message */
    private static final String ERROR_EMPTY_JMS_MESSAGE =
                           "JMS Message instance provided is invalid (null).";
    /** Null DynamicData parameter message */
    private static final String ERROR_DYNAMICDATA_EMPTY =
                           "DynamicData instance provided is invalid (null).";
    /** Null SampleInfo parameter message */
    private static final String ERROR_SAMPLEINFO_EMPTY =
                            "SampleInfo instance provided is invalid (null).";
    /** Invalid JMSMessage parameter message */
    private static final String ERROR_JMS_MESSAGE_NOT_MAPMESSAGE =
              "Only JMS MapMessage instances supported. Modify translation " +
              "implementation to support other JMS Message instances.";
    /** Default boolean value */
    private static final boolean DEFAULT_BOOLEAN_VALUE = false;
    /** Default octet value */
    private static final byte DEFAULT_OCTET_VALUE = 0;
    /** Default octet sequence value */
    private static final ByteSeq DEFAULT_OCTET_SEQUENCE_VALUE = new ByteSeq();
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

    /**
     * This method translates a JMS MapMessage message with fundamental data
     * type members only into a DynamicData sample with fundamental data type
     * members only, setting every value in the DynamicData sample structure
     * to the value with a key string of such member name in the MapMessage
     * structure. If the member name is not found in the MapMessage, it is set
     * to a default value.
     * This implementation does not handle composite samples, such as unions,
     * sequences, etc.; and it does not handle routing nor discovery samples,
     * only data samples. This implementation can be modified to support
     * these and other kind of samples.
     *
     * @param dynamicDataSample The DynamicData instance where the Sample data
     *                          translated from JMS will be placed. This
     *                          instance must be created before calling this
     *                          method.
     * @param dynamicDataInfo   The SampleInfo instance where the Sample info
     *                          translated from JMS will be placed. This
     *                          instance must be created before calling this
     *                          method.
     * @param jmsMessage        The JMS Message instance that contains the JMS
     *                          message data and info that must be translated
     *                          to DynamicData Sample (data and info).
     *
     * @throws IllegalArgumentException If a parameter is not valid.
     * @throws BadKind                  If a TypeCode exception occurred.
     * @throws Bounds                   If a TypeCode out-of-bounds occurred.
     * @throws RETCODE_ERROR            If a DynamicData exception occurred.
     * @throws JMSException             If a JMS exception occurred.
     */
    public void translateJMSMessageToDynamicData(
                    DynamicData dynamicDataSample, SampleInfo dynamicDataInfo,
                                                           Message jmsMessage)
                                                       throws Bounds, BadKind,
                                                                JMSException {
        // Is there a message to translate?
        if (jmsMessage == null) {
            // Notify failure
            throw new IllegalArgumentException(ERROR_EMPTY_JMS_MESSAGE);
        }

        // Is there a DynamicData instance created to put the translated data?
        if (dynamicDataSample == null) {
            // Notify failure
            throw new IllegalArgumentException(ERROR_DYNAMICDATA_EMPTY);
        }

        // Is there a SampleInfo instance created to put the translated info?
        if (dynamicDataInfo == null) {
            // Notify failure
            throw new IllegalArgumentException(ERROR_SAMPLEINFO_EMPTY);
        }

        // Only accept MapMessages
        if (!(jmsMessage instanceof MapMessage)) {
            // Notify failure
            throw new
                   IllegalArgumentException(ERROR_JMS_MESSAGE_NOT_MAPMESSAGE);
        }

        // Translate all members to the DynamicData sample
        copyJMSMapMessageToDynamicData(dynamicDataSample,
                                                     (MapMessage) jmsMessage);
        // Translate time stamp
        dynamicDataInfo.source_timestamp.sec =
                                  (int) (jmsMessage.getJMSTimestamp() / 1000);
        dynamicDataInfo.source_timestamp.nanosec =
                      (int) ((jmsMessage.getJMSTimestamp() % 1000) * 1000000);

        // Valid data
        dynamicDataInfo.valid_data = true;
        // It's alive
        dynamicDataInfo.instance_state =
                                       InstanceStateKind.ALIVE_INSTANCE_STATE;
    }

    /**
     * This method copies a MapMessage fundamental data type structure into a
     * DynamicData object.
     *
     * @param dynamicDataSample The DynamicData structure where the data type
     *                          will be added.
     * @param jmsMapMessage     The MapMessage object encapsulating the
     *                          fundamental data type members.
     *
     * @throws BadKind          If a TypeCode exception occurred.
     * @throws Bounds           If a TypeCode out-of-bounds occurred.
     * @throws RETCODE_ERROR    If a DynamicData operation failed.
     * @throws JMSException     If a JMS operation failed.
     */
    private void copyJMSMapMessageToDynamicData(DynamicData dynamicDataSample,
                                                     MapMessage jmsMapMessage)
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
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Boolean type; assign directly
                    dynamicDataSample.set_boolean(_memberInfo.member_name,
                                                  _memberInfo.member_id,
                           jmsMapMessage.getBoolean(_memberInfo.member_name));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_boolean(_memberInfo.member_name,
                                                  _memberInfo.member_id,
                                                  DEFAULT_BOOLEAN_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_OCTET) {
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Byte type; assign directly
                    dynamicDataSample.set_byte(_memberInfo.member_name,
                                               _memberInfo.member_id,
                               jmsMapMessage.getByte(_memberInfo.member_name));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_byte(_memberInfo.member_name,
                                               _memberInfo.member_id,
                                               DEFAULT_OCTET_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_SEQUENCE) {
                // Sequence; only Octet Sequences supported
                if (_memberInfo.element_kind != TCKind.TK_OCTET) {
                    continue;
                }

                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Get octet sequence from byte array
                    byte[] byteArray =
                              jmsMapMessage.getBytes(_memberInfo.member_name);
                    ByteSeq octetSequence = new ByteSeq(byteArray);

                    // Assign octet sequence
                    dynamicDataSample.set_byte_seq(_memberInfo.member_name,
                                                   _memberInfo.member_id,
                                                   octetSequence);
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_byte_seq(_memberInfo.member_name,
                                                   _memberInfo.member_id,
                                                DEFAULT_OCTET_SEQUENCE_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_CHAR) {
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Char type; assign directly
                    dynamicDataSample.set_char(_memberInfo.member_name,
                                               _memberInfo.member_id,
                              jmsMapMessage.getChar(_memberInfo.member_name));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_char(_memberInfo.member_name,
                                               _memberInfo.member_id,
                                               DEFAULT_CHAR_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_DOUBLE) {
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Double type; assign directly
                    dynamicDataSample.set_double(_memberInfo.member_name,
                                                 _memberInfo.member_id,
                            jmsMapMessage.getDouble(_memberInfo.member_name));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_double(_memberInfo.member_name,
                                                 _memberInfo.member_id,
                                                 DEFAULT_DOUBLE_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_FLOAT) {
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Float type; assign directly
                    dynamicDataSample.set_float(_memberInfo.member_name,
                                                _memberInfo.member_id,
                             jmsMapMessage.getFloat(_memberInfo.member_name));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_float(_memberInfo.member_name,
                                                _memberInfo.member_id,
                                                DEFAULT_FLOAT_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_LONG) {
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Long type; assign long from int
                    dynamicDataSample.set_int(_memberInfo.member_name,
                                              _memberInfo.member_id,
                               jmsMapMessage.getInt(_memberInfo.member_name));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_int(_memberInfo.member_name,
                                              _memberInfo.member_id,
                                              DEFAULT_LONG_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_LONGLONG) {
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Long Long type; assign long long from long
                    dynamicDataSample.set_long(_memberInfo.member_name,
                                               _memberInfo.member_id,
                              jmsMapMessage.getLong(_memberInfo.member_name));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_long(_memberInfo.member_name,
                                               _memberInfo.member_id,
                                               DEFAULT_LONGLONG_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_SHORT) {
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // Short type; assign directly
                    dynamicDataSample.set_short(_memberInfo.member_name,
                                                _memberInfo.member_id,
                             jmsMapMessage.getShort(_memberInfo.member_name));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_short(_memberInfo.member_name,
                                                _memberInfo.member_id,
                                                DEFAULT_SHORT_VALUE);
                }
            } else if (_memberInfo.member_kind == TCKind.TK_STRING) {
                // Exists in JMS?
                if (jmsMapMessage.getObject(
                                           _memberInfo.member_name) != null) {
                    // String type; assign directly
                    dynamicDataSample.set_string(_memberInfo.member_name,
                                            _memberInfo.member_id, new String(
                           jmsMapMessage.getString(_memberInfo.member_name)));
                } else {
                    // Doesn't exist in JMS; set default value
                    dynamicDataSample.set_string(_memberInfo.member_name,
                                                 _memberInfo.member_id,
                                                 DEFAULT_STRING_VALUE);
                }
            }
        }
    }
}
