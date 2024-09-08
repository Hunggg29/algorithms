#include<stdio.h>
#include<string.h>

int check(int x[],int y[],int n,int m){
    if (n != m){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(x[i] != y[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n,o,p;
    int x[1000];
    int y[1000];
    scanf("%d",&n);
    for (int t=0;t<n;t++){
        scanf("%d %d",&o,&p);
        for(int i=0;i<o;i++){
            scanf("%d",&x[i]);
        }
        for(int i=0;i<p;i++){
            scanf("%d",&y[i]);
        }
        int result=check(x,y,o,p);
            printf("%d\n",result);
    }
return 0;
}