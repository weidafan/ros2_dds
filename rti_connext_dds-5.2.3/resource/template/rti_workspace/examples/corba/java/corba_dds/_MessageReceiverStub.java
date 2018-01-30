/**
 *	Generated from IDL interface "MessageReceiver"
 *	@author JacORB IDL compiler V 2.2.3, 10-Dec-2005
 */

public class _MessageReceiverStub
	extends org.omg.CORBA.portable.ObjectImpl
	implements MessageReceiver
{
	private String[] ids = {"IDL:MessageReceiver:1.0"};
	public String[] _ids()
	{
		return ids;
	}

	public final static java.lang.Class _opsClass = MessageReceiverOperations.class;
	public void sendMessage(Message msg)
	{
		while(true)
		{
		if(! this._is_local())
		{
			org.omg.CORBA.portable.InputStream _is = null;
			try
			{
				org.omg.CORBA.portable.OutputStream _os = _request( "sendMessage", true);
				MessageHelper.write(_os,msg);
				_is = _invoke(_os);
				return;
			}
			catch( org.omg.CORBA.portable.RemarshalException _rx ){}
			catch( org.omg.CORBA.portable.ApplicationException _ax )
			{
				String _id = _ax.getId();
				throw new RuntimeException("Unexpected exception " + _id );
			}
			finally
			{
				this._releaseReply(_is);
			}
		}
		else
		{
			org.omg.CORBA.portable.ServantObject _so = _servant_preinvoke( "sendMessage", _opsClass );
			if( _so == null )
				throw new org.omg.CORBA.UNKNOWN("local invocations not supported!");
			MessageReceiverOperations _localServant = (MessageReceiverOperations)_so.servant;
			try
			{
			_localServant.sendMessage(msg);
			}
			finally
			{
				_servant_postinvoke(_so);
			}
			return;
		}

		}

	}

}
