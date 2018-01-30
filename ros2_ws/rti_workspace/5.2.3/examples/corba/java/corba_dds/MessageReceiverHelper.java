/**
 *	Generated from IDL interface "MessageReceiver"
 *	@author JacORB IDL compiler V 2.2.3, 10-Dec-2005
 */

public final class MessageReceiverHelper
{
	public static void insert (final org.omg.CORBA.Any any, final MessageReceiver s)
	{
			any.insert_Object(s);
	}
	public static MessageReceiver extract(final org.omg.CORBA.Any any)
	{
		return narrow(any.extract_Object()) ;
	}
	public static org.omg.CORBA.TypeCode type()
	{
		return org.omg.CORBA.ORB.init().create_interface_tc("IDL:MessageReceiver:1.0", "MessageReceiver");
	}
	public static String id()
	{
		return "IDL:MessageReceiver:1.0";
	}
	public static MessageReceiver read(final org.omg.CORBA.portable.InputStream in)
	{
		return narrow(in.read_Object());
	}
	public static void write(final org.omg.CORBA.portable.OutputStream _out, final MessageReceiver s)
	{
		_out.write_Object(s);
	}
	public static MessageReceiver narrow(final java.lang.Object obj)
	{
		if (obj instanceof MessageReceiver)
		{
			return (MessageReceiver)obj;
		}
		else if (obj instanceof org.omg.CORBA.Object)
		{
			return narrow((org.omg.CORBA.Object)obj);
		}
		throw new org.omg.CORBA.BAD_PARAM("Failed to narrow in helper");
	}
	public static MessageReceiver narrow(final org.omg.CORBA.Object obj)
	{
		if (obj == null)
			return null;
		try
		{
			return (MessageReceiver)obj;
		}
		catch (ClassCastException c)
		{
			if (obj._is_a("IDL:MessageReceiver:1.0"))
			{
				_MessageReceiverStub stub;
				stub = new _MessageReceiverStub();
				stub._set_delegate(((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate());
				return stub;
			}
		}
		throw new org.omg.CORBA.BAD_PARAM("Narrow failed");
	}
	public static MessageReceiver unchecked_narrow(final org.omg.CORBA.Object obj)
	{
		if (obj == null)
			return null;
		try
		{
			return (MessageReceiver)obj;
		}
		catch (ClassCastException c)
		{
				_MessageReceiverStub stub;
				stub = new _MessageReceiverStub();
				stub._set_delegate(((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate());
				return stub;
		}
	}
}
