import org.omg.PortableServer.POA;
/**
 *	Generated from IDL interface "MessageReceiver"
 *	@author JacORB IDL compiler V 2.2.3, 10-Dec-2005
 */

public class MessageReceiverPOATie
	extends MessageReceiverPOA
{
	private MessageReceiverOperations _delegate;

	private POA _poa;
	public MessageReceiverPOATie(MessageReceiverOperations delegate)
	{
		_delegate = delegate;
	}
	public MessageReceiverPOATie(MessageReceiverOperations delegate, POA poa)
	{
		_delegate = delegate;
		_poa = poa;
	}
	public MessageReceiver _this()
	{
		return MessageReceiverHelper.narrow(_this_object());
	}
	public MessageReceiver _this(org.omg.CORBA.ORB orb)
	{
		return MessageReceiverHelper.narrow(_this_object(orb));
	}
	public MessageReceiverOperations _delegate()
	{
		return _delegate;
	}
	public void _delegate(MessageReceiverOperations delegate)
	{
		_delegate = delegate;
	}
	public POA _default_POA()
	{
		if (_poa != null)
		{
			return _poa;
		}
		else
		{
			return super._default_POA();
		}
	}
	public void sendMessage(Message msg)
	{
_delegate.sendMessage(msg);
	}

}
