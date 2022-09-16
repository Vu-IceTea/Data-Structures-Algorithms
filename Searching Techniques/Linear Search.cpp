#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/**
 * @brief 
 * 
 * @param arr 
 * @param n 
 * input array
 */
void inputArr(int arr[], int &n) {
    for(int i=0; i<n; i++) {
        printf("a[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
}

/**
 * @brief 
 * 
 * @param arr 
 * @param n 
 * @param value 
 * @return int 
 * Search the element in array
 */
int LinearSearch(int arr[], int n, int value) {
    for(int i=0; i<n; i++) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;
}

/**
 * @brief 
 * 
 * @param arr 
 * @param n 
 * output array
 */
void outputArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    inputArr(arr, n);
    printf("\nArray is: ");
    outputArr(arr, n);

    int value;
    printf("\nEnter the value: ");
    scanf("%d", &value);
    if(LinearSearch(arr, n, value)) {
    	printf("Find at %d position!", LinearSearch(arr, n, value));
	}
    return 0;
}
