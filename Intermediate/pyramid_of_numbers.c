#include<stdio.h>

void pyramid(int n)
{
	if(n==1)
		printf("1");
	else
	{
		pyramid(n-1);
		printf(" %d",n);
	}
}

int main()
{	
	int limit;
	printf("Enter the limit");
	scanf("%d",&limit);
	for(int i=1;i<=limit;++i)
	{
		pyramid(i);
		printf("\n");
	}
	return 0;
}