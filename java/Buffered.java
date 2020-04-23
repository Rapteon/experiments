import java.io.*;
import java.lang.*;
public class Buffered{
	public static void main(String args[])throws IOException{
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
		String id = b.readLine();
		String s =  b.readLine();
		System.out.println(s + "" + id);
	}
}
