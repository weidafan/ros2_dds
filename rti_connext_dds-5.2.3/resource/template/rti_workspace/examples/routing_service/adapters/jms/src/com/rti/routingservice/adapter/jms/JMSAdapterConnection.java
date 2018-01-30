// ****************************************************************************
//         (c) Copyright, Real-Time Innovations, All rights reserved.
//
//         Permission to modify and use for internal purposes granted.
// This software is provided "as is", without warranty, express or implied.
//
// ****************************************************************************

package com.rti.routingservice.adapter.jms;

import java.util.Properties;
import javax.jms.ConnectionFactory;
import javax.jms.Destination;
import javax.jms.JMSException;
import javax.jms.MessageConsumer;
import javax.jms.MessageProducer;
import javax.naming.Context;
import javax.naming.InitialContext;
import javax.naming.NamingException;
import com.rti.routingservice.adapter.Connection;
import com.rti.routingservice.adapter.Session;
import com.rti.routingservice.adapter.StreamReader;
import com.rti.routingservice.adapter.StreamReaderListener;
import com.rti.routingservice.adapter.StreamWriter;
import com.rti.routingservice.adapter.infrastructure.AdapterException;
import com.rti.routingservice.adapter.infrastructure.StreamInfo;

/**
 * The JMSAdapterConnection class implements the Connection interface to
 * connect to a JMS middleware and send/receive messages.
 */
public class JMSAdapterConnection implements Connection {
    /**
     * The JMSAdapterConnectionErrors enum contains error codes and their
     * description. It also creates new AdapterException exceptions to be
     * thrown with the error code, description, and cause. This enum class
     * can't be instantiated. Use its methods only through the enum values.
     */
    private enum JMSAdapterConnectionErrors {
        // JMSAdapterConnectionErrors enumeration values
        CONNECTION_FACTORY_NAME_NOT_FOUND
            ("Could not find the JMS Connection Factory Name [" +
             CONTEXT_CONNECTION_FACTORY_NAME_ELEMENT + "] in the Connection" +
             " Properties section of the Routing Service configuration " +
             "file."),
        ERROR_CREATING_SESSION ("Error creating Session"),
        ERROR_CLOSING_SESSION ("Error closing Session"),
        COULD_NOT_CREATE_MESSAGECONSUMER
            ("Error creating StreamReader's JMS MessageConsumer"),
        COULD_NOT_START_JMS_RECEPTION
            ("Error starting JMS reception in StreamReader's JMS Connection"),
        ERROR_CLOSING_STREAMREADER ("Error closing StreamReader"),
        COULD_NOT_CREATE_MESSAGEPRODUCER
            ("Error creating StreamWriter's JMS MessageProducer"),
        ERROR_CLOSING_STREAMWRITER ("Error closing StreamWriter"),
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
        private JMSAdapterConnectionErrors(String message) {
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

        /**
         * This method returns a new AdapterException with this instance's error
         * information and the information of the Throwable that caused it.
         *
         * @param originalException The Throwable that caused the error.
         *
         * @returns An AdapterException with the error information
         */
        private AdapterException createAdapterException(
                                                Throwable originalException) {
            return new AdapterException(this.ordinal(), this._errorMessage +
                                        " (caused by " +
                                        originalException.getMessage() + ")",
                                        originalException);
        }
    }

    /** Connection Factory Name Element */
    private static final String CONTEXT_CONNECTION_FACTORY_NAME_ELEMENT =
                                                      "ConnectionFactoryName";
    /** Connection's routing group name */
    private final String _routingGroupName;
    /** Connection's properties */
    private final Properties _connectionProperties;
    /** Connection's context */
    private final Context _connectionContext;
    /** JMS Connection */
    private final javax.jms.Connection _jmsConnection;

