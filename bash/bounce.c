#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]){
	if(argc < 2){
		printf("You didn't reply.\n");
		return 2;
	}
	if(!strcmp(argv[1], "Yes"))
		printf("Bounce\n");
	else{
		printf("Don't bounce.\n");
		return 1;
	}
	return 0;	
}
