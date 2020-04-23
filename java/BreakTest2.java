/*AUTHOR: rapteon; DATE: 20200324
 * Program to perform exception handling using try(-with-resources)-catch block.
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
class BreakTest2{
	public static void main(String[] args){
		//The try(resource) automatically closes the resource after the try-catch, if it implements Closable or AutoClosable.
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))){
			System.out.println("Enter 10 numbers:");
			
			int[] listOfNums = new int[10];
			
			for(int i = 0; i < 11; i++){
				System.out.print("Num"+i+": ");
				listOfNums[i] = Integer.parseInt(br.readLine());
			}
		}
		//Exception handler for IndexOutOfBounds or IOException
		catch(IndexOutOfBoundsException|IOException e){
			System.err.println(e.getMessage());
		}
	}
}
