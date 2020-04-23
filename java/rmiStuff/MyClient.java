//client Class
import java.io.Console;
import java.rmi.*;

class MyClient{
    public static void main(String args[]){  
        try{  
            System.out.println("Enter the number: ");
            Console c = System.console();
            int num = Integer.parseInt(c.readLine());
            PrimeInterface stub=(PrimeInterface)Naming.lookup("rmi://localhost:4000/remoteObj"); 
            System.out.println("Integer to check: "+num);
            System.out.println(stub.isPrime(num));  
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}
