import java.io.*;
import java.lang.*;

public class InputStreamDemo{
	public static void main(String args[]){
		try{
			BufferedReader bread = new BufferedReader(new InputStreamReader(System.in));
			String s = bread.readLine();

			System.out.println(s);
		}
		catch(Exception e){
			e.printStackTrace();
		}
	}
}	
