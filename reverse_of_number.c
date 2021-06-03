#include<stdio.h>


int main(){
	int number;
	printf("Enter the Number\n");
	scanf("%d",&number);
	int result_number=0;
	while(number>0)
	{	
		int temp;
		temp=number%10;
		result_number=result_number*10+temp;
		number=number/10;
	}
	printf("The reverse number is %d",result_number);

	return 0;
}