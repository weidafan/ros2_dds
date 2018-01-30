/******************************************************************/
/*               Simple File Adapter Stream Reader                */
/******************************************************************/

package routingservice.adapter.simplefile;

import java.io.File;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.List;
import java.util.Properties;

import com.rti.dds.dynamicdata.DynamicData;
import com.rti.dds.typecode.TypeCode;
import com.rti.routingservice.adapter.StreamReader;
import com.rti.routingservice.adapter.StreamReaderListener;
import com.rti.routingservice.adapter.infrastructure.AdapterException;
import com.rti.routingservice.adapter.infrastructure.StreamInfo;

public class SimpleFileAdapterStreamReader implements StreamReader {
    private String verbosity;
    private int readPeriod;
    private String fileName = null;
    private BufferedReader fileReader = null;
    private NotificationThread notificationThread = null;
    private DynamicData dynamicData = null;

    /**
     */
    private void parseProperties(Properties properties) {
        String readPeriodStr;

        readPeriodStr = properties.getProperty("read_period");

        if (readPeriodStr == null) {
            readPeriod = 1000;
        } else {
            readPeriod = new Integer(readPeriodStr).intValue();
        }
    }

    /**
     */
    SimpleFileAdapterStreamReader(
        StreamReaderListener listener,
        StreamInfo streamInfo,
        Properties properties,
        String directory,
        String verbosity) throws AdapterException 
    {
        this.verbosity = verbosity;
        parseProperties(properties);
        fileName = streamInfo.getStreamName() + ".txt";

        try {
            fileReader = new BufferedReader(new FileReader(new File(directory,fileName)));	    
        } catch (IOException e) {
            throw new AdapterException(0, "error opening " + fileName);
        }

        dynamicData = new DynamicData(
            (TypeCode)streamInfo.getTypeInfo().getTypeRepresentation(),
            DynamicData.PROPERTY_DEFAULT);

        notificationThread = new NotificationThread(this, listener);
        notificationThread.start();
    }

    /**
     */
    void close() throws AdapterException {
        try {
            notificationThread.terminate();
            notificationThread.join();

            if (fileReader != null) {
                fileReader.close(); 
            }
        } catch (InterruptedException e) {
            throw new AdapterException(0, "error finishing notification thread");
        } catch (IOException e) {
            throw new AdapterException(0, "error closing " + fileName);
        }	
    }

    /**
     */
    public void read(List<Object> sampleList, List<Object> infoList)
        throws AdapterException 
    {
        String line;

        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".read");
        }

        try {
            sampleList.clear();
            infoList.clear();
            dynamicData.clear_all_members();

            if (fileReader.ready()) {
                line = fileReader.readLine();
                dynamicData.set_string("value",
                                       DynamicData.MEMBER_ID_UNSPECIFIED,
                                       line);
                sampleList.add(dynamicData);
            }
        } catch (IOException e) {
            throw new AdapterException(0, "error reading from file " + fileName, e);
        } catch (Exception e) {
            throw new AdapterException(0, "error reading", e);
        }
    }

    /**
     */
    public void returnLoan(List<Object> sampleList, List<Object> infoList)
        throws AdapterException 
    {
        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".returnLoan");
        }
    }

    /**
     */
    public void update(Properties properties) throws AdapterException {
        parseProperties(properties);
        notificationThread.setNotificationPeriod(readPeriod);
    }

    /**
     * Notification thread
     * 
     * This thread will notify of data availability in the file.
     */
    class NotificationThread extends Thread {
        private int notificationPeriod;
        private boolean _terminate;
        private StreamReaderListener listener = null;
        private StreamReader streamReader = null;

        /**
        */
        NotificationThread(StreamReader streamReader,
                           StreamReaderListener listener) {
            this.listener = listener;
            this.notificationPeriod = readPeriod;
            this.streamReader = streamReader;
            _terminate = false;
        }

        /**
        */
        @Override
        public void run() {
            while (!_terminate) {
                try {
                    Thread.sleep(notificationPeriod);

                    if (fileReader.ready()) {
                        listener.onDataAvailable(streamReader);
                    }
                } catch (InterruptedException e) {
                    _terminate = true;
                } catch (IOException iox) {
                    throw new java.lang.IllegalStateException(
                            "Unable to read file", iox);
                }
            }
        }

        /**
        */
        public void terminate() {
            _terminate = true;
        }

        /**
         */
        public void setNotificationPeriod(int period) {
            notificationPeriod = period;
        }
    }
}
