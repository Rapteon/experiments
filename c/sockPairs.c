#include<stdio.h>
#include<stdlib.h>

int pairIt(int n, int *arr){
	int temp, pairs = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

//	for(int i = 0; i < n; i++)
//		printf("%d\n", arr[i]);
	
	for(int i = 0; i < n;){
		if(arr[i] == arr[i+1]){
			pairs++;
			i+=2;
		}
		else
			i++;
	}

	return pairs;

}

int main(){
	int size, pairs;
	int *array;

	printf("Enter the size of the array: ");
	scanf("%d", &size);
	array = (int*)calloc(sizeof(int), size);

	for(int i = 0; i < size; i++)
		scanf("%d", &array[i]);
	printf("%d: ", pairIt(size, array));

	return 0;


}
