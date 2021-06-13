#include<stdio.h>



int main()
{
	int arr[100];
	int length;
	printf("Enter the length of array\n");
	scanf("%i",&length);
	for(int i=0;i<length;++i)
	{
		scanf("%i",&arr[i]);
		// printf("%i",arr[i]);

	}
	for(int i=0;i<length;++i)
	{
		for(int j=i+1;j<length;++j)
		{
			if(arr[i]==arr[j])
			{	
				// printf("%i %i\n",arr[i],arr[j]);
				printf("%i \n",arr[i]);
				break;
			}
		}
	}


	return 0;
}