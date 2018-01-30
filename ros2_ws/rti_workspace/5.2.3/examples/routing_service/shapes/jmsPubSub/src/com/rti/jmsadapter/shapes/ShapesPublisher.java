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
import javax.jms.TopicPublisher;
import javax.jms.TopicSession;
import javax.jms.MapMessage;
import javax.naming.InitialContext;
import javax.naming.NamingException;

/**
 * The publisher class sends MapMessages in topics "Shapes/Square",
 * "Shapes/Circle", or "Shapes/Triangle" to JMS subscribers.
 */
public class ShapesPublisher {
    /** Connection factory name */
    private static final String SHAPES_PUBLISHER_CONNECTION_FACTORY =
                                                   "Shapes/ConnectionFactory";

    /*
     *
     * For OpenJMS use:
     *
     *
     private static final String SHAPES_PUBLISHER_CONNECTION_FACTORY =
                                                   "JmsTopicConnectionFactory";
     */

    /** Message field name 1 */
    private static final String SHAPES_PUBLISHER_MESSAGE_FIELD_NAME_1 =
                                                                      "color";
    /** Message field name 2 */
    private static final String SHAPES_PUBLISHER_MESSAGE_FIELD_NAME_2 = "x";
    /** Message field name 3 */
    private static final String SHAPES_PUBLISHER_MESSAGE_FIELD_NAME_3 = "y";
    /** Message field name 4 */
    private static final String SHAPES_PUBLISHER_MESSAGE_FIELD_NAME_4 =
                                                                  "shapesize";
    /** Topic namespace */
    private static final String SHAPES_PUBLISHER_TOPIC_NAMESPACE = "Shapes/";
    /** Topic name 1 */
    private static final String SHAPES_PUBLISHER_TOPIC_SQUARE = "Square";
    /** Topic name 2 */
    private static final String SHAPES_PUBLISHER_TOPIC_CIRCLE = "Circle";
    /** Topic name 3 */
    private static final String SHAPES_PUBLISHER_TOPIC_TRIANGLE = "Triangle";
    /** Color value 1 */
    private static final String SHAPES_PUBLISHER_COLOR_PURPLE = "Purple";
    /** Color value 2 */
    private static final String SHAPES_PUBLISHER_COLOR_BLUE = "Blue";
    /** Color value 3 */
    private static final String SHAPES_PUBLISHER_COLOR_RED = "Red";
    /** Color value 4 */
    private static final String SHAPES_PUBLISHER_COLOR_GREEN = "Green";
    /** Color value 5 */
    private static final String SHAPES_PUBLISHER_COLOR_YELLOW = "Yellow";
    /** Color value 6 */
    private static final String SHAPES_PUBLISHER_COLOR_CYAN = "Cyan";
    /** Color value 7 */
    private static final String SHAPES_PUBLISHER_COLOR_MAGENTA = "Magenta";
    /** Color value 8 */
    private static final String SHAPES_PUBLISHER_COLOR_ORANGE = "Orange";
    /** Minimum value for message field 4 */
    private static final int SHAPES_PUBLISHER_MIN_MESSAGE_FIELD_4_VALUE = 1;
    /** Maximum value for message field 4 */
    private static final int SHAPES_PUBLISHER_MAX_MESSAGE_FIELD_4_VALUE = 40;
    /** Interval between Shapes messages */
    private static final long SHAPES_PUBLISHER_SEND_MESSAGE_INTERVAL = 500;

    /** Connects to a JMS middleware server */
    private TopicConnection _serverConnection;
    /** Establishes a Session with a JMS middleware topic server */
    private TopicSession _topicSession;
    /** Creates a topic for messages */
    private Topic _mesasgeTopic;
    /** Publishes messages with a given topic */
    private TopicPublisher _messagePublisher;
    /** Topic Name entered by user */
    private String _topicName;
    /** Shape Color entered by user */
    private String _messageColor;
    /** Shape Size entered by user */
    private int _messageShapeSize;

    /**
     * Constructor. Initializes class members
     */
    public ShapesPublisher() {
        _serverConnection = null;
        _topicSession = null;
        _mesasgeTopic = null;
        _messagePublisher = null;
    }

