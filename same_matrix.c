#include<stdio.h>

int main()
{	

	int arr1[100][100];
	int arr2[100][100];
	int x,y;
	printf("Enter the Dimesions of the array");
	scanf("%d %d",&x,&y);

	for(int i=0;i<x;++i)
	{	
		
		for(int j=0;j<y;++j)
		{
			scanf("%d",&arr1[i][j]);



		}
		
	}

	for(int i=0;i<x;++i)
	{	
		
		for(int j=0;j<y;++j)
		{
			scanf("%d",&arr2[i][j]);

			if(arr2[i][j]==arr1[i][j]){}
				else{printf("The matrices are not same");return 0;}

		}
		
	}
	printf("The matrices are same");




	return 0;
}