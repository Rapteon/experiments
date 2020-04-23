#include<stdio.h>
//#define TYPE_1(x) ((x > -1 && x < 11)?printf("Within 0 to 10\n"):printf("Not within 0 to 10\n"))
#define TYPE_2(x) ((x > 64 && x < 92)?printf("Is a CAPITAL.\n"):printf("Is not a CAPITAL.\n"))
//#define SQUARE(x) x*x;

int main(int argc,char **argv){
//Since the macro TYPE_1 is commented out/not defined, the code inside the first ifdef-endif doesn't execute.
	#ifdef TYPE_1
		int num;
		printf("Enter the number: ");
		scanf("%d", &num);
		TYPE_1(num);
	#endif
	#ifdef TYPE_2
		char ch;
		printf("Enter the character: ");
		scanf("%c", &ch);
		TYPE_2(ch);
	#endif
	#ifndef SQUARE
		#define SQUARE(x) x*x
		int n;
		printf("Enter the number:");
		scanf("%d",&n);
		n = SQUARE(n);
		printf("The square of is %d\n", n);
	#endif
	//Note how the name of the macro is used for #ifndef-#endif and no parameters for the macro.
}
