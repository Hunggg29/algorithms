#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *makeNode(int x){//cấp phát động cho node
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void duyet(node *head){
    while(head != NULL){
        printf("%d",head->data);
        head = head->next;
    }
} 

int count(node *head){
    int dem = 0;
    while(head != NULL){
        ++dem;
        head = head->next; 
    }
    return dem;
}

void pushFront(node **head,int x){//thêm node mới vào đầu danh sách
    node *newNode = makeNode(x);
    newNode->next = *head;
    //*head là địa chỉ của node head trong dslk (giải tham chiếu)
    *head = newNode;
}

void pushLast(node **head,int x){//thêm node mới vào cuối danh sách
    node *tmp = *head;
    node *newNode = makeNode(x);
    if(*head == NULL){
        *head = newNode; return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insert(node **head,int k,int x){//thêm node mới vào giữa danh sách
    int n = sizeof(*head);
    if(k<1 || k>n+1) return;
    if(k==1){
        pushFront(head,x); return;
    }
    node *tmp=*head;
    for(int i=1;i<=k-2;i++){
        tmp = tmp->next;//tmp == k-1
    }
    node *newNode = makeNode(x);
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void popFront(node **head){//xóa node khỏi đầu danh sách liên kết
    if(*head == NULL) return;
    node *tmp = *head;
    *head = (*head) -> next;
    free(tmp);
}

void popBack(node **head){//xóa node cuối trong danh sách liên kết
     if(head == NULL) return;
     node *tmp = *head;
     if(tmp->next == NULL){
        *head = NULL;
        free(tmp);
     }

     while(tmp->next->next != NULL){
        tmp = tmp->next;
     }
     node *last = tmp->next;
     tmp->next = NULL;
     free(last);
}

void popMid(node **head,int k){//xóa node giữa trong danh sách liên kết
    int n = sizeof(*head);
    if(k<1||k>n+1) return;
    if(k==1) popFront(head);
    node *tmp = *head;
    for(int i=1;i<=k-2;i++){
        tmp = tmp->next;
    }
    node *kth = tmp->next;
    tmp->next = kth->next;
    free(kth);
}
void pushFront(node **head,int x){
    node *newNode = makeNode(x);
    newNode->next = *head;
    *head = newNode;
}

int main(){
    node *head = NULL;
   while(1){
    printf("1. Them vao dau\n");
    printf("2. Them vao cuoi\n");
    printf("3. Them vao giua\n");
    printf("4. Duyet\n");
    printf("Nhap lua chon");
    
   }
    return 0;
}




