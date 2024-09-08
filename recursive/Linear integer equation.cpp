#include<stdio.h>
#include<stdbool.h>

int n,M,a[1000];

void inkq(){
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void Try(int i,int sum){
    for(int j=1;j<=n;j++){
        if(sum + j <= M){
        a[i] = j;
        sum +=a[i];
        if(i == n && sum == M){
            inkq();
        }
        else{
            Try(i+1,sum);
        }
        sum -= a[i];
        }
    }
}

int main(){
    scanf("%d %d",&n,&M);
    Try(1,0);
    return 0;
}