#include<stdio.h>
#define STARLINE for(int i = 0; i < 94; i++)\
			     printf("*");\
	     	 printf("\n")			
//Note how the last line in the multiline macro doesn't have a semicolon.
//94 is the number of columns in my terminal emulator. It can be found by typing "tput cols" in a terminal emulator without the quotes.
/*To debug a macro using gcc compiler, type the command "gcc -E -o programName.i programName.c"*/
/*Without the quotes.*/
int main(){
	STARLINE;
	printf("Input Section:\n");
	STARLINE;

}
