import java.lang.*;
public class PassField{
	public static void main(String args[]){
		Console myConsole = System.Console();
		String username = myConsole.readline();
		char pass[] = myConsole.readPassword();

		System.out.println(System.valueOf(pass));
		System.out.println("" + username.length());
	}
}
