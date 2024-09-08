
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// nếu muốn x đứng trước y trả về -1;
// nếu muốn x đứng sau y trả về 1;
/*int cmp(const void*a,const void *b){
    char*x=(char*)a;
    char*y=(char*)b;
    return strcmp(x,y);
}
int main(){
    char *a[10]={"hhhh","kkkk","aaaaa","cccc","bbbb","dddd","eeeee","ffff","kkkk","bbbbb"};
    qsort(a,10,sizeof(char*),cmp);
    for(int i=0;i<10;i++){
        printf("%s ",a[i]);
    }
    return 0;
}

typedef struct {
    int id;
    char email[21];
} Student;

int cmp(const void *a,const void *b){
    char **x = (char**)a;
    char **y = (char**)b;
    return strcmp(*x,*y);
}
int main(){
    int n;
    scanf("%d",&n);
    char *a[10];
    for(int i=0;i<n;i++){
        fgets
    }
    char *a[5] = {"hhhh","kkkk","aaaa","cccc","abcd"};
    qsort(a,5,sizeof(char*),cmp);
    for(int i=0;i<5;i++){
        printf("%s ",a[i]);
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char email[21];
} Student;

void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

int compareEmail(const void *a, const void *b) {
    return strcmp(((Student *)a)->email, ((Student *)b)->email);
}


int partition(Student arr[], int low, int high) {
    char pivot[21];
    strcpy(pivot, arr[high].email);
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (strcmp(arr[j].email, pivot) < 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(Student arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



int main() {
    int n;
    scanf("%d", &n);

    Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &students[i].id, students[i].email);
    }

    quickSort(students, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", students[i].id, students[i].email);
    }

    return 0;
}
