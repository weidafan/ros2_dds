/* 
 (c) Copyright, Real-Time Innovations, 10/01/2006 
 All rights reserved.
 No duplications, whole or partial, manual or electronic, may be made
 without express written permission.  Any such copies, or
 revisions thereof, must display this notice unaltered.
 This code contains trade secrets of Real-Time Innovations, Inc.

 The purpose of the following application is to show how CORBA and RTI DDS
 can share a common set of types and coexist inside the same application.

 The application is a messaging application where a client (sender)
 sends text messages to a CORBA server and a RTI DDS subscriber.

 To run the messaging application open three shells:

 In the first shell run the CORBA server:

 > gmake -f <makefile> ARGS="-cr Message.ior"

 In the second window run the RTI DDS subscriber:

 > gmake -f <makefile> ARGS="-nr <domainId>"

 In the thrid window run the Client/Sender:

 > gmake -f <makefile> ARGS="-s Message.ior <domainId>"

 The sender is an interactive application. When you run it the prompt
 '>sender' appears on the screen. Any message that you write will
 be send to the CORBA and RTI DDS servers. Those servers will print that
 message along with a timestamp on the screen.

===================================================================== */

import java.util.*;
import java.io.*;
import org.omg.CORBA.ORB;
import org.omg.PortableServer.POA;
import org.omg.PortableServer.POAHelper;

/******************************************************************************
******************************************************************************/

public class MessageApp {
    /* Usage */
    private static void usage(){
        System.out.println(
            "gmake -f <makefile> ARGS=\"<OPTIONS>\":\n" +
            "OPTIONS:\n" +
            "       -cr <receiver object reference file>: Run CORBA message receiver.\n" +
            "       -nr <domainId>: Run RTI DDS message receiver within specified domain.\n" +
            "       -s <receiver object reference file> <domainId>: Run client used to send messages to CORBA and RTI DDS receivers within specified domain.\n"
        );     
    }

    /* Main function */
    public static void main(String[] args) {
        int domainId = 0;

        if (args.length < 1){
            usage();
            return;
        }

        // Properties that will be used to configured the ORB of the application
        Properties p = new Properties();
        p.put("org.omg.CORBA.ORBClass", "org.jacorb.orb.ORB");
        p.put("org.omg.CORBA.ORBSingletonClass", "org.jacorb.orb.ORBSingleton");

        if (args[0].equals("-nr")) {
            /* Run DDS subscriber */
            domainId = Integer.valueOf(args[1]).intValue();
            MessageDDSSubscriber ddsSubscriber = new MessageDDSSubscriber(domainId);

            if (!ddsSubscriber.run()) {
                System.out.println("Error running RTI DDS subscriber");
            }
            
        } else if (args[0].equals("-cr")) {

            if (args.length != 2) {
                usage();
                return;
            }

            /* start up the ORB */
            try
            {
                File iorFile = new File(args[1]);
                ORB theOrb = ORB.init(args, p);
                POA poa = POAHelper.narrow(
                        theOrb.resolve_initial_references("RootPOA"));

                poa.the_POAManager().activate();
                MessageReceiverImpl msgReceiver = new MessageReceiverImpl();
                org.omg.CORBA.Object o = poa.servant_to_reference(
                        msgReceiver);

                // write the object reference to args[0]
                PrintWriter ps = new PrintWriter(
                        new FileOutputStream(iorFile));
                ps.println( theOrb.object_to_string( o ) );
                ps.close();

                System.out.println("CORBA Servant is now ready to receive requests...");

                while(!msgReceiver.close){
                    if (theOrb.work_pending()){
                        theOrb.perform_work();
                    } else {
                        Thread.sleep(10);
                    }
                }
                   
                theOrb.shutdown(true);
            } catch ( Exception e ) {
                System.out.println(e.getMessage());
            }

        } else {
            Calendar calendar = null;
            boolean end = false;

            /* Run Sender/Client */
            if (args.length != 3) {
                usage();
                return;
            }

            try {
                BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

                /* Initializes DDS publisher */
                domainId = Integer.valueOf(args[2]).intValue();
                MessageDDSPublisher ddsPublisher = new MessageDDSPublisher(domainId);
                Message msg = new Message();
                msg.time = new DateTime();

                if (!ddsPublisher.start()) {
                    throw new Exception("Error starting DDS publisher");
                }

                /* Initializes CORBA */
                ORB theOrb = ORB.init(args, p);

                /* Load the IOR string */
                File iorFile = new File(args[1]);
                BufferedReader iorReader = new BufferedReader(new FileReader(iorFile));
                String ior = iorReader.readLine();
                iorReader.close();

                MessageReceiver corbaReceiver = MessageReceiverHelper.narrow(
                                    theOrb.string_to_object(ior));
           
                while (!end) {
                    System.out.print("sender> ");
                    msg.msg = in.readLine();

                    if (!msg.msg.equals("")) {
                        calendar = new GregorianCalendar();
                        msg.time.month = calendar.get(Calendar.MONTH) + 1;
                        msg.time.day = calendar.get(Calendar.DAY_OF_MONTH);
                        msg.time.year = calendar.get(Calendar.YEAR);
                        msg.time.hour = calendar.get(Calendar.HOUR_OF_DAY);
                        msg.time.minute = calendar.get(Calendar.MINUTE);
                        msg.time.second = calendar.get(Calendar.SECOND);

                        if (!ddsPublisher.publish(msg)) {
                            throw new Exception("Error publishing to DDS");
                        }

                        corbaReceiver.sendMessage(msg);

                        if (msg.msg.equals("quit")) {
                            end = true;
                        }
                    }
                }

                Thread.sleep(1000);
                ddsPublisher.stop();

            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
    }
}

