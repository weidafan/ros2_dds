// ****************************************************************************
//         (c) Copyright, Real-Time Innovations, All rights reserved.
//
//         Permission to modify and use for internal purposes granted.
// This software is provided "as is", without warranty, express or implied.
//
// ****************************************************************************

package com.rti.routingservice.adapter.jms;

import java.util.Properties;
import javax.jms.Connection;
import javax.jms.JMSException;
import javax.jms.MessageConsumer;
import javax.jms.MessageProducer;
import com.rti.routingservice.adapter.Session;
import com.rti.routingservice.adapter.StreamReaderListener;
import com.rti.routingservice.adapter.infrastructure.AdapterException;
import com.rti.routingservice.adapter.infrastructure.StreamInfo;

/**
 * The JMSAdapterSession class implements the Session interface to establish a
 * session with the JMS middleware specified by the JNDI properties in routing
 * service XML configuration file.
 */
public class JMSAdapterSession implements Session {
    /**
     * The JMSAdapterSessionErrors enum contains error codes and their
     * description. It also creates new AdapterException exceptions to be
     * thrown with the error code, description, and cause. This enum class
     * can't be instantiated. Use its methods only through the enum values.
     */
    private enum JMSAdapterSessionErrors {
        // JMSAdapterSessionErrors enumeration values
        REMOTE_ADMINISTRATION_NOT_SUPPORTED
            ("Remote Administration not supported in JMSAdapter. Modify " +
             "source code to support it.");

        /** Error Message */
        private final String _errorMessage;

        /**
         * Constructor. Assign enumeration field.
         *
         * @param message   Error message.
         */
        private JMSAdapterSessionErrors(String message) {
            this._errorMessage = message;
        }

        /**
         * This method returns a new AdapterException with this instance's error
         * information.
         *
         * @returns An AdapterException with the error information
         */
        private AdapterException createAdapterException() {
            return new AdapterException(this.ordinal(), this._errorMessage);
        }
    }

    /** Property Name that defines if JMS Session is transacted */
    private static final String JMS_SESSION_TRANSACTED_ELEMENT =
                                                       "JMSSessionTransacted";
    /** Possible value for JMS Session transacted: true */
    private static final String JMS_SESSION_TRANSACTED_TRUE_VALUE = "true";
    /** Property Name that defines JMS Session acknowledge mode */
    private static final String JMS_SESSION_ACKNOWLEDGE_MODE_ELEMENT =
                                                  "JMSSessionAcknowledgeMode";
    /** Possible value for JMS Session acknowledge mode: client */
    private static final String JMS_SESSION_ACKNOWLEDGE_MODE_CLIENT_VALUE =
                                                                     "client";
    /** Possible value for JMS Session acknowledge mode: duplicatesOK */
    private static final String
            JMS_SESSION_ACKNOWLEDGE_MODE_DUPLICATES_OK_VALUE = "duplicatesOK";
    /** Session's properties */
    private final Properties _sessionProperties;
    /** JMS Session */
    final javax.jms.Session _jmsSession;
    /** Session's JMS Message Factory */
    private final JMSAdapterMessageFactory _sessionJMSMessageFactory;

