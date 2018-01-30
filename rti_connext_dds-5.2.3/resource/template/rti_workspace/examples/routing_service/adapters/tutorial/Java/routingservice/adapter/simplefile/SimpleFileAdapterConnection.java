/******************************************************************/
/*               Simple File Adapter Connection                   */
/******************************************************************/

package routingservice.adapter.simplefile;

import java.util.Properties;
import com.rti.routingservice.adapter.Connection;
import com.rti.routingservice.adapter.Session;
import com.rti.routingservice.adapter.StreamReader;
import com.rti.routingservice.adapter.StreamReaderListener;
import com.rti.routingservice.adapter.StreamWriter;
import com.rti.routingservice.adapter.infrastructure.AdapterException;
import com.rti.routingservice.adapter.infrastructure.StreamInfo;

/**
 * Simple file connection.
 */
public class SimpleFileAdapterConnection implements Connection {
    private String verbosity;
    private String directory = null;

    /**
    */
    SimpleFileAdapterConnection(Properties properties, String verbosity) 
        throws AdapterException
    {
        this.verbosity = verbosity;

        directory = properties.getProperty("directory");

        if (directory == null) {
            throw new AdapterException(0, "directory property is required");
        }
    }

    /**
    */
    public Session createSession(Properties properties) 
        throws AdapterException {

        /* We don't need a session for the simple file adapter, but 
	   we cannot return null */
        return new Session() {
            public void update(Properties props) throws AdapterException {
                // do nothing
            }
        };
    }

    /**
    */
    public void deleteSession(Session session) throws AdapterException {
        // do nothing
    }

    /**
     */
    public StreamReader createStreamReader(
        Session session,
        StreamInfo streamInfo,
        Properties properties,
        StreamReaderListener listener) throws AdapterException 
    {
        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".createStreamReader");
        }

        return new SimpleFileAdapterStreamReader(
                    listener, streamInfo,
                    properties, directory,
                    verbosity);
    }

    /**
    */
    public void deleteStreamReader(StreamReader streamReader)
        throws AdapterException 
    {
        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".deleteStreamReader");
        }

        ((SimpleFileAdapterStreamReader)streamReader).close();
    }

    /**
    */
    public StreamWriter createStreamWriter(
        Session session,
        StreamInfo streamInfo,
        Properties properties) throws AdapterException 
    {
        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".createStreamWriter");
        }

        return new SimpleFileAdapterStreamWriter(
                    streamInfo,
                    properties,
                    directory,
                    verbosity);
    }

    /**
    */
    public void deleteStreamWriter(StreamWriter streamWriter)
        throws AdapterException 
    {
        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".deleteStreamWriter");
        }

        ((SimpleFileAdapterStreamWriter)streamWriter).close();
    }

    /**
    */
    public Properties getAttributes() throws AdapterException {
        throw new AdapterException(0, "operation not supported");
    }

    /**
    */
    public void update(Properties properties) throws AdapterException {
        // do nothing
    }
}
