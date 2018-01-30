/**
 *	Generated from IDL definition of struct "DateTime"
 *	@author JacORB IDL compiler 
 */

public final class DateTimeHolder
	implements org.omg.CORBA.portable.Streamable
{
	public DateTime value;

	public DateTimeHolder ()
	{
	}
	public DateTimeHolder(final DateTime initial)
	{
		value = initial;
	}
	public org.omg.CORBA.TypeCode _type ()
	{
		return DateTimeHelper.type ();
	}
	public void _read(final org.omg.CORBA.portable.InputStream _in)
	{
		value = DateTimeHelper.read(_in);
	}
	public void _write(final org.omg.CORBA.portable.OutputStream _out)
	{
		DateTimeHelper.write(_out, value);
	}
}
