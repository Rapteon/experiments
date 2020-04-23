#include<stdio.h>
//The #if tests whether a macro expression evaluates to a non-zero value.
//If it does evaluate, then until the next #else / #endif / #endif, the statements are compiled.
//If the expression evaluates to zero, then the statements are not compiled(instead skipped).
#define VAL 0
#define LINUX 64

//If I change the value of VAL to 1, then the statements in the #else block will be compiled.
int main(){
	//If VAL is less than 5, then the condition will produce 1 as result, which is non-zero.
	#if VAL < 0
		printf("Lesser Than 0\n");
	#elif VAL == 0
		printf("Equal to 0\n");
	#else
		printf("Greater than 0\n");
	#endif
	
	//#undef directive causes all the following macro definitions to become undefined.
	//For example, if I don't need to use the value of VAL macro, then I just write "#undef VAL;"as a statement.
	 
	#undef VAL
	//printf("%d", VAL); 
	//On uncommenting the above line, it produces the error  "VAL is undefined".
	
	#if LINUX == 64
		printf("Is a 64-bit linux OS\n");
		//If I change the value of the macro to be 32, then the condition will evaluate to false and the macro will be undefined/removed from the following statements.
	#else
		#undef LINUX
		//Removing the macro LINUX of the value of the LINUX macro is not 64.
	#endif
}

