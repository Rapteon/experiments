//Program to show what happens when uninitialized
//variables are used.


#include<iostream>

int main(){
	//Define a variable named x
	int x;	//This variable hasn't been assigned a value.

	//Print value of x to the screen.
	std::cout << x;	//x is uninitialized, hence we don't know what we'll get as output.
	return 0;
}
