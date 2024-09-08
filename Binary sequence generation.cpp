//Without consecutive 11
#include<stdio.h>
int n;
int x[1000];
void print(){
    for(int k=0;k<n;k++){
        printf("%d",x[k]);
    }
    printf("\n");
}
void TRY(int i) {
    for (int j = 0; j <= 1; j++) {
        if (x[i - 1] == 0 || j  == 0){
            x[i] = j;
            if (i == n - 1) {
                print();
            } else TRY(i + 1);
        }
    }
}
int main(){
    scanf("%d",&n);
    TRY(0);
    return 0;
}