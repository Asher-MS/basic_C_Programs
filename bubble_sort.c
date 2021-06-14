#include<stdio.h>

int main()
{	
	int length;
	int arr[100];
	printf("Enter the length\n");
	scanf("%i",&length);
	for(int i=0;i<length;++i)
	{
		scanf("%i",&arr[i]);

	}
	for(int i=0;i<length;++i)
	{
		for(int j=0;j<length-i-1;++j)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<length;++i)
	{
		printf("%i ",arr[i]);
	}

	return 0;
}