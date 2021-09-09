#include<stdio.h>

void swapper_r(int *a,int *b)
{
	int temp;
	temp=*a;
		
	*a=*b;
	*b=temp;


}

void swapper_v(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("Swapped by call by value : %d %d \n",a,b);

}

int main()
{
	int a,b;
	printf("Enter the Numbers\n");
	scanf("%d %d",&a,&b);
	swapper_v(a,b);
	swapper_r(&a,&b);
	printf("Swapped by call by reference : %d %d",a,b);
	




	return 0;
}