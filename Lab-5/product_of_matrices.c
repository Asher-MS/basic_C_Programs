#include<stdio.h>


int main()
{
	int x1,y1,x2,y2;
	int arr1[100][100],arr2[100][100];
	int result[100][100];
	printf("Enter the dimensions of first matrix");
	scanf("%d %d",&x1,&y1);
	printf("Enter the dimension of second matrix");
	scanf("%d %d",&x2,&y2);
	if(y1==x2)
	{
	printf("Enter the first matrix");
	for(int i=0;i<x1;++i)
	{
		for (int j=0;j<y1;++j)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the second matrix");
	for(int i=0;i<x2;++i)
        {
                for (int j=0;j<y2;++j)
                {
                        scanf("%d",&arr2[i][j]);
                }
        }
	


		for(int i=0;i<x1;++i)
		{
			
			for(int j=0;j<y1;++j)
			{	
				int temp_sum=0;
				for(int k=0;k<x2;++k)
				{
					temp_sum+=arr1[i][k]*arr2[k][j];

				}
				result[i][j]=temp_sum;

			}
			
		}
	}
	else{
		printf("Multiplication not possible");
		return 0;
	}

	for(int i=0;i<x1;++i)
	{
		for(int j=0;j<y2;++j)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}



	




	return 0;
}
