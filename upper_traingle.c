#include<stdio.h>

int main()
{
	int arr[100][100];
	int x,y;
	printf("Enter the Dimesions of the array");
	scanf("%d %d",&x,&y);
	
	for(int i=0;i<x;++i)
	{	
		
		for(int j=0;j<y;++j)
		{
			scanf("%d",&arr[i][j]);



		}
		
	}
	for(int i=0;i<x;++i)
	{	
		
		for(int j=0;j<y;++j)
		{
			if(i<=j)printf("%d ",arr[i][j]);
			else printf("  ");
			
		}
		printf("\n");
	}

	return 0;
}