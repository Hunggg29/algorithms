#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 int n;
char a[21];
int count=0;
char s[6];
void print(){
    for(int k=0;k<n;k++){
        printf("%c",a[k]);
    }
    printf("\n");
}
void Try1(int i){
    if(i>=n){
        a[i]='\0';
        if(strstr(a,s)==NULL){
            print();
        }
        return;
    }
    for(char j='0';j<='1';j++){
        a[i]=j;
        Try1(i+1);
    }
}
int main(){
    scanf("%d",&n);
    getchar();
    scanf("%s",s);
    Try1(0);
    return 0;
}