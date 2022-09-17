#include<stdio.h>
#include<conio.h>

void input(int arr[], int &n) {
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int arr[], int &n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(arr[j]<arr[j-1])
			{
				swap(arr[j], arr[j-1]);
			}
		}
	}
}

int binarySearch(int arr[], int l, int r, int value) {
	if(r >= l) {
		int m = l+(r-l)/2;
		if(arr[m]==value) {
			return m;
		}
		if(arr[m]>value) {
			return binarySearch(arr, l, m-1, value);
		}
		return binarySearch(arr, m+1, r, value);
	}
	return -1;
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
    BubbleSort(arr, n);
    printf("Array is: ");
    output(arr, n);
    
    int value, l=0, r = n-1;
    printf("\nEnter the value: ");
    scanf("%d", &value);
    int result = binarySearch(arr, l, r, value);
    printf("Find at %d position!", result);
    return 0;
}
