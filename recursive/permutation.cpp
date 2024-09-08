#include<stdio.h>
#include<stdbool.h>
int n,A[1000],m[1000];
void inkq(){
    for(int i=1;i<=n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void Try(int i){
    for(int j=1;j <= n;j++){
        if(!m[j]){
        A[i] = j;
        m[j] = true;
        if(i==n){
            inkq();
        }
        else{
            Try(i+1);
        }
        m[j] = false;
        }
    }
}
int main(){
    scanf("%d",&n);
    Try(1);
    return 0;
}

