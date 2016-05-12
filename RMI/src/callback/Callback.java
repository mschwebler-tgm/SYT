package callback;

import java.math.BigDecimal;
import java.rmi.Remote;
import java.rmi.RemoteException;

public interface Callback extends Remote{
	public void printResult (BigDecimal result) throws RemoteException;
}