     /**
     * Constructor. Attempts to create a new connection with the JMS middleware
     * specified by the JNDI properties in routing service XML configuration
     * file.
     *
     * @param routingService    Name of the Routing Service that contains this
     *                          connection.
     * @param routingGroup      Name of the Routing Group that contains this
     *                          connection.
     * @param properties        Connection's properties.
     *
     * @throws NamingException  If the Context couldn't be loaded/looked into.
     * @throws AdapterException If the ConnectionFactoryName was not defined.
     * @throws JMSException     If the JMS Connection could not be created.
     */
    JMSAdapterConnection(String routingService, String routingGroup,
                                                        Properties properties)
                                                       throws NamingException,
                                                             AdapterException,
                                                                JMSException {
        // Set Routing Name, Group, and Properties
        _routingGroupName = routingGroup;
        _connectionProperties = new Properties();
        _connectionProperties.putAll(properties);

        // Load Context defined in connection's properties
        _connectionContext = new InitialContext(_connectionProperties);

        // Get Connection Factory Name
        String connectionFactoryName = _connectionProperties.getProperty(
                                     CONTEXT_CONNECTION_FACTORY_NAME_ELEMENT);

        // Exists?
        if (connectionFactoryName == null) {
            // Notify failure
            throw JMSAdapterConnectionErrors.
                                            CONNECTION_FACTORY_NAME_NOT_FOUND.
                                                     createAdapterException();
        }

        // Get Connection Factory from Context
        ConnectionFactory jmsConnectionFactory = (ConnectionFactory)
                                       lookupInContext(connectionFactoryName);

        // Open JMS connection
        _jmsConnection = jmsConnectionFactory.createConnection();
    }

   /**
     * This method is invoked by the Routing Service when it needs a new
     * JMS session (configured in the Routing Service XML config file).
     *
     * @param properties        Session properties.
     *
     * @throws AdapterException If a session could not be created.
     *
     * @returns A new JMSAdapterSession.
     */
    public Session createSession(Properties properties)
                                                     throws AdapterException {
        // Create and open a new session in this connection with its
        // properties
        try {
            return new JMSAdapterSession(_jmsConnection, properties);
        } catch (JMSException jmsException) {
            // Notify failure
            throw JMSAdapterConnectionErrors.ERROR_CREATING_SESSION.
                                         createAdapterException(jmsException);
        }
    }

    /**
     * This method is invoked by the Routing Service when it needs to
     * release an existing JMS session.
     *
     * @param session           The Session to release.
     *
     * @throws AdapterException If a session could not be released.
     */
    public void deleteSession(Session session) throws AdapterException {
        JMSAdapterSession existingSession = (JMSAdapterSession) session;

        // Close JMS session
        try {
            existingSession.close();
        } catch (JMSException jmsException) {
            // Notify failure
            throw
                JMSAdapterConnectionErrors.ERROR_CLOSING_SESSION.
                                         createAdapterException(jmsException);
        }
    }

    /**
     * This method is invoked by the Routing Service when it needs a new
     * JMS StreamReader (configured in the Routing Service XML config file).
     *
     * @param session           Session requesting a new StreamReader.
     * @param streamInfo        Current stream information.
     * @param properties        StreamReader properties.
     * @param listener          The listener of the StreamReader used to
     *                          notify the routing service when new data is
     *                          available.
     *
     * @throws AdapterException If a StreamReader could not be created.
     *
     * @returns A new JMSAdapterStreamReader.
     */
    public StreamReader createStreamReader(Session session,
                                           StreamInfo streamInfo,
                                           Properties properties,
                                           StreamReaderListener listener)
                                                     throws AdapterException {
        JMSAdapterSession existingSession = (JMSAdapterSession) session;
        MessageConsumer jmsConsumer = null;

        // Create the StreamReader's JMS Message Consumer
        try {
            jmsConsumer = createJMSConsumer(existingSession._jmsSession,
                                                  streamInfo.getStreamName());
        } catch (JMSException jmsException) {
            // Notify failure
            throw JMSAdapterConnectionErrors.COULD_NOT_CREATE_MESSAGECONSUMER.
                                         createAdapterException(jmsException);
        } catch (NamingException namingException) {
            // Notify failure
            throw JMSAdapterConnectionErrors.COULD_NOT_CREATE_MESSAGECONSUMER.
                                      createAdapterException(namingException);
        }

        // Create a new StreamReader in its session with its message consumer,
        // listener, stream info, and properties
        JMSAdapterStreamReader requestedStreamReader = existingSession.
                                                 createJMSAdapterStreamReader(
                                                                  jmsConsumer,
                                                            _routingGroupName,
                                                                     listener,
                                                      streamInfo, properties);

        // Start message reception for this connection
        try {
            // If reception has been started already, this method ignores
            // subsequent calls
            _jmsConnection.start();
        } catch (JMSException jmsException) {
            // Notify failure
            throw JMSAdapterConnectionErrors.COULD_NOT_START_JMS_RECEPTION.
                                         createAdapterException(jmsException);
        }

        // Return the new StreamReader
        return requestedStreamReader;
    }

