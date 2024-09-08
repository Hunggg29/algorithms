#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int a[],int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(&a[i],&a[min]);
    }
}
void bubbleSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
void insertionSort(int a[],int n){
    for(int i=0;i<n;i++){
        int x = a[i]; 
        int pos = i - 1;
        while(pos >= 0 && x < a[pos]){
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }    
}
int Lomutopartition(int a[], int l, int r){
    int pivot = a[r];
    int i = l-1;
    for(int j=l;j<=r-1;j++){
        if(a[j] <= pivot){
            ++i;
            swap(&a[i],&a[j]);
        }
    }
    ++i;
    swap(&a[i],&a[r]);
    return i;
}
int Hoarepartition(int a[],int l,int r){
    int pivot = a[l];
    int i = l-1,j = r+1;
    while(1){
        do{
            ++i;
        }while(a[i]<pivot);
        do{
            --j;
        }while(a[j]>pivot);
        if(i<j){
            swap(&a[i],&a[j]);
        }
        else return j;
    }
}
void quickSort1(int a[],int l,int r){
    if(l>=r)return;
    int p= Lomutopartition(a,l,r);
    quickSort1(a,l,p-1);
    quickSort1(a,p+1,r); 
}
void quickSort2(int a[],int l,int r){
    if(l>=r) return;
    int p = Hoarepartition(a,l,r);
    quickSort2(a,l,p);
    quickSort2(a,p+1,r);
}
int cmp(const void*a,const void *b){
    int*x=(int*)a;
    int*y=(int*)b;
    return *x-*y;
}
int main(){
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    quickSort2(a,10,sizeof(int));
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
