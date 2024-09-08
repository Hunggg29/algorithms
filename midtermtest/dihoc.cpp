#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int max = 0;
int n = 0;
int *a;
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
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
void quickSort(int a[],int l,int r){
    if(l>=r)return;
    int p= Lomutopartition(a,l,r);
    quickSort(a,l,p-1);
    quickSort(a,p+1,r); 
}

int main() 
{   int sum=0,fee = 0;
    scanf("%d", &n);
    a= (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
    quickSort(a, 0, n - 1);
    sum = a[0] * n;
    if (sum > max)
    {
        max = sum;
        fee = a[0];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        continue;
        int sum = a[i] * (n - i);
        if (sum > max)
        {
            max = sum;
            fee = a[i];
        }
    }
    printf("%d %d", max, fee);
    return 0;
 
}