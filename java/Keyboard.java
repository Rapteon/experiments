//Program to print user input(name,age and address) using Scanner API.

import java.util.Scanner;
import java.io.Console;

class Keyboard{
    public static void main(String args[]){
        String name, username, address="";
        int age;
        Scanner sc = new Scanner(System.in);
        Console myConsole = System.console();
        char[] password;

        System.out.print("Name: ");
        name = sc.nextLine();
        System.out.print("Age: ");
        age = Integer.parseInt(sc.nextLine());
        System.out.print("Address: ");
        address = sc.nextLine();
        
        System.out.print("Username: ");
        username = myConsole.readLine();
        System.out.print("Password: ");
        password = myConsole.readPassword();

        System.out.println("Name: "+name+"\nAge: "+age+"\nAddress: "+address);
        System.out.println("Username: "+username+"Password: "+password.toString());

        sc.close();
    }
}