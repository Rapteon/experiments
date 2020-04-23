#include<stdio.h>
#include<stdlib.h>
#define MAX_LINE_WIDTH 100

typedef struct stack Stack;

void readLine(FILE*);
void push(char*, Stack*);

struct stack{
	char** lineHolder;
	int top;
};

int main(void){
	Stack* stk;
	stk->top = 0;
	FILE* fp = fopen("./generalLinked.c", "r");

	if(fp){}else printf("No\n");

	readLine(fp);
//	push(line, stk);
//	char ch=fgetc(fp);
//	while(ch != EOF){
//		printf("%c", ch);
//		ch=fgetc(fp);
//	}
	return 0;
}

void readLine(FILE* fp){
	char* line = (char*)calloc(MAX_LINE_WIDTH, sizeof(char));
	if(fp){
		fgets(line, MAX_LINE_WIDTH, fp);
		printf("%s", line);
	}
	else
		printf("Not a file.\n");
}

void push(char* line, Stack* stk){
	stk->lineHolder[0] = &line[0];
	printf("%s\n", stk->lineHolder[0]);
//	stk->lineHolder++;
//	stk->top++;
}
