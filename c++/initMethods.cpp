/* AUTHOR: rapteon; DATE: 20200317
 * 
 * Program to show brace & direct intialization methods
 * to initialize variables.
 *
 * Performance Order:
 *	Higher		   ->->			Lower
 *	brace method > direct method > copy method (using '=' )
 */ 

#include<iostream>

int main(){
	//Brace initialization
	int num1{10}, num2{30};
	std::cout<<"Sum: "<<num1+num2<<std::endl;

	//Direct initialization
	int num3(30), num4(10);
	std::cout<<"Difference: "<<num3-num4<<std::endl;

	//Copy initialization
	int num5 = 50, num6 = 5;
	std::cout<<"Product: "<<num5*num6<<std::endl;
	return 0;
}
