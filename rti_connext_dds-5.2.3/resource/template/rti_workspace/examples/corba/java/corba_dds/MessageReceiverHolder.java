/**
 *	Generated from IDL interface "MessageReceiver"
 *	@author JacORB IDL compiler V 2.2.3, 10-Dec-2005
 */

public final class MessageReceiverHolder	implements org.omg.CORBA.portable.Streamable{
	 public MessageReceiver value;
	public MessageReceiverHolder()
	{
	}
	public MessageReceiverHolder (final MessageReceiver initial)
	{
		value = initial;
	}
	public org.omg.CORBA.TypeCode _type()
	{
		return MessageReceiverHelper.type();
	}
	public void _read (final org.omg.CORBA.portable.InputStream in)
	{
		value = MessageReceiverHelper.read (in);
	}
	public void _write (final org.omg.CORBA.portable.OutputStream _out)
	{
		MessageReceiverHelper.write (_out,value);
	}
}
