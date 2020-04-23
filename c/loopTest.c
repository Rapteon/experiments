#include<stdio.h>

int main(){
	int i = 0;
	while(i < 10){
		printf("%d:",i++);
		if(i == 10)
			continue;
	}
	printf("\b \n");
	return 0;	
}
