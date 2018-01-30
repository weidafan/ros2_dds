// ****************************************************************************
//         (c) Copyright, Real-Time Innovations, All rights reserved.
//
//         Permission to modify and use for internal purposes granted.
// This software is provided "as is", without warranty, express or implied.
//
// ****************************************************************************

package com.rti.routingservice.adapter.jms;

import javax.jms.JMSException;
import javax.jms.Message;
import com.rti.dds.dynamicdata.DynamicData;
import com.rti.dds.infrastructure.BadKind;
import com.rti.dds.infrastructure.Bounds;
import com.rti.dds.subscription.SampleInfo;

/**
 * The DynamicDataToJMSMessageTranslation interface must be implemented to
 * translate DynamicData samples to JMS Message messages.
 */
public interface DynamicDataToJMSMessageTranslation {
    /**
     * Implement this method to translate a DynamicData Sample into a JMS
     * Message.
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
     * @throws BadKind                  If a TypeCode exception occurred.
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
                throws Bounds, BadKind, JMSException;
}
