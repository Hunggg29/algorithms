#include<stdio.h>
#include<string.h>
int x[1000];
int n=0;

void printSolution()
{
    for (int i = 1;i <= n;i++)
    {
        printf("%d", x[i]);
    }
    printf("\n");
}

int check(int v, int k){
    for(int i=1;i<k;i++){
        if(x[i] == v) return 0;
        if(x[i]+i == v+k) return 0;
        if(x[i]-i == v-k) return 0;    
    }
    return 1;
}
void TRY(int k){
    for(int v=1;v<=n;v++){
        if(check(v,k)){
            x[k]=v;
            if(k == n) printSolution();
            else TRY(k+1);
        }
    }
}
int main(){
    scanf("%d",&n);
    TRY(1);
}
