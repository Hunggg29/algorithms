#include<stdio.h>
#include<math.h>

void nhap(int a[][100],int b[][100],int *n,int *m,int *p){
    scanf("%d %d",n,m);
    for(int i=0;i<*n;i++){
        for(int j=0;j<*m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",m,p);
    for(int i=0;i<*m;i++){
        for(int j=0;j<*p;j++){
            scanf("%d",&b[i][j]);
        }   
    }
}
void nhan(int a[][100],int b[][100],int c[][100],int n,int m,int p){
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            c[i][j] = 0;
            for(int k=0;k<m;k++){
            c[i][j] += a[i][k] * b[k][j];}
        }
    }
}
void in(int c[][100],int n, int p){
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100]; 
    int b[100][100]; 
    int c[100][100];
    int n,m,p;
    nhap(a,b,&n,&m,&p);
    nhan(a,b,c,n,m,p);
    in(c,n,p);
    return 0;    
}
