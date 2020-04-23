//AUTHOR: rapteon; DATE: 20190120
//Program to convert an 8-bit binary number to a decimal number

import java.lang.*;
import java.util.Scanner;

class BinaryToDecimal{
	byte num;	//Byte is an 8-bit integer
	public void enterNumber(){
		Scanner sc= new Scanner(System.in);
		num = sc.nextByte();
	}
	public byte convert(){
		int remainder = 0, power = 0;
		byte number = num, decimalNum = 0;

		while(number > 0){
			remainder = num % 10;
			number /= 10;
			decimalNum += (byte)(Math.pow(2,power++)*remainder);
		}
		return decimalNum;
	}

	public static void main(String args[]){
		BinaryToDecimal	d = new BinaryToDecimal();
		d.enterNumber();
		System.out.println(d.convert());
	}
}
