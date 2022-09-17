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

void interchangeSort(int arr[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(arr[j]< arr[i]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}

void output(int arr[], int n) {
	for(int i=0;i<n;i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[100], n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	input(arr, n);
	interchangeSort(arr, n);
	printf("\nAfter sort: ");
	output(arr, n);
}
