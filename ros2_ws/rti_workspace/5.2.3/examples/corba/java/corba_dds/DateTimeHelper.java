/**
 *	Generated from IDL definition of struct "DateTime"
 *	@author JacORB IDL compiler 
 */

public final class DateTimeHelper
{
	private static org.omg.CORBA.TypeCode _type = null;
	public static org.omg.CORBA.TypeCode type ()
	{
		if (_type == null)
		{
			_type = org.omg.CORBA.ORB.init().create_struct_tc(DateTimeHelper.id(),"DateTime",new org.omg.CORBA.StructMember[]{new org.omg.CORBA.StructMember("year", org.omg.CORBA.ORB.init().get_primitive_tc(org.omg.CORBA.TCKind.from_int(3)), null),new org.omg.CORBA.StructMember("month", org.omg.CORBA.ORB.init().get_primitive_tc(org.omg.CORBA.TCKind.from_int(3)), null),new org.omg.CORBA.StructMember("day", org.omg.CORBA.ORB.init().get_primitive_tc(org.omg.CORBA.TCKind.from_int(3)), null),new org.omg.CORBA.StructMember("hour", org.omg.CORBA.ORB.init().get_primitive_tc(org.omg.CORBA.TCKind.from_int(3)), null),new org.omg.CORBA.StructMember("minute", org.omg.CORBA.ORB.init().get_primitive_tc(org.omg.CORBA.TCKind.from_int(3)), null),new org.omg.CORBA.StructMember("second", org.omg.CORBA.ORB.init().get_primitive_tc(org.omg.CORBA.TCKind.from_int(3)), null)});
		}
		return _type;
	}

	public static void insert (final org.omg.CORBA.Any any, final DateTime s)
	{
		any.type(type());
		write( any.create_output_stream(),s);
	}

	public static DateTime extract (final org.omg.CORBA.Any any)
	{
		return read(any.create_input_stream());
	}

	public static String id()
	{
		return "IDL:DateTime:1.0";
	}
	public static DateTime read (final org.omg.CORBA.portable.InputStream in)
	{
		DateTime result = new DateTime();
		result.year=in.read_long();
		result.month=in.read_long();
		result.day=in.read_long();
		result.hour=in.read_long();
		result.minute=in.read_long();
		result.second=in.read_long();
		return result;
	}
	public static void write (final org.omg.CORBA.portable.OutputStream out, final DateTime s)
	{
		out.write_long(s.year);
		out.write_long(s.month);
		out.write_long(s.day);
		out.write_long(s.hour);
		out.write_long(s.minute);
		out.write_long(s.second);
	}
}
