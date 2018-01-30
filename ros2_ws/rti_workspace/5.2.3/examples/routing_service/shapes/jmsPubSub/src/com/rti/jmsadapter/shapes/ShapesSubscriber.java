// ****************************************************************************
//         (c) Copyright, Real-Time Innovations, All rights reserved.       
//                                                                          
//         Permission to modify and use for internal purposes granted.      
// This software is provided "as is", without warranty, express or implied. 
//                                                                          
// ****************************************************************************

package com.rti.jmsadapter.shapes;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import javax.jms.JMSException;
import javax.jms.Topic;
import javax.jms.TopicConnection;
import javax.jms.TopicConnectionFactory;
import javax.jms.TopicSubscriber;
import javax.jms.TopicSession;
import javax.jms.MessageListener;
import javax.jms.Message;
import javax.jms.MapMessage;
import javax.naming.InitialContext;
import javax.naming.NamingException;

/**
 * The subscriber class receives MapMessages in topic "Shapes/Square",
 * "Shapes/Circle", or "Shapes/Triangle" from JMS publishers.
 */
public class ShapesSubscriber {
    /** Connection factory name */
    private static final String SHAPES_SUBSCRIBER_CONNECTION_FACTORY =
                                                   "Shapes/ConnectionFactory";
    /*
     *
     * For OpenJMS use:
     *
     *
     private static final String SHAPES_SUBSCRIBER_CONNECTION_FACTORY =
                                                   "JmsTopicConnectionFactory";
     */

    /** Topic namespace */
    private static final String SHAPES_PUBLISHER_TOPIC_NAMESPACE = "Shapes/";
    /** Topic name 1 */
    private static final String SHAPES_SUBSCRIBER_TOPIC_SQUARE = "Square";
    /** Topic name 2 */
    private static final String SHAPES_SUBSCRIBER_TOPIC_CIRCLE = "Circle";
    /** Topic name 3 */
    private static final String SHAPES_SUBSCRIBER_TOPIC_TRIANGLE = "Triangle";
    /** Connects to a JMS middleware server */
    private TopicConnection _serverConnection;
    /** Establishes a Session with a JMS middleware topic server */
    private TopicSession _topicSession;
    /** Creates a topic for messages */
    private Topic _mesasgeTopic;
    /** Subscribes to messages with a given topic */
    private TopicSubscriber _messageSubscriber;
    /** Receives messages asynchronously */
    private SubscriberListener _messageListener;
    /** Topic Name entered by user */
    private String _topicName;

    /**
     * Constructor. Initializes class members
     */
    public ShapesSubscriber() {
        _serverConnection = null;
        _topicSession = null;
        _mesasgeTopic = null;
        _messageSubscriber = null;
        _messageListener = null;
    }

    /**
     * Creates connection, session, topic, and subscriber objects with this
     * application's initial context and user's parameters.
     *
     * @throws JMSException     If a JMS connection or object couldn't
     *                          be created.
     * @throws NamingException  If there is no initial context or it does not
     *                          contain the connection factory or topic.
     */
    private void openConnection() throws JMSException, NamingException {
        TopicConnectionFactory topicConnectionFactory;
        InitialContext specificContext;

        // Open the properties file for this application
        specificContext = new InitialContext();

        // Get the Topic Connection Factory instance
        topicConnectionFactory = (TopicConnectionFactory)
                 specificContext.lookup(SHAPES_SUBSCRIBER_CONNECTION_FACTORY);

        // Create a connection with the JMS middleware server
        _serverConnection = topicConnectionFactory.createTopicConnection();

        // Get the Shapes Topic instance
        _mesasgeTopic = (Topic) specificContext.lookup(_topicName);

        // Create a Topic Session with the JMS middleware server
        _topicSession = _serverConnection.createTopicSession(false,
                                               TopicSession.AUTO_ACKNOWLEDGE);

        // Open JMS connection and start using it
        _serverConnection.start();

        // Create the Subscriber object with the created Session and Topic
        // and handle reception asynchronously.
        _messageSubscriber = _topicSession.createSubscriber(_mesasgeTopic);
        _messageListener = new SubscriberListener();
        _messageSubscriber.setMessageListener(_messageListener);
    }
    
