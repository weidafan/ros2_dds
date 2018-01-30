/**
 *	Generated from IDL interface "MessageReceiver"
 *	@author JacORB IDL compiler V 2.2.3, 10-Dec-2005
 */

public abstract class MessageReceiverPOA
	extends org.omg.PortableServer.Servant
	implements org.omg.CORBA.portable.InvokeHandler, MessageReceiverOperations
{
	static private final java.util.Hashtable m_opsHash = new java.util.Hashtable();
	static
	{
		m_opsHash.put ( "sendMessage", new java.lang.Integer(0));
	}
	private String[] ids = {"IDL:MessageReceiver:1.0"};
	public MessageReceiver _this()
	{
		return MessageReceiverHelper.narrow(_this_object());
	}
	public MessageReceiver _this(org.omg.CORBA.ORB orb)
	{
		return MessageReceiverHelper.narrow(_this_object(orb));
	}
	public org.omg.CORBA.portable.OutputStream _invoke(String method, org.omg.CORBA.portable.InputStream _input, org.omg.CORBA.portable.ResponseHandler handler)
		throws org.omg.CORBA.SystemException
	{
		org.omg.CORBA.portable.OutputStream _out = null;
		// do something
		// quick lookup of operation
		java.lang.Integer opsIndex = (java.lang.Integer)m_opsHash.get ( method );
		if ( null == opsIndex )
			throw new org.omg.CORBA.BAD_OPERATION(method + " not found");
		switch ( opsIndex.intValue() )
		{
			case 0: // sendMessage
			{
				Message _arg0=MessageHelper.read(_input);
				_out = handler.createReply();
				sendMessage(_arg0);
				break;
			}
		}
		return _out;
	}

	public String[] _all_interfaces(org.omg.PortableServer.POA poa, byte[] obj_id)
	{
		return ids;
	}
}
