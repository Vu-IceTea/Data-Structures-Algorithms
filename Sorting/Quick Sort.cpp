#include<stdio.h>

void input(int arr[], int n) {
	for(int i=0;i<n;i++) {
		printf("arr[%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int partition(int arr[], int n, int l, int h) {
	int pivot = arr[h];
	int i = (l-1);
	
	for(int j=l; j<h; j++) {
		if(arr[j]<pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[h]);
	return (i+1);
}

void quickSort(int arr[], int n, int low, int high) 
{ 
    if (low < high) 
    {
        int pi = partition(arr, n, low, high); 

        quickSort(arr, n, low, pi - 1); 
        quickSort(arr, n, pi + 1, high); 
    } 
} 

void printArr(int arr[], int n) {
	for(int i=0;i<n;i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[100], n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	input(arr, n);
	quickSort(arr, n, 0, n-1);
	printf("Sorted Array is: ");
	printArr(arr, n);
}
