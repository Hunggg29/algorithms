#include<stdio.h>
int n,k,x[1000];
int count=0;
void inkq(){
    count++;
}

void Try(int i){   
    for(int j=x[i-1]+1;j <= n;j++){      
        x[i] = j;
        if(i == n){
            inkq();
        }
        else Try(i+1);
    }
}
int main(){
    scanf("%d %d",&n,&k);
    x[0]=0; 
    Try(1);
    printf("%d",count);
    return 0;
}


