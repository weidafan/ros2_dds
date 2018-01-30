/**
 *	Generated from IDL definition of struct "DateTime"
 *	@author JacORB IDL compiler 
 */

public final class DateTime
	implements org.omg.CORBA.portable.IDLEntity
{
	public DateTime(){}
	public int year;
	public int month;
	public int day;
	public int hour;
	public int minute;
	public int second;
	public DateTime(int year, int month, int day, int hour, int minute, int second)
	{
		this.year = year;
		this.month = month;
		this.day = day;
		this.hour = hour;
		this.minute = minute;
		this.second = second;
	}
}
