/******************************************************************/
/*                    Simple File Adapter                         */
/******************************************************************/

package routingservice.adapter.simplefile;

import com.rti.routingservice.adapter.Adapter;
import com.rti.routingservice.adapter.Connection;
import com.rti.routingservice.adapter.StreamReaderListener;
import com.rti.routingservice.adapter.infrastructure.AdapterException;
import com.rti.routingservice.adapter.infrastructure.Version;
import java.util.Properties;

/**
 * Simple file adapter.
 */
public class SimpleFileAdapter implements Adapter {
    String verbosity;

    /**
     * Entry point to the adapter.
     */
    public SimpleFileAdapter(Properties props) {
        verbosity = props.getProperty("rti.routingservice.verbosity");

        if (verbosity.equals("debug")) {
            System.out.println("CREATE " + getClass().getName());
        }
    }

    /**
     */
    public Connection createConnection(
        String routingServiceName,
        String routingServiceGroupName,
        StreamReaderListener inputStreamDiscoveryListener,
        StreamReaderListener outputStreamDiscoveryListener,
        Properties properties) throws AdapterException 
    {
        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".createConnection");
        }

        return new SimpleFileAdapterConnection(properties, verbosity);
    }

    /**
     */
    public void deleteConnection(Connection connection)
        throws AdapterException 
    {
        if (verbosity.equals("debug")) {
            System.out.println("CALL " + getClass().getName() + ".deleteConnection");
        }
    }

    /**
     * Returns the adapter version.
     */
    public Version getVersion() {
        return new Version(1,0,0,0);
    }
}

