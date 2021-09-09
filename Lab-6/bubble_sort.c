#include<stdio.h>

void bubblesort(int* a,int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n-i;++j)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	
}


int main()
{
	int a[100];
	int n;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	printf("Enter the elements");
	for(int i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("Sorted array is : ");
	for(int i=0;i<n;++i)
	{
		printf("%d ",a[i]);
	}


	return 0;
}