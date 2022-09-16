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
	b = a;
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
}
