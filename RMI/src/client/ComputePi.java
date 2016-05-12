package client;

import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.server.UnicastRemoteObject;
import java.math.BigDecimal;

import callback.*;
import commands.CommandPi;
import compute.Compute;
import engine.service.Service;

public class ComputePi {
    public static void main(String args[]) {
        if (System.getSecurityManager() == null) {
            System.setSecurityManager(new SecurityManager());
        }
        try {
            String name = "Compute";
            Registry registry = LocateRegistry.getRegistry(args[0]);
            //Init Callback stub
            Callback callback = new ConcreteCallback();
            //Port 0 = retrieve an available port from OS
            Callback callbackStub = (Callback) UnicastRemoteObject.exportObject(callback, 0);
            
            Service service = (Service) registry.lookup(name);
            CommandPi command = new CommandPi(Integer.parseInt(args[1]), callback);
            command.execute();
            
        } catch (Exception e) {
            System.err.println("ComputePi exception:");
            e.printStackTrace();
        }
    }    
}