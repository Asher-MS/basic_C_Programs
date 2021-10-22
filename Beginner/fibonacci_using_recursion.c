#include<stdio.h>

int fibonacci(int n)
{
	
	if(n<=1)return n;
	else{

		
		return fibonacci(n-1)+fibonacci(n-2);
	} 
}


int main()
{
	int n;
	printf("Enter the Number");
	scanf("%d",&n);
	// printf("%d",fibonacci(n));
	for(int i=1;i<=n;++i)printf("%d ",fibonacci(i));



	return 0;
}