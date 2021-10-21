#include<stdio.h>

int is_prime(int n)
{	
	if(n==1)return 0;
	for(int i=2;i<n;++i)
	{
		if(n%i==0)return 0;
	}
	return 1;
}


int main()
{
	int a,b;
	printf("Enter the limits");
	scanf("%d %d",&a,&b);
	printf("The Prime numbers are\n");
	for(int i=a;i<=b;++i)
	{
		if(is_prime(i))
			printf("%d\n",i);
	}



	return 0;
}