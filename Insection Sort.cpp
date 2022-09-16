#include<stdio.h>
#include<conio.h>

void input(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ");
        scanf("%d", &arr[i]);
    }
    
}

void InsectionSort(int arr[], int n) {
    for(int i=1;i<n;i++) {
        int x = arr[i];
        int pos = i-1;
        while(pos>=0&&arr[pos]>x) {
            arr[pos+1] = arr[pos];
            pos-=1;
        }
        arr[pos] = x;
    }
}

void output(int arr[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[100];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    input(arr, n);
    InsectionSort(arr, n);
    printf("After Sort: ");
    output(arr, n);
}