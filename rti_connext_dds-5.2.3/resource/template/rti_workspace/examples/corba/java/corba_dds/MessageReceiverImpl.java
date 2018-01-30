/* 
 (c) Copyright, Real-Time Innovations, 10/01/2006 
 All rights reserved.
 No duplications, whole or partial, manual or electronic, may be made
 without express written permission.  Any such copies, or
 revisions thereof, must display this notice unaltered.
 This code contains trade secrets of Real-Time Innovations, Inc.

===================================================================== */

public class MessageReceiverImpl extends MessageReceiverPOA {
    public boolean close;

    MessageReceiverImpl() {
        close = false;
    }

    public void sendMessage(Message msg)
    {
        if (msg.msg.equals("quit")) {
            close = true;
            return;
        }

        System.out.println(
            "[" + msg.time.month + "/" + 
                  msg.time.day + "/" +
                  msg.time.year + " " +
                  msg.time.hour + ":" +
                  msg.time.minute + ":" +
                  msg.time.second +
            "] " + msg.msg);
    }
}

