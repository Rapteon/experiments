import java.lang.*;
import java.io.*;

public class ConsoleInput{
       public static void main(String args[]){
	       Console c = System.console();
	       String username = c.readLine();
	       char pass[] = c.readPassword();

	       System.out.println("Username: "+username);
	       System.out.println("Password: "+String.valueOf(pass));
       }
}       
