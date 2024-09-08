#include<stdio.h>
#include<math.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int count = 0;
    for(int j=0;j<n;j++){
        int black = 1;
        for(int i=0;i<m;i++){
            if(a[i][j]==0){
                black = 0;
                break;
            }
            }
        
        if(black){
            count++;}       
    }
    printf("%d",count); 
    return 0;
}