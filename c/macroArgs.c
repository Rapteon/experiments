#include<stdio.h>
#define SQUARE(x) x*x
#define IS_LETTER(x) (x > 64 && x < 91 || x > 96 && x < 123)
#define TO_BOOL(x) ((x == 1)?printf("True\n"):printf("False\n"))
int main(){
	char ch;
	int num;

	printf("Enter the number: ");
	scanf("%d", &num);	
	printf("Enter the character: ");
	scanf(" %c", &ch);

	num = SQUARE(num);
	int result = IS_LETTER(ch);

	printf("Square: %d\n", num);
	printf("Checking if the input was a character...\n");

	TO_BOOL(result);
	
	return 0;
}
