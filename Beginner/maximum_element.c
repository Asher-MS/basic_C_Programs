#include <stdio.h>
#include <stdlib.h>

int *max_element(int *arr, int n)
{
	int *max;
	max = arr;
	for (int i = 0; i < n; ++i)
	{
		if (*(arr + i) > *max)
			max = (arr + i);
	}
	return max;
}

int main()
{
	int arr[100];
	int n;
	printf("Enter the size of the array");
	scanf("%i", &n);
	printf("Enter the array");
	for (int i = 0; i < n; ++i)
		scanf("%i", &arr[i]);
	int *max = max_element(arr, n);
	printf("largest Element is %i and Address is %p", *max, max);

	return 0;
}
