#include<stdio.h>


int main(){
	int a,b,c;
	printf("Enter the Numbers\n");
	scanf("%i %i %i",&a,&b,&c);
	int largest;
	if(a>=b && a>=c)
	{
		largest=a;
	}else
	{
		if(b>=a && b>=c)
		{
			largest=b;
		}else
		{
			largest=c;
		}
	}
	printf("The Largest Number is %i",largest);

	return 0;
}