    /**
     * Creates connection, session, topic, and publisher objects with this
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
                  specificContext.lookup(SHAPES_PUBLISHER_CONNECTION_FACTORY);

        // Create a connection with the JMS middleware server
        _serverConnection = topicConnectionFactory.createTopicConnection();

        // Get the desired Topic instance
        _mesasgeTopic = (Topic) specificContext.lookup(_topicName);

        // Create a Topic Session with the JMS middleware server
        _topicSession = _serverConnection.createTopicSession(false,
                                               TopicSession.AUTO_ACKNOWLEDGE);

        // Open JMS connection and start using it
        _serverConnection.start();

        // Create the Publisher object with the created Session and Topic
        _messagePublisher = _topicSession.createPublisher(_mesasgeTopic);
    }

    /**
     * Closes connection, session, topic, and publisher objects if they are
     * open and sets them to null.
     *
     * @throws JMSException     If a JMS connection or object couldn't
     *                          be created.
     * @throws NamingException  If there is no initial context or it does not
     *                          contain the connection factory or topic.
     */
    private void closeConnection() throws JMSException {
        // Close Publisher
        if (_messagePublisher != null) {
            _messagePublisher.close();
            _messagePublisher = null;
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
     * Sends a JMS MapMessage in the established session with the created
     * topic.
     *
     * @param xCoordinate       The x coordinate to send in a JMS message.
     * @param yCoordinate       The y coordinate to send in a JMS message.
     *
     * @throws JMSException     If a JMS object couldn't be created or the
     *                          message couldn't be sent.
     */
    public void sendMessage(int xCoordinate,
                             int yCoordinate) throws JMSException {
        // Create an empty MapMessage
        MapMessage jmsMessage = _topicSession.createMapMessage();
        // Add first message field: color
        jmsMessage.setString(SHAPES_PUBLISHER_MESSAGE_FIELD_NAME_1,
                                                               _messageColor);
        // Add second message field: the x coordinate
        jmsMessage.setInt(SHAPES_PUBLISHER_MESSAGE_FIELD_NAME_2, xCoordinate);
        // Add third message field: the y coordinate
        jmsMessage.setInt(SHAPES_PUBLISHER_MESSAGE_FIELD_NAME_3, yCoordinate);
        // Add fourth message field: the shape size
        jmsMessage.setInt(SHAPES_PUBLISHER_MESSAGE_FIELD_NAME_4,
                                                           _messageShapeSize);
        // Send message
        _messagePublisher.publish(jmsMessage);
    }

    /**
     * Parses the parameters set by the user and sets them to be used in
     * the messages sent by this publisher.
     *
     * @param params    String array containing the command line parameters.
     *                  First parameter: Topic name (Shapes/Square,
     *                  Shapes/Circle, or Shapes/Triangle).
     *                  Second parameter: Shape color (Purple, Blue, Red,
     *                  Green, Yellow, Cyan, Magenta, or Orange).
     *                  Third parameter: Shape size (1 to 40 pixels).
     *
     * @returns         A boolean value with true if the parameters were read
     *                  or false if one or more parameters were invalid.
     */
    private boolean readParameters(String[] params) {
        // Check if only needed parameters were provided
        if (params.length != 3) {
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

        // Set a valid shape color
        if (!setMessageColor(params[1])) {
            // Notify and exit
            System.out.println("Error: invalid shape color.");

            return false;
        }

        // Set a valid shape size
        if (!setMessageShapeSize(params[2])) {
            // Notify and exit
            System.out.println("Error: invalid shape size.");

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
                                       SHAPES_PUBLISHER_TOPIC_SQUARE) != 0) &&
            (messageTopicName.compareToIgnoreCase(
                                       SHAPES_PUBLISHER_TOPIC_NAMESPACE +
                                       SHAPES_PUBLISHER_TOPIC_CIRCLE) != 0) &&
            (messageTopicName.compareToIgnoreCase(
                                     SHAPES_PUBLISHER_TOPIC_NAMESPACE +
                                     SHAPES_PUBLISHER_TOPIC_TRIANGLE) != 0)) {
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
     * Gets this publisher's topic name
     *
     * @returns The topic name.
     */
    private String getMessageTopicName() {
        // Return topic name
        return _topicName;
    }

    /**
     * Validates and sets user's shape color.
     *
     * @param messageColor      Color entered by user.
     *
     * @returns                 A boolean value with true if shape color was
     *                          set or false if it has an invalid value.
     */
    private boolean setMessageColor(String messageColor) {
        // Check if it's a valid color
        if ((messageColor.compareToIgnoreCase(
                                       SHAPES_PUBLISHER_COLOR_PURPLE) != 0) &&
            (messageColor.compareToIgnoreCase(
                                       SHAPES_PUBLISHER_COLOR_BLUE) != 0) &&
            (messageColor.compareToIgnoreCase(
                                       SHAPES_PUBLISHER_COLOR_RED) != 0) &&
            (messageColor.compareToIgnoreCase(
                                       SHAPES_PUBLISHER_COLOR_GREEN) != 0) &&
            (messageColor.compareToIgnoreCase(
                                       SHAPES_PUBLISHER_COLOR_YELLOW) != 0) &&
            (messageColor.compareToIgnoreCase(
                                       SHAPES_PUBLISHER_COLOR_CYAN) != 0) &&
            (messageColor.compareToIgnoreCase(
                                      SHAPES_PUBLISHER_COLOR_MAGENTA) != 0) &&
            (messageColor.compareToIgnoreCase(
                                       SHAPES_PUBLISHER_COLOR_ORANGE) != 0)) {
            // Invalid color
            return false;
        }

        // Upper case only
        messageColor = messageColor.toUpperCase();

        // Assign and notify
        _messageColor = messageColor;

        return true;
    }

    /**
     * Gets the messages' shape color
     *
     * @returns The shape color.
     */
    private String getMessageColor() {
        // Return message color
        return _messageColor;
    }

    /**
     * Validates and sets the user's shape size.
     *
     * @param messageShapeSize  Shape size entered by user.
     *
     * @returns                 A boolean value with true if shape size was
     *                          set or false if it has an invalid value.
     */
    private boolean setMessageShapeSize(String messageShapeSize) {
        int shapeSize;

        // Get the integer value
        try {
            shapeSize = Integer.parseInt(messageShapeSize);
        } catch (NumberFormatException numberException) {
            // Invalid size
            return false;
        }

        // Check if it's a valid size
        if (shapeSize < SHAPES_PUBLISHER_MIN_MESSAGE_FIELD_4_VALUE ||
            shapeSize > SHAPES_PUBLISHER_MAX_MESSAGE_FIELD_4_VALUE) {
            // Invalid size
            return false;
        }

        // Assign and notify
        _messageShapeSize = shapeSize;

        return true;
    }

    /**
     * Gets the messages' shape size
     *
     * @returns The shape size.
     */
    private int getMessageShapeSize() {
        // Return shape size
        return _messageShapeSize;
    }

    /**
     * Displays application's use on console.
     */
    private void showParametersUse() {
        // Show application's use
        System.out.println("\nUse: JMSPublisher topicName shapeColor " +
                           "shapeSize\n");
        System.out.println("where:");
        System.out.println("    topicName       Topic name where messages " +
                           "will be sent.");
        System.out.println("                    Possible values: " +
                           "'Shapes/Square', 'Shapes/Circle', or");
        System.out.println("                    'Shapes/Triangle'.");
        System.out.println("    shapeColor      Color of the shape to be " +
                           "sent.");
        System.out.println("                    Possible values: 'Purple', " +
                           "'Blue', 'Red', 'Green',");
        System.out.println("                    'Yellow', 'Cyan', 'Magenta'" +
                           ", or 'Orange'.");
        System.out.println("    shapeSize       Size, in pixels, of the " +
                           "shape to be sent (" +  
                           SHAPES_PUBLISHER_MIN_MESSAGE_FIELD_4_VALUE + " to "
                           + SHAPES_PUBLISHER_MAX_MESSAGE_FIELD_4_VALUE + 
                           ").\n");
    }

    /**
     * Application main entry point. Captures typed text and send it in JMS
     * messages.
     *
     * @param args      String array containing the command line parameters.
     */
    public static void main(String[] args) {
        // Input reader
        BufferedReader consoleInput =
                         new BufferedReader(new InputStreamReader(System.in));
        String textTyped;
        SendRandomShapes shapesSender;
        Thread shapesThread;

        // Create the publisher
        ShapesPublisher jmsPublisher = new ShapesPublisher();

        // Read user's parameters
        if (!jmsPublisher.readParameters(args)) {
            // Error on parameters. Display their use and exit
            jmsPublisher.showParametersUse();

            return;
        }

        // Open publisher's connections
        try {
            jmsPublisher.openConnection();
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

        // Tell user that connection is ready
        System.out.println("Ready to send messages in \"" +
                           jmsPublisher.getMessageTopicName() + "\" topic.");
        System.out.println("Sending Shape messages with " +
                           jmsPublisher.getMessageColor() + " color and " +
                           jmsPublisher.getMessageShapeSize() +
                           "-pixel size.");

        // Send random messages
        shapesSender = new SendRandomShapes(jmsPublisher,
                                      SHAPES_PUBLISHER_SEND_MESSAGE_INTERVAL);
        shapesThread = new Thread(shapesSender);
        shapesThread.start();

        // JMS messages are sent by other thread. Loop until user quits
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

        // Done sending messages
        shapesThread.interrupt();

        // Close publisher's connections
        try {
            jmsPublisher.closeConnection();
            jmsPublisher = null;
        } catch (JMSException jmsException) {
            // Report exception
            System.out.println("JMS exception while closing connection: " +
                               jmsException.getMessage());
            jmsException.printStackTrace();
        }
    }
}

/**
 * The SendRandomShapes class sends Shape messages with a given Publisher at a
 * given frequency.
 */
class SendRandomShapes implements Runnable {
    /** Minimum value for x coordinate */
    private static final int SEND_RANDOM_SHAPES_MIN_X_VALUE = 0;
    /** Maximum value for x coordinate */
    private static final int SEND_RANDOM_SHAPES_MAX_X_VALUE = 210;
    /** Minimum value for y coordinate */
    private static final int SEND_RANDOM_SHAPES_MIN_Y_VALUE = 0;
    /** Maximum value for y coordinate */
    private static final int SEND_RANDOM_SHAPES_MAX_Y_VALUE = 260;
    /** JMS Publisher */
    private ShapesPublisher _jmsPublisher;
    /** Frequency to send messages */
    private long _timeBetweenMessages;

    /**
     * Constructor. Sets publisher and message frequency.
     *
     * @param publisher       The JMS Publisher to use to send Shape messages.
     * @param frequency       The milliseconds to wait between messages.
     */
    public SendRandomShapes(ShapesPublisher publisher, long frequency) {
        _jmsPublisher = publisher;
        _timeBetweenMessages = frequency;
    }

    /**
     * Main thread method. Sends Shape messages with the publisher and
     * frequency provided until thread is interrupted.
     */
    public void run() {
        int xCoordinate;
        int yCoordinate;

        try {
            for (;;) {
                // Create random coordinates
                xCoordinate = ((int) (Math.random() *
                                      ((SEND_RANDOM_SHAPES_MAX_X_VALUE -
                                        SEND_RANDOM_SHAPES_MIN_X_VALUE) + 1)))
                              + SEND_RANDOM_SHAPES_MIN_X_VALUE;
                yCoordinate = ((int) (Math.random() *
                                      ((SEND_RANDOM_SHAPES_MAX_Y_VALUE -
                                        SEND_RANDOM_SHAPES_MIN_Y_VALUE) + 1)))
                              + SEND_RANDOM_SHAPES_MIN_Y_VALUE;

                // Send random message
                _jmsPublisher.sendMessage(xCoordinate, yCoordinate);

                // Notify message sent
                System.out.println("Message sent with coordinates x: " +
                                   xCoordinate + "; y: " + yCoordinate + ".");

                // Wait between messages
                Thread.sleep(_timeBetweenMessages);
            }
        } catch (InterruptedException threadInterrupted) {
            // Exit
            return;
        } catch (JMSException jmsException) {
            // Report exception and exit
            System.out.println("JMS exception while publishing message: " +
                               jmsException.getMessage());
            jmsException.printStackTrace();

            return;
        }
    }
}
