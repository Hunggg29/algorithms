#include<stdio.h>
#include<stdlib.h>


// int n=0, stack[10001]; {cài đặt stack bằng mảng 1 chiều}

// void push(int x){
//     stack[n] = x;
//     ++n;
// }

// void pop(){
//     if(n >= 1)
//     --n;
// }

// int top(){
//     return stack[n-1];
// }
// int size(){
//     return n;
// }
// int main(){
//     while(1){
//         printf("1.push\n");
//         printf("2.pop\n");
//         printf("3.top\n");
//         printf("4.size\n");
//         printf("0.Exit\n");
//     int lc;
//     scanf("%d",&lc);
//     if(lc == 1){
//         int x;
//         scanf("%d",&x);
//         push(x);
//     }
//     else if(lc == 2){
//         pop();
//     }
//     else if(lc == 3){
//         if(n==0){
//             printf("Empty\n");
//         }
//         printf("%d",top());
//     }
//     else if(lc == 4){
//         printf("%d",size());
//     }
//     else{
//         break;
//     }}
//     return 0;

typedef struct node{
    int data;
    struct node *next;
}node;

node *makeNode(int x){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
}
void push(node **top,int x){
    node *newNode = makeNode(x);
    if(*top = NULL){
        *top = newNode; return;    
    }
    newNode->next = *top;
    *top = newNode;

}
