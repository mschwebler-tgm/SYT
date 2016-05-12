package engine.service;

import java.rmi.RemoteException;

import commands.Command;

public class ConcreteService implements Service{
	
	@Override
	public void doSomething (Command c) throws RemoteException{
		c.execute();
	}
}
