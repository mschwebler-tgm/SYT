package callback;

import java.math.BigDecimal;
import java.rmi.RemoteException;

public class ConcreteCallback implements Callback{
	@Override
	public void printResult (BigDecimal result) throws RemoteException {
		System.out.println("Result: " + result);
	}
}