    /**
     * Attempts to establish a new session with the JMS middleware
     * specified by the JNDI properties and with the JMS session options
     * provided in the routing service XML configuration file.
     *
     * @param jmsConnection     Session's JMS Connection.
     * @param properties        Session's properties.
     *
     * @throws AdapterException If a session could not be created.
     */
    JMSAdapterSession(Connection jmsConnection, Properties properties)
                                                         throws JMSException {
        // Create local copies of parameters so we don't depend on them
        _sessionProperties = new Properties();
        _sessionProperties.putAll(properties);

        // Get JMS Session transacted property. Default value: false
        boolean transactedValue = false;
        String transactedProperty = _sessionProperties.getProperty(
                                              JMS_SESSION_TRANSACTED_ELEMENT);

        // Transacted property provided?
        if (transactedProperty != null) {
            // Change transacted property default value?
            if (transactedProperty.equalsIgnoreCase(
                                         JMS_SESSION_TRANSACTED_TRUE_VALUE)) {
                // Assign true value
                transactedValue = true;
            }
        }

        // Get JMS Session acknowledge mode. Default value: auto
        int acknowledgeModeValue = javax.jms.Session.AUTO_ACKNOWLEDGE;
        String acknowledgeModeProperty = _sessionProperties.getProperty(
                                        JMS_SESSION_ACKNOWLEDGE_MODE_ELEMENT);

        // Acknowledge mode property provided?
        if (acknowledgeModeProperty != null) {
            // Change transacted property default value?
            if (acknowledgeModeProperty.equalsIgnoreCase(
                                 JMS_SESSION_ACKNOWLEDGE_MODE_CLIENT_VALUE)) {
                // Assign client value
                acknowledgeModeValue = javax.jms.Session.CLIENT_ACKNOWLEDGE;
            } else if (acknowledgeModeProperty.equalsIgnoreCase(
                          JMS_SESSION_ACKNOWLEDGE_MODE_DUPLICATES_OK_VALUE)) {
                // Assign duplicatesOK value
                acknowledgeModeValue = javax.jms.Session.DUPS_OK_ACKNOWLEDGE;
            }
        }

        // Open JMS session
        _jmsSession = jmsConnection.createSession(transactedValue,
                                                  acknowledgeModeValue);

        // Valid JMS Session; create its JMS Message Factory instance
        _sessionJMSMessageFactory = new JMSAdapterMessageFactory(_jmsSession);
    }

    /**
     * This method is invoked by the Routing Service to set new properties to
     * this object. This is a result of remote administration.
     *
     * @param properties        New properties.
     *
     * @throws AdapterException If the properties couldn't be changed.
     *
     */
    public void update(Properties properties) throws AdapterException {
        // Remote Administration not supported in this implementation
        throw JMSAdapterSessionErrors.REMOTE_ADMINISTRATION_NOT_SUPPORTED.
                                                     createAdapterException();
    }

    /**
     * This method creates a StreamReader in this Session.
     *
     * @param jmsConsumer       StreamReader's JMS Message Consumer.
     * @param routingGroupName  The Routing Group Name of the Connection that
     *                          contains this StreamReader.
     * @param listener          The listener of the StreamReader used to
     *                          notify the routing service when new data is
     *                          available.
     * @param streamInfo        StreamReader's stream information.
     * @param properties        StreamReader's properties.
     *
     * @throws AdapterException If the StreamReader could not be created.
     *
     * @returns The new JMSAdapterStreamReader object.
     */
    JMSAdapterStreamReader createJMSAdapterStreamReader(
                                                  MessageConsumer jmsConsumer,
                                                      String routingGroupName,
                                                StreamReaderListener listener,
                                                        StreamInfo streamInfo,
                                                        Properties properties)
                                                     throws AdapterException {
        // Create StreamReader and return it
        return new JMSAdapterStreamReader(jmsConsumer, routingGroupName,
                                          listener, streamInfo, properties);
    }

    /**
     * This method creates a StreamWriter in this Session.
     *
     * @param jmsProducer       StreamWriter's JMS Message Producer
     * @param routingGroupName  The Routing Group Name of the Connection that
     *                          contains this StreamWriter.
     * @param properties        StreamWriter's properties.
     *
     * @throws AdapterException If the StreamWriter could not be created.
     *
     * @returns The new JMSAdapterStreamWriter object.
     */
    JMSAdapterStreamWriter createJMSAdapterStreamWriter(
                                                  MessageProducer jmsProducer,
                                                      String routingGroupName,
                                                        Properties properties)
                                                     throws AdapterException {
        // Create StreamWriter and return it
        return new JMSAdapterStreamWriter(jmsProducer, routingGroupName,
                                          _sessionJMSMessageFactory,
                                          properties);
    }

    /**
     * This method attempts to close the existing session with the JMS
     * middleware.
     *
     * @throws JMSException If the session could not be closed.
     */
    void close() throws JMSException {
        try {
            // Close JMS session
            _jmsSession.close();
        } finally {
            // Release properties
            _sessionProperties.clear();
        }
    }
}
