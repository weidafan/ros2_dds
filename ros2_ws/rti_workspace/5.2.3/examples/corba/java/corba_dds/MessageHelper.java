/**
 *	Generated from IDL definition of struct "Message"
 *	@author JacORB IDL compiler 
 */

public final class MessageHelper
{
	private static org.omg.CORBA.TypeCode _type = null;
	public static org.omg.CORBA.TypeCode type ()
	{
		if (_type == null)
		{
			_type = org.omg.CORBA.ORB.init().create_struct_tc(MessageHelper.id(),"Message",new org.omg.CORBA.StructMember[]{new org.omg.CORBA.StructMember("time", DateTimeHelper.type(), null),new org.omg.CORBA.StructMember("msg", org.omg.CORBA.ORB.init().create_string_tc(255), null)});
		}
		return _type;
	}

	public static void insert (final org.omg.CORBA.Any any, final Message s)
	{
		any.type(type());
		write( any.create_output_stream(),s);
	}

	public static Message extract (final org.omg.CORBA.Any any)
	{
		return read(any.create_input_stream());
	}

	public static String id()
	{
		return "IDL:Message:1.0";
	}
	public static Message read (final org.omg.CORBA.portable.InputStream in)
	{
		Message result = new Message();
		result.time=DateTimeHelper.read(in);
		result.msg=in.read_string();
		return result;
	}
	public static void write (final org.omg.CORBA.portable.OutputStream out, final Message s)
	{
		DateTimeHelper.write(out,s.time);
		out.write_string(s.msg);
	}
}
