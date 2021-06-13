#include<stdio.h>

int main()
{
	int arr[100];
	int length;
	printf("Enter the length");
	scanf("%i",&length);
	

	for(int i=0;i<length;++i)
	{
		scanf("%i",&arr[i]);
		
	}
	int largest=arr[0];
	int smallest=arr[0];
	for(int i=0;i<length;++i)
	{

		if(arr[i]>largest)largest=arr[i];
		if(arr[i]<smallest)smallest=arr[i];

	}
	printf("Largest no is %i\n",largest);
	printf("smallest no is %i",smallest);


	return 0;
}