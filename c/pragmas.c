#include<stdio.h>
void startFun(void);
void endFun(void);

//The following pragma instructions don't work in gcc.
#pragma startup startFun
#pragma exit endFun
#pragma warn -rvl

//Instead, to call functions at startup and exit, the following statements can be used.
void __attribute__((constructor)) startFun();
void __attribute__((constructor)) endFun();

//GCC warn pragma gives warnings about the code, such as lack of return values, parameter not used etc.
#pragma GCC warn

//GCC errors pragma shows errors during compilation along with line numbers and the reason for the error.
#pragma GCC errors

//The GCC poison pragma is used to remove an identifier completely from the program.
#pragma GCC poison scanf



//The pragma directive can be used to specify any functions other than  main to be run at the beginning or end of a program,
//or to show warnings or errors.

int main(){
	printf("Called main.\n");
	return 0;
}
void startFun(void){
	int num;
	printf("Called startFun.\n");

	//This program wouldn't compile due to the usage of the poisoned identifier scanf
	//Identifier can also be functions and macros, but in case a previously defined macro is poisoned, then it won't be affected.
	scanf("%d", &num);
}
void endFun(void){
	printf("Called endFun.\n");
}
