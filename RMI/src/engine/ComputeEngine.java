package engine;

import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.server.UnicastRemoteObject;
import java.util.ServiceConfigurationError;

import compute.Compute;
import compute.Task;
import engine.service.*;



public class ComputeEngine implements Compute{

	public ComputeEngine() {
		super();
	}
	
	@Override
	public <T> T executeTask(Task<T> t) throws RemoteException {
		return t.execute();
	}

	public static void main(String[] args) {
        if (System.getSecurityManager() == null) {
            System.setSecurityManager(new SecurityManager());
        }
        try {
        	String name = "Compute";
        	//Create new Service
        	ConcreteService s = new ConcreteService();
        	//Init Registry
        	Registry reg = LocateRegistry.createRegistry(1099);
        	Service stub = (Service) UnicastRemoteObject.exportObject(s, 0);
        	//rebind instead of bind to avoid Exceptions when already bound
        	reg.rebind(name, stub);
        	
        	/** 
        	 * Old code:
            String name = "Compute";
            //making the object available to clients
            Compute engine = new ComputeEngine();
            Compute stub =
                (Compute) UnicastRemoteObject.exportObject(engine, 0);
            //add name to registry
            Registry registry = LocateRegistry.getRegistry();
            registry.rebind(name, stub);
            System.out.println("ComputeEngine bound");
            */
        } catch (Exception e) {
            System.err.println("ComputeEngine exception:");
            e.printStackTrace();
        }
    }
}
