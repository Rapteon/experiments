//myServer class

import java.rmi.*;
import java.rmi.registry.*;

public class MyServer{
    public static void main(String[] args){
        try{
            PrimeRemote stub = new PrimeRemote();
            Naming.rebind("rmi://localhost:4000/remoteObj", stub);
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}