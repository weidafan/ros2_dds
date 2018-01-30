/**
 *	Generated from IDL definition of struct "Message"
 *	@author JacORB IDL compiler 
 */

public final class Message
	implements org.omg.CORBA.portable.IDLEntity
{
	public Message(){}
	public DateTime time;
	public java.lang.String msg = "";
	public Message(DateTime time, java.lang.String msg)
	{
		this.time = time;
		this.msg = msg;
	}
}