    /**
     * This method is invoked by the Routing Service when it needs to
     * release an existing JMS StreamReader.
     *
     * @param streamReader      The StreamReader to release.
     *
     * @throws AdapterException If a StreamReader could not be released.
     */
    public void deleteStreamReader(StreamReader streamReader)
                                                     throws AdapterException {
        JMSAdapterStreamReader existingStreamReader =
                                        (JMSAdapterStreamReader) streamReader;

        // Close JMS StreamReader
        try {
            existingStreamReader.close();
        } catch (JMSException jmsException) {
            // Notify failure
            throw JMSAdapterConnectionErrors.ERROR_CLOSING_STREAMREADER.
                                         createAdapterException(jmsException);
        }
    }

    /**
     * This method is invoked by the Routing Service when it needs a new
     * JMS StreamWriter (configured in the Routing Service XML config file).
     *
     * @param session           Session requesting a new StreamWriter.
     * @param streamInfo        Current stream information.
     * @param properties        StreamWriter properties.
     *
     * @throws AdapterException If a StreamWriter could not be created.
     *
     * @returns A new JMSAdapterStreamWriter.
     */
    public StreamWriter createStreamWriter(Session session,
                                           StreamInfo streamInfo,
                                           Properties properties)
                                                     throws AdapterException {
        JMSAdapterSession existingSession = (JMSAdapterSession) session;
        MessageProducer jmsProducer = null;

        // Create the StreamWriter's JMS Message Producer
        try {
            jmsProducer = createJMSProducer(existingSession._jmsSession,
                                                  streamInfo.getStreamName());
        } catch (JMSException jmsException) {
            // Notify failure
            throw JMSAdapterConnectionErrors.COULD_NOT_CREATE_MESSAGEPRODUCER.
                                         createAdapterException(jmsException);
        } catch (NamingException namingException) {
            // Notify failure
            throw JMSAdapterConnectionErrors.COULD_NOT_CREATE_MESSAGEPRODUCER.
                                      createAdapterException(namingException);
        }

        // Return a new StreamWriter in its session with its message producer,
        // stream info, and properties
        return existingSession.
                            createJMSAdapterStreamWriter(jmsProducer,
                                                         _routingGroupName,
                                                         properties);
    }

    /**
     * This method is invoked by the Routing Service when it needs to
     * release an existing JMS StreamWriter.
     *
     * @param streamWriter      The StreamWriter to release.
     *
     * @throws AdapterException If a StreamWriter could not be released.
     */
    public void deleteStreamWriter(StreamWriter streamWriter)
                                                     throws AdapterException {
        JMSAdapterStreamWriter existingStreamWriter =
                                        (JMSAdapterStreamWriter) streamWriter;

        // Close JMS StreamWriter
        try {
            existingStreamWriter.close();
        } catch (JMSException jmsException) {
            // Notify failure
            throw JMSAdapterConnectionErrors.ERROR_CLOSING_STREAMWRITER.
                                         createAdapterException(jmsException);
        }
    }

    /**
     * This method is invoked by the Routing Service when it needs to get
     * the Connection's attributes. CURRENTLY NOT SUPPORTED.
     *
     * @throws AdapterException If the attributes couldn't be accessed.
     *
     * @returns Connection's attributes.
     */
    public Properties getAttributes() throws AdapterException {
        // Remote Administration not supported in this implementation
        throw JMSAdapterConnectionErrors.REMOTE_ADMINISTRATION_NOT_SUPPORTED.
                                                     createAdapterException();
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
        throw JMSAdapterConnectionErrors.REMOTE_ADMINISTRATION_NOT_SUPPORTED.
                                                     createAdapterException();
    }

