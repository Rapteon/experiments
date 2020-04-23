//rmiInterface class

import java.rmi.Remote;
import java.rmi.RemoteException;

public interface PrimeInterface extends Remote{
    public boolean isPrime(int x) throws RemoteException;
}