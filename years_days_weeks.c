#include<stdio.h>


int main(){
	int days,years,weeks,days_mod;
	printf("Enter the no of Days");
	scanf("%i",&days);
	printf("No of Years %i \n",days/365);
	printf("No of weeks %i \n",(days%365)/7);
	printf("No of days %i \n",((days%365)%7));
	return 0;

}