    /**
     * This method attempts to lookup a value in the initial context. If the
     * initial context hasn't been loaded, this method loads it and controls
     * its concurrent access.
     * When attaching a new thread to an existing Java Virtual Machine through
     * JNI with the default Context ClassLoader (as the Routing Service does),
     * the Bootstrap Context ClassLoader is used. Because the Bootstrap
     * Context ClassLoader does not have the paths defined in class path, and
     * those paths tell JNDI where to look for the initial context factory
     * class, this method ensures that the Context ClassLoader used by this
     * thread is the System Context ClassLoader, which contains the paths
     * defined in class path, thus allowing JNDI to find the Factory classes
     * used by it.
     *
     * @param initialContextName    The name to lookup in the initial context.
     *
     * @throws NamingException      If the value couldn't be looked up.
     */
    private synchronized Object lookupInContext(String initialContextName)
                                                      throws NamingException {
        // Requested object
        Object requestedObject = null;

        // Get this thread's current Context ClassLoader
        ClassLoader originalContextClassLoader =
                               Thread.currentThread().getContextClassLoader();

        // Set this thread's Context ClassLoader to the System Context
        // ClassLoader
        Thread.currentThread().setContextClassLoader(
                                          ClassLoader.getSystemClassLoader());

        try {
            // Lookup the requested name in the initial context
            requestedObject = _connectionContext.lookup(initialContextName);
        } finally {
            // Retrieve original Context ClassLoader
            Thread.currentThread().setContextClassLoader(
                                                  originalContextClassLoader);
        }

        // Return the requested object
        return requestedObject;
    }

    /**
     * This method creates a JMS MessageConsumer.
     *
     * @param jmsSession    JMS Session for this MessageConsumer
     * @param streamName    Destination name for Consumer.
     *
     * @throws NamingException  If the JMS Destination could not be found.
     * @throws JMSException     If the JMS Consumer could not be created.
     *
     * @returns The JMS MessageConsumer object.
     */
    MessageConsumer createJMSConsumer(javax.jms.Session jmsSession,
                                      String streamName)
                                        throws NamingException, JMSException {
        // Load the desired JMS Destination
        Destination jmsDestination = (Destination)
                                                  lookupInContext(streamName);
        // Create and return a MessageConsumer
        return jmsSession.createConsumer(jmsDestination);
    }

    /**
     * This method creates a JMS MessageProducer.
     *
     * @param jmsSession    JMS Session for this MessageProducer
     * @param streamName    Destination name for Producer.
     *
     * @throws NamingException  If the JMS Destination could not be found.
     * @throws JMSException     If the JMS Consumer could not be created.
     *
     * @returns The JMS MessageProducer object.
     */
    MessageProducer createJMSProducer(javax.jms.Session jmsSession,
                                      String streamName)
                                        throws NamingException, JMSException {
        // Load the desired JMS Destination
        Destination jmsDestination = (Destination)
                                                  lookupInContext(streamName);
        // Create and return a MessageProducer
        return jmsSession.createProducer(jmsDestination);
    }

    /**
     * This method attempts to close the existing connection with the JMS
     * middleware.
     *
     * @throws JMSException If the connection could not be closed.
     */
    void close() throws JMSException {
        try {
            // Stop and close JMS connection
            _jmsConnection.stop();
            _jmsConnection.close();
        } finally {
            // Release properties
            _connectionProperties.clear();
        }
    }

    @Override
    public String toString() {
        if (_jmsConnection != null) {
            try {
                return super.toString() + " (Provider=" +
                    _jmsConnection.getMetaData().getJMSProviderName() +
                    "; ClientID=" + _jmsConnection.getClientID() + ')';
            } catch (JMSException ex) {
                // fall through...
            }
        }
        return super.toString();
    }

}
