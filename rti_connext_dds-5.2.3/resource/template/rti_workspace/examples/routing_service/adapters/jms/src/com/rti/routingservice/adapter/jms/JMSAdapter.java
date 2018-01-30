// ****************************************************************************
//         (c) Copyright, Real-Time Innovations, All rights reserved.
//
//         Permission to modify and use for internal purposes granted.
// This software is provided "as is", without warranty, express or implied.
//
// ****************************************************************************

package com.rti.routingservice.adapter.jms;

import com.rti.routingservice.adapter.Adapter;
import com.rti.routingservice.adapter.Connection;
import com.rti.routingservice.adapter.StreamReaderListener;
import com.rti.routingservice.adapter.infrastructure.AdapterException;
import com.rti.routingservice.adapter.infrastructure.Version;
import java.util.Properties;
import javax.jms.JMSException;
import javax.naming.NamingException;

/**
 * The JMSAdapter class implements the Adapter interface to be loaded by the
 * Routing Service. This adapter translates DDS Samples to/from JMS Messages.
 */
public class JMSAdapter implements Adapter {
    /**
     * The JMSAdapterErrors enum contains error codes and their description.
     * It also creates new AdapterException exceptions to be thrown with the
     * error code, description, and cause. This enum class can't be
     * instantiated. Use its methods only through the enum values.
     */
    private enum JMSAdapterErrors {
        // JMSAdapterErrors enumeration values
        ERROR_CREATING_CONNECTION ("Error creating Connection"),
        ERROR_CLOSING_CONNECTION ("Error closing Connection");

        /** Error Message */
        private final String _errorMessage;

        /**
         * Constructor. Assign enumeration field.
         *
         * @param message   Error message.
         */
        private JMSAdapterErrors(String message) {
            this._errorMessage = message;
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

    /** JMS Message property that identifies messages generated by
        JMSAdapter */
    static final String GENERATED_BY_JMS_ADAPTER_ROUTING_GROUP =
                                      "GeneratedByJMSAdapterRoutingGroupName";

    /** Routing Service expects a constructor with one Properties argument
     */
    public JMSAdapter(Properties props) {
        // empty
    }

    /**
     * This method is invoked by the Routing Service when it needs a new
     * JMS connection (configured in the Routing Service XML config file).
     *
     * @param routingServiceName                The routing service name.
     * @param routingServiceGroupName           The routing group name.
     * @param inputStreamDiscoveryListener      The listener of the built-in
     *                                          StreamReader that notifies the
     *                                          discovery of new input
     *                                          streams.
     * @param outputStreamDiscoveryListener     The listener of the built-in
     *                                          StreamReader that notifies the
     *                                          discovery of new output
     *                                          streams.
     * @param properties                        Connection properties.
     *
     * @throws AdapterException                 If a connection could not be
     *                                          created.
     *
     * @returns A new JMSAdapterConnection.
     */
    public Connection createConnection(String routingServiceName,
                                       String routingServiceGroupName,
                            StreamReaderListener inputStreamDiscoveryListener,
                           StreamReaderListener outputStreamDiscoveryListener,
                                       Properties properties)
                                                     throws AdapterException {
        // Create, open, and return  a new connection with its routing
        // service, group, and properties.
        try {
            return new JMSAdapterConnection(routingServiceName,
                                            routingServiceGroupName,
                                            properties);
        } catch (NamingException namingException) {
            // Notify failure
            throw JMSAdapterErrors.ERROR_CREATING_CONNECTION.
                                      createAdapterException(namingException);
        } catch (JMSException jmsException) {
            // Notify failure
            throw JMSAdapterErrors.ERROR_CREATING_CONNECTION.
                                         createAdapterException(jmsException);
        }
    }

    /**
     * This method is invoked by the Routing Service when it needs to
     * release an existing JMS connection.
     *
     * @param connection        The Connection to release.
     *
     * @throws AdapterException If a connection could not be released.
     */
    public void deleteConnection(Connection connection)
                                                     throws AdapterException {
        // Close JMS Adapter Connection
        JMSAdapterConnection existingConnection =
                                            (JMSAdapterConnection) connection;

        try {
            existingConnection.close();
        } catch (JMSException jmsException) {
            // Notify failure
            throw
                JMSAdapterErrors.ERROR_CLOSING_CONNECTION.
                                         createAdapterException(jmsException);
        }
    }

    public Version getVersion() {
        return new Version(1,0,0,0);
    }
}

