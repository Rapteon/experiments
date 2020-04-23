//Remote Class
import java.rmi.*;
import java.rmi.server.*;

public class PrimeRemote extends UnicastRemoteObject implements PrimeInterface{
    PrimeRemote() throws RemoteException{
        super();
    }
    public boolean isPrime(int x){
        for(int i = 2; i < x/2; i++)
            if(x % i == 0)
                return false;
        return true;
    }
}