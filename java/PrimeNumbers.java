//AUTHOR: rapteon; DATE: 20190120
//Program to print prime numbers within a given range.

import java.lang.*;
import java.util.Scanner;

class PrimeNumbers{
	public static void printPrimes(int begin, int end){
		boolean isPrime = false;
		for(int numCount = begin; numCount < end; numCount++){
			isPrime = true;
			for(int primeCount = 2; primeCount <= numCount/2; primeCount++){
				if(numCount % primeCount == 0){
					isPrime = false;
					break;
				}
			}
			if(isPrime)
				System.out.println(numCount);
		}	
	}

	public static void main(String args[]){
		int begin = 0, end = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Lower bound of range: ");
		begin = sc.nextInt();
		System.out.println("Upper bound of range: ");
		end = sc.nextInt();

		printPrimes(begin, end);
	}
}
