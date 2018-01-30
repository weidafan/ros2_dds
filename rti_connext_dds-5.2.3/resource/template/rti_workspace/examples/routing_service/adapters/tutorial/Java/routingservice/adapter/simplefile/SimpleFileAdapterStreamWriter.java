/******************************************************************/
/*               Simple File Adapter Stream Writer                */
/******************************************************************/

package routingservice.adapter.simplefile;

import java.io.File;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.IOException;
import java.util.List;
import java.util.ListIterator;
import java.util.Properties;

import com.rti.dds.dynamicdata.DynamicData;
import com.rti.routingservice.adapter.StreamWriter;
import com.rti.routingservice.adapter.infrastructure.AdapterException;
import com.rti.routingservice.adapter.infrastructure.StreamInfo;


public class SimpleFileAdapterStreamWriter implements StreamWriter {
    private String verbosity = null;
    private String fileName = null;
    private boolean printToStdout;
    private BufferedWriter fileWriter = null;

    /**
     */
    private void parseProperties(Properties properties) {
        int printToStdoutInt;
        String printToStdoutStr;

        printToStdoutStr = properties.getProperty("print_to_stdout");

        if (printToStdoutStr == null) {
            printToStdout = false;
        } else {
            printToStdoutInt = new Integer(printToStdoutStr).intValue();

            if (printToStdoutInt != 0) {
                printToStdout = true;
            } else {
                printToStdout = false;
            }
        }
    }

    /**
     */
    SimpleFileAdapterStreamWriter(
        StreamInfo streamInfo,
        Properties properties,
        String directory,
        String verbosity) throws AdapterException 
    {
        this.verbosity = verbosity;
        parseProperties(properties);

        fileName = streamInfo.getStreamName() + ".txt";

        try {
            fileWriter = new BufferedWriter(new FileWriter(new File(directory,fileName)));	    
        } catch (IOException e) {
            throw new AdapterException(0, "error opening " + fileName);
        }
    }

    /**
     */
    void close() throws AdapterException {
        try {
            if (fileWriter != null) {
                fileWriter.close(); 
            }
        } catch (IOException e) {
            throw new AdapterException(0, "error closing " + fileName);
        }	
    }

    /**
     */
    public int write(List<Object> sampleList, List<Object> infoList)
        throws AdapterException 
    {
        String line;
        ListIterator<Object> iterator = sampleList.listIterator();
        DynamicData dynamicData = null;

        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".write");
        }

        try {
            while (iterator.hasNext()) {
                dynamicData = (DynamicData)iterator.next();
                line = dynamicData.get_string("value", DynamicData.MEMBER_ID_UNSPECIFIED);    
                fileWriter.write(line);
                fileWriter.newLine();
    
                if (printToStdout) {
                    System.out.println(line);
                }
            }
        } catch (IOException e) {
            throw new AdapterException(0, "error writing to file " + fileName, e);
        } catch (Exception e) {
            throw new AdapterException(0, "error writing", e);
        }

	return 0;
    }

    /**
     */
    public void update(Properties properties) throws AdapterException {
        parseProperties(properties);
    }
}
