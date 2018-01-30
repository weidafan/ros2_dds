/**
 *	Generated from IDL definition of struct "Message"
 *	@author JacORB IDL compiler 
 */

public final class MessageHolder
	implements org.omg.CORBA.portable.Streamable
{
	public Message value;

	public MessageHolder ()
	{
	}
	public MessageHolder(final Message initial)
	{
		value = initial;
	}
	public org.omg.CORBA.TypeCode _type ()
	{
		return MessageHelper.type ();
	}
	public void _read(final org.omg.CORBA.portable.InputStream _in)
	{
		value = MessageHelper.read(_in);
	}
	public void _write(final org.omg.CORBA.portable.OutputStream _out)
	{
		MessageHelper.write(_out, value);
	}
}
