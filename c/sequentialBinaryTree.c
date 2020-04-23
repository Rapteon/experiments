#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define SIX 6

struct BinaryTree{
    //Members for BinaryTree Operations
    char* nodes;
    int numOfNodes;
};

typedef struct BinaryTree BT;

char* spaceGen(int size){
    if(size < 0)
        return NULL;
    char* substring = calloc(size, sizeof(char));
    for(int i = 0; i < size; i++){
        strncat(substring, " ", 2);
    }
    return substring;
}
int length(char* arr){
    int len = 0;
    while(arr[len++]!='\0')
    {}
    return len;
}
int main(){
    int num;
    BT myTree;

    printf("Number: ");
    scanf("%d", &num);
    
    myTree.nodes = calloc(num, sizeof(char));

    for(int i = 0; i < num; i++){
        printf("Element: ");
        scanf(" %c", &myTree.nodes[i]);
    }
    // printf("Spaces:%s Had\n", myTree.spaces);
    // int begin = 0, end = num*2;
    // for(int i = 0; i < num; i++, end-=2){
    //     printf("%s%c\n", spaceGen(end), myTree.nodes[i]);
        
    //     printf("%s/%s\\ \n", spaceGen(end-1), spaceGen(i));
    // }
    
    // int j = 0;
    int levels = log2(length(myTree.nodes))+1;
    printf("Levels: %d" , levels);
    // for(int i = 1; i < num; i*=2){
    //     for(; j < i; j++){
    //         printf("%c", myTree.nodes[j]);
    //     }
    //     printf("\n");
    // }
    //Method2
    // int counter = 0;
    // for(int i = 0; i <= levels; i++){
    //     printf("%s", spaceGen(levels-i));
    //     for(int j = 0; j < i; j++){
    //         printf("%c", myTree.nodes[counter++]);
    //         if(j%2 == 0){
    //             if(levels == i)
    //                 printf(" ");
    //             else
    //                 printf("%s", spaceGen(levels-i));
    //         }
    //     }
    //     printf("\n");
    // }
    //Method2 Ends
    // printf("%6c\n", myTree.nodes[0]);
    // printf("%4c\n", myTree.nodes[1]);
    // printf("%2c\n", myTree.nodes[2]);
    return 0;
}