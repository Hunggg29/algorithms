#include<stdio.h>

int x[1000];
int n,k;
int count;

void print(){
    count++;
}

void TRY(int i,int j){
    for(int num = j; num <= n; num++){
        x[i]=num;
        if(i == k-1) print();
        else TRY(i+1,num+1);
    }
}

int main(){  
    scanf("%d %d",&k,&n);
    TRY(0,1);
    printf("%d",count);
    return 0;
}