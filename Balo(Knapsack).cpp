#include<stdio.h>
int V[1000];
int S[1000];
int M,N,MAX=-1;

void check(int k,int P,int Q){
    if(k == N){
        if(Q <= M){
            if(MAX < P){
                MAX = P;
            }
        }
    }
    else{
            if(Q + S[k] <= M){
                check(k+1,P + V[k],Q + S[k]);
            }
            check(k+1,P,Q);
    }
}
int main(){
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&S[i],&V[i]);
    }
    check(0,0,0);
    printf("%d\n",MAX);
    return 0;
}