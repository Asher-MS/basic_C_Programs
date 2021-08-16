#include<stdio.h>
#include<math.h>
#include <stdlib.h>

double power(double x,int y)
{
	double result=1;
	for(int i=0;i<abs(y);++i)
	{
		if(y>0)
		{
			result=result*x;
		}
		else
		{
			result=result*(1/x);
		}
	}
	return result;
}
int main()
{
	double x;
	int y;
	printf("Enter the base and power\n" );

	scanf("%lf %d",&x,&y);
	printf("%lf is the result",power(x,y));


	return 0;
}