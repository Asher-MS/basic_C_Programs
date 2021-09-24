#include<stdio.h>


int linear_search(int* arr,int n,int key)
{
	int location=-1;
	for(int i=0;i<n;++i)
	{
		if(arr[i]==key)
			location=i;
	}
	return location;
}

int main()
{	
	int array[100];
	int n,key;
	printf("Enter the Size of the array");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d",&array[i]);
	
		
	}
	printf("Enter the element to search");
	scanf("%d",&key);
	int location=linear_search(array,n,key);
	if(location+1)
	{
		printf("Element Found at %d",location);
	}
	else
	{
		printf("Element Note Found");
	}
	

	return 0;
}
