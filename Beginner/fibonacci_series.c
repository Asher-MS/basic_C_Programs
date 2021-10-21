#include<stdio.h>


int main()
{
	int no;
	printf("Enter the Number\n");
	scanf("%d",&no);
	int first=0;
	int second=1;
	for(int i=0;i<no;++i)
	{	
		printf("%d ",first);
		int temp;
		temp=second;
		second+=first;
		first=temp;

	}
	



	return 0;
}