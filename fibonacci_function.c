#include<stdio.h>
#include<time.h>


int fibonacci(int n)
{
	if(n<=1)
		return n;
	else
		return fibonacci(n-1)+fibonacci(n-2);

}

void fibonacci_print(int n)
{
	for(int i=0;i<n;++i)
	{
		printf("%d ",fibonacci(i));
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