package engine.service;

import java.rmi.Remote;
import java.rmi.RemoteException;

import commands.Command;

public interface Service extends Remote{
	public void doSomething(Command c) throws RemoteException;
}
