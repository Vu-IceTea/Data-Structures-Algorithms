#include<stdio.h>

void nhap(int a[], int n) {
    for(int i=0;i<n;i++) {
        printf("a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        int index = i;
        for(int j=i+1;j<n;j++) {
            if(a[j]<a[index]) {
                index = j;
            }
        }
        swap(a[i], a[index]);
    }
}

void output(int a[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[100], n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    nhap(a, n);
    selectionSort(a, n);
    printf("After sorting: ");
    output(a, n);
}
