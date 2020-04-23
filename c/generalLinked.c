#include<stdio.h>

struct node{
	union{
		char var;
		int num;
		struct node* ptr;
	}trio;
	int coeff;
	int exp;
	struct node* next;
};

typedef struct node Node;

int main(){
	Node n;

}
