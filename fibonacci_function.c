#include<stdio.h>
#include<time.h>


// int fibonacci(int n)
// {
// 	if(n<=1)
// 		return n;
// 	else
// 		return fibonacci(n-1)+fibonacci(n-2);

// }

void fibonacci_print(int n)
{
	int first=0,second=1;
	int temp;
	printf("0 ");
	for(int i=0;i<n-1;++i)
	{	
		printf("%d ",second);
		temp=second;
		second=first+second;
		first=temp;

	}
}

int main()
{
	
	printf("Enter the limit");
	int limit;
	scanf("%d",&limit);
	fibonacci_print(limit);	
	return 0;
}