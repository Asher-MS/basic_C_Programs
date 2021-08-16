#include<stdio.h>
#include<math.h>

int is_prime(int no)
{
	int primeis=1;
	for(int i=2;i<no/2;++i)
	{
		if(no%i==0)
		{
			primeis=0;
			break;
		}

	}
	return primeis;
}


int main()
{
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	// printf("%d",is_prime(no));
	if(is_prime(no))
		printf("The number is prime");
	else
		printf("The number is Composite");


	return 0;
}