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
 * The JMSToDynamicDataMessageTranslation interface must be implemented to
 * translate JMS Message messages to DynamicData samples.
 */
public interface JMSToDynamicDataMessageTranslation {
    /**
     * Implement this method to translate a JMS Message into a DynamicData
     * Sample.
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
                                                                 JMSException;
}
