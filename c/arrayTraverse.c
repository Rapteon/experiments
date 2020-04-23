#include<stdio.h>

int main(void){
	int nums[] = {10,20,30,40,50};
	int *addr = &nums[0];
	printf("Base address of nums: %p\n", addr);
	printf("Value at base address: %d\n", *addr);
	
	for(int i = 1; i < 5; i++){
		printf("Incrementing pointer...\n");
		addr++;
		printf("Next address: %p\n", addr);
		printf("Value at next address: %d\n", *addr);
	}

}

