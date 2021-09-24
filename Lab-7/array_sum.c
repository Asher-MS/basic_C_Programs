#include <stdio.h>

int array_sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
	int array[100];
	
    printf("Enter the Size of the array");
    scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d",&array[i]);
	}
	int result;
	result=array_sum(array,n);
	printf("The sum is %d ",result);
	
	
	
    return 0;
}
