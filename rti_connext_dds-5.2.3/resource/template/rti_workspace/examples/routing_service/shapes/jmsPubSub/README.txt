This example JMS application is configured to run with RTI Messaging Service
as the JMS provider.

To run with a different provider, such as OpenJMS:

1) Use an appropriate jndi.properties file (for example, rename
   jndi.properties to jndi_rti.properties and rename jndi_openjms.properties
   to jndi.properties).
2) You may also need to modify the source code (ShapesPublisher.java and
   ShapesSubscriber.java) to use the right connection factory name. Look for
   SHAPES_PUBLISHER_CONNECTION_FACTORY and
   SHAPES_SUBSCRIBER_CONNECTION_FACTORY.
