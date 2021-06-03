#include<stdio.h>


int main(){

	int no;
	printf("Enter the Number");
	scanf("%d",&no);
	int sum=0;
	while(no>0)
	{
		int temp=no%10;
		sum+=temp;
		no=no/10;

	}
	printf("The Sum is %d\n",sum );

}