    /**
     * Closes connection, session, topic, and subscriber objects if they are
     * open and sets them to null.
     *
     * @throws JMSException     If a JMS connection or object couldn't
     *                          be created.
     * @throws NamingException  If there is no initial context or it does not
     *                          contain the connection factory or topic.
     */
    private void closeConnection() throws JMSException {
        // Close Subscriber
        if (_messageSubscriber != null) {
            _messageSubscriber.close();
            _messageSubscriber = null;
        }

        // Close Session
        if (_topicSession != null) {
            _topicSession.close();
            _topicSession = null;
        }

        // Stop and close Connection
        if (_topicSession != null) {
            _serverConnection.stop();
            _serverConnection.close();
            _serverConnection = null;
        }
    }

    /**
     * Parses the parameters set by the user and sets them to be used in
     * the messages received by this subscriber.
     *
     * @param params    String array containing the command line parameters.
     *                  First parameter: Topic name (Shapes/Square,
     *                  Shapes/Circle, or Shapes/Triangle).
     *
     * @returns         A boolean value with true if the parameters were read
     *                  or false if one or more parameters were invalid.
     */
    private boolean readParameters(String[] params) {
        // Check if only needed parameters were provided
        if (params.length != 1) {
            // Notify and exit
            System.out.println("Error: invalid number of parameters " +
                               "provided.");

            return false;
        }

        // Set a valid topic
        if (!setMessageTopicName(params[0])) {
            // Notify and exit
            System.out.println("Error: invalid message topic.");

            return false;
        }

        // All set
        return true;
    }

    /**
     * Validates and sets user's topic name.
     *
     * @param messageTopicName  Topic name entered by user.
     *
     * @returns                 A boolean value with true if the topic name
     *                          was set or false if it has an invalid value.
     */
    private boolean setMessageTopicName(String messageTopicName) {
        // Check if it's a valid topic name
        if ((messageTopicName.compareToIgnoreCase(
                                      SHAPES_PUBLISHER_TOPIC_NAMESPACE +
                                      SHAPES_SUBSCRIBER_TOPIC_SQUARE) != 0) &&
            (messageTopicName.compareToIgnoreCase(
                                      SHAPES_PUBLISHER_TOPIC_NAMESPACE +
                                      SHAPES_SUBSCRIBER_TOPIC_CIRCLE) != 0) &&
            (messageTopicName.compareToIgnoreCase(
                                    SHAPES_PUBLISHER_TOPIC_NAMESPACE +
                                    SHAPES_SUBSCRIBER_TOPIC_TRIANGLE) != 0)) {
            // Invalid topic
            return false;
        }

        // Only first letter in topic namespace is capitalized
        messageTopicName = messageTopicName.substring(0, 1).toUpperCase() +
                           messageTopicName.substring(1).toLowerCase();
        // Assign topic namespace
        _topicName = messageTopicName.substring(0,
                                           messageTopicName.indexOf("/") + 1);
        // Only first letter in topic name is capitalized
        messageTopicName = messageTopicName.substring(
                                           messageTopicName.indexOf("/") + 1);
        messageTopicName = messageTopicName.substring(0, 1).toUpperCase() +
                           messageTopicName.substring(1).toLowerCase();
        // Assign topic name and notify
        _topicName += messageTopicName;

        return true;
    }

    /**
     * Gets this subscriber's topic name
     *
     * @returns The topic name.
     */
    private String getMessageTopicName() {
        // Return topic name
        return _topicName;
    }

    /**
     * Displays application's use on console.
     */
    private void showParametersUse() {
        // Show application's use
        System.out.println("\nUse: JMSSubscriber topicName\n\nwhere:");
        System.out.println("    topicName       Topic name where messages " +
                           "will be received.");
        System.out.println("                    Possible values: " +
                           "'Shapes/Square', 'Shapes/Circle', or");
        System.out.println("                    'Shapes/Triangle'.");
    }

