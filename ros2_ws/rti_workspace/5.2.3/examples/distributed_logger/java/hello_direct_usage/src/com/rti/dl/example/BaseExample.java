/* $Id$

           (c) Copyright, Real-Time Innovations, All rights reserved.
           Permission to modify and use for internal purposes granted.
    This software is provided "as is", without warranty, express or implied.
   
modification history:
--------------------- 
10a,05oct2011,krb  Added standard header.
=========================================================================== */

package com.rti.dl.example;

import com.rti.dl.DistLogger;

/**
 * This is the base class for the examples. It provides some simple 
 * infrastructure such as a shutdown thread to ensure that the Distributed
 * Logger is shutdown propertly.
 * @author RTI
 */
public abstract class BaseExample extends Thread {
    
    /*i
     * This field indicates whether this thread should continue to run or not.
     */
    protected boolean shouldRun;
    
    /**
     * This constructor adds the shutdown hook.
     */
    public BaseExample() {
        // add a shutdown hook to do a proper cleanup
        Runtime.getRuntime().addShutdownHook(new ShutdownThread());
        
        shouldRun = true;
    }
    
    /* (non-Javadoc)
     * @see java.lang.Thread#run()
     */
    public abstract void run();
    
    /**
     * This shutdown hook ensures that the Distributed Logger gets a chance to
     * clean up resources before exiting.
     * @author RTI
     */
    private class ShutdownThread extends Thread {
        public void run() {
            System.out.println("shutting down...");
            shouldRun = false;
            boolean forceQuit = false;
            try {
                // give the application a couple of seconds to finish up
                BaseExample.this.join(2000);
            } catch(InterruptedException ie) {
                forceQuit = true;
            }
            // ensure that the DDS resources are freed
            DistLogger.delete();
            if (forceQuit) {
                System.exit(-1);
            }
        }
    }
}
