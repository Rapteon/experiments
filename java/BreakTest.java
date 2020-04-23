/*AUTHOR: rapteon; DATE: 20200324
 * Program to try exception handling using try-catch-finally blocks.
 */

import java.util.Scanner;

class BreakTest{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		try{
			System.out.print("Number: ");
			int num = input.nextInt();
			int[] list = new int[num];
			for(int i = 0; i <= num; i++)
				list[i] = i;

		}
		catch(IndexOutOfBoundsException e){
			System.out.println(e.getMessage());
		}
		finally{
			input.close();
		}		
	}
}
