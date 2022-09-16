#include<stdio.h>
#include<conio.h>

void input(int a[], int n) {
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

void bubbleSort(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=n-1;j>i;j--) {
            if(a[j]<a[j-1]) {
                swap(a[j], a[j-1]);
            }
        }
    }
}

void output(int a[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    input(a, n);
    bubbleSort(a, n);
    printf("After Sorting: ");
    output(a, n);
}