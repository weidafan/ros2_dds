// ****************************************************************************
//         (c) Copyright, Real-Time Innovations, All rights reserved.
//
//         Permission to modify and use for internal purposes granted.
// This software is provided "as is", without warranty, express or implied.
//
// ****************************************************************************

package com.rti.routingservice.adapter.jms;

import java.io.Serializable;
import javax.jms.BytesMessage;
import javax.jms.JMSException;
import javax.jms.MapMessage;
import javax.jms.Message;
import javax.jms.ObjectMessage;
import javax.jms.Session;
import javax.jms.StreamMessage;
import javax.jms.TextMessage;

/**
 * The JMSAdapterMessageFactory class uses a valid JMS Session instance to
 * create JMS Message instances (Message, BytesMessage, MapMessage,
 * ObjectMessage, StreamMessage, and TextMessage) according to the method
 * called.
 */
public class JMSAdapterMessageFactory {
    /** The valid JMS Session used to create JMS Message instances */
    private final Session _messageFactorySession;

    /**
     * Constructor. Sets the JMS Session instance to use.
     */
    public JMSAdapterMessageFactory(Session jmsSession) {
        // Assign JMS Session
        _messageFactorySession = jmsSession;
    }

    /**
     * This method creates a BytesMessage instance using the configured JMS
     * Session.
     *
     * @throws JMSException    If the message instance couldn't be created.
     *
     * @returns A new JMS BytesMessage instance.
     */
    public BytesMessage createBytesMessage() throws JMSException {
        // Create and return a new BytesMessage instance
        return _messageFactorySession.createBytesMessage();
    }

    /**
     * This method creates a MapMessage instance using the configured JMS
     * Session.
     *
     * @throws JMSException    If the message instance couldn't be created.
     *
     * @returns A new JMS MapMessage instance.
     */
    public MapMessage createMapMessage() throws JMSException {
        // Create and return a new MapMessage instance
        return _messageFactorySession.createMapMessage();
    }

    /**
     * This method creates a Message instance using the configured JMS
     * Session.
     *
     * @throws JMSException    If the message instance couldn't be created.
     *
     * @returns A new JMS Message instance.
     */
    public Message createMessage() throws JMSException {
        // Create and return a new Message instance
        return _messageFactorySession.createMessage();
    }

    /**
     * This method creates an ObjectMessage instance using the configured JMS
     * Session.
     *
     * @throws JMSException    If the message instance couldn't be created.
     *
     * @returns A new JMS ObjectMessage instance.
     */
    public ObjectMessage createObjectMessage() throws JMSException {
        // Create and return a new ObjectMessage instance
        return _messageFactorySession.createObjectMessage();
    }

    /**
     * This method creates an initialized ObjectMessage instance using the
     * configured JMS Session and the object provided as parameter.
     *
     * @param object    The Serializable object to use to initialize this
     *                  message.
     *
     * @throws JMSException    If the message instance couldn't be created.
     *
     * @returns A new and initialized JMS ObjectMessage instance.
     */
    public ObjectMessage createObjectMessage(Serializable object)
                                                         throws JMSException {
        // Create and return a new and initialized ObjectMessage instance
        return _messageFactorySession.createObjectMessage(object);
    }

    /**
     * This method creates a StreamMessage instance using the configured JMS
     * Session.
     *
     * @throws JMSException    If the message instance couldn't be created.
     *
     * @returns A new JMS StreamMessage instance.
     */
    public StreamMessage createStreamMessage() throws JMSException {
        // Create and return a new StreamMessage instance
        return _messageFactorySession.createStreamMessage();
    }

    /**
     * This method creates a TextMessage instance using the configured JMS
     * Session.
     *
     * @throws JMSException    If the message instance couldn't be created.
     *
     * @returns A new JMS TextMessage instance.
     */
    public TextMessage createTextMessage() throws JMSException {
        // Create and return a new TextMessage instance
        return _messageFactorySession.createTextMessage();
    }

    /**
     * This method creates an initialized TextMessage instance using the
     * configured JMS Session and the text provided as parameter.
     *
     * @param text  The string to use to initialize this message.
     *
     * @throws JMSException    If the message instance couldn't be created.
     *
     * @returns A new and initialized JMS TextMessage instance.
     */
    public TextMessage createTextMessage(String text) throws JMSException {
        // Create and return a new and initialized TextMessage instance
        return _messageFactorySession.createTextMessage(text);
    }
}
