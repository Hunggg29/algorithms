#include<stdio.h>
#include<stdbool.h>
int n;
bool ls(int a[],int n,int x){ //linear search O(n)
    for(int i=0;i<n;i++){
        if(a[i]==x) 
        return true;
    }
    return false;
}
//binary search O(logn) 
//Các phần tửu phải được sắp xếp tăng dần, giảm dần
bool bs(int a[],int x){
    int l=0,r=n-1;
    while (l<=r)
    {
        int m = (l+r)/2;
        if(a[m] == x){
            return true;
        }
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return false;
}
bool binary_search(int a[],int l,int r,int x){
    if(l>r) return false;
    int m = (l+r)/2;
    if(a[m] == x) return true;
    else if(x < a[m]){
        return binary_search(a,l,m-1,x);
    }
    else 
        return binary_search(a,m+1,r,x);

}
int first_pool(int a[],int l,int r,int x){
    int res = -1;
    while(l<=r){
    int m = (l+r)/2;
    if(a[m]==x){
        res = m;
        r = m-1;
    }
    else if(x < a[m]) r = m-1;
    else l = m+1;
    }
    return res;    
}
int main(){
    int x;
    int a[1000];
    scanf("%d %d",&n,&x);
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",first_pool(a,0,n,x));
    return 0;
}