    /**
     * Application main entry point. Receives JMS messages and displays them
     * on the console.
     *
     * @param args      String array containing the command line parameters.
     */
    public static void main(String[] args) {
        // Input reader
        BufferedReader consoleInput =
                         new BufferedReader(new InputStreamReader(System.in));
        String textTyped;

        // Create the subscriber
        ShapesSubscriber jmsSubscriber = new ShapesSubscriber();

        // Read user's parameters
        if (!jmsSubscriber.readParameters(args)) {
            // Error on parameters. Display their use and exit
            jmsSubscriber.showParametersUse();

            return;
        }

        // Open subscriber's connections
        try {
            jmsSubscriber.openConnection();
        } catch (NamingException namingException) {
            // Report exception and exit
            System.out.println("Naming exception in initial context: " +
                               namingException.getMessage());
            namingException.printStackTrace();

            return;
        } catch (JMSException jmsException) {
            // Report exception and exit
            System.out.println("JMS exception while opening connection: " +
                               jmsException.getMessage());
            jmsException.printStackTrace();

            return;
        }

        // Tell the user that the subscriber is ready
        System.out.println("Ready to receive messages in \"" +
                           jmsSubscriber.getMessageTopicName() + "\" topic.");
        System.out.println("Received messages are displayed on console.");

        // JMS messages will be received asynchronously. Loop until user quits
        do {
            System.out.println("Type 'Exit' and then Enter to exit.");

            try {
                textTyped = consoleInput.readLine();
            } catch (IOException ioException) {
                // Report exception and exit
                System.out.println("I/O exception while reading input: " +
                                   ioException.getMessage());
                ioException.printStackTrace();

                break;
            }

            // Console input disconnected? (Not expected.)
            if (textTyped == null) {
                break;
            }
        } while (textTyped.compareToIgnoreCase("exit") != 0);

        // Close subscriber's connections
        try {
            jmsSubscriber.closeConnection();
            jmsSubscriber = null;
        } catch (JMSException jmsException) {
            // Report exception
            System.out.println("JMS exception while closing connection: " +
                               jmsException.getMessage());
            jmsException.printStackTrace();
        }
    }
}

/**
 * The SubscriberListener class implements the MessageListener interface to
 * receive JMS messages asynchronously.
 */
class SubscriberListener implements MessageListener {
    /** Message field name 1 */
    private static final String SUBSCRIBER_LISTENER_MESSAGE_FIELD_NAME_1 =
                                                                      "color";
    /** Message field name 2 */
    private static final String SUBSCRIBER_LISTENER_MESSAGE_FIELD_NAME_2 =
                                                                          "x";
    /** Message field name 3 */
    private static final String SUBSCRIBER_LISTENER_MESSAGE_FIELD_NAME_3 =
                                                                          "y";
    /** Message field name 4 */
    private static final String SUBSCRIBER_LISTENER_MESSAGE_FIELD_NAME_4 =
                                                                  "shapesize";

    /**
     * The one and only method of a Message Listener. It gets called when a
     * JMS Message arrives.
     *
     * @param message    Message received from JMS
     */
    public void onMessage(Message message) {
        String shapeColor;
        int xCoordinate;
        int yCoordinate;
        int shapeSize;

        // Is not a valid message?
        if (message == null) {
            // Notify and exit
            System.out.println("Timed out waiting for message");

            return;
        }

        // If it's a MapMessage, display its contents on console
        if (message instanceof MapMessage) {
            // Get Message as a MapMessage
            MapMessage jmsMessage = (MapMessage) message;

            try {
                // Get shape color
                shapeColor = jmsMessage.getString(
                                    SUBSCRIBER_LISTENER_MESSAGE_FIELD_NAME_1);
                // Get x coordinate
                xCoordinate = jmsMessage.getInt(
                                    SUBSCRIBER_LISTENER_MESSAGE_FIELD_NAME_2);
                // Get y coordinate
                yCoordinate = jmsMessage.getInt(
                                    SUBSCRIBER_LISTENER_MESSAGE_FIELD_NAME_3);
                // Get shape size
                shapeSize = jmsMessage.getInt(
                                    SUBSCRIBER_LISTENER_MESSAGE_FIELD_NAME_4);
            } catch (JMSException jmsException) {
                // Report exception and exit
                System.out.println("JMS exception while extracting message: "
                                   + jmsException.getMessage());
                jmsException.printStackTrace();

                return;
            }

            // Display shape color, size, and x and y coordinates
            System.out.println("Received Shape with color: " + shapeColor +
                               "; size: " + shapeSize + "; x: " + xCoordinate
                               + "; y: " + yCoordinate + ".");
        } else {
            // Notify that the Message received is not a MapMessage
            System.out.println("Error: JMS Message received is not a " +
                               "MapMessage. Message received: " + message);
        }
    }
}
