#include<stdio.h>


int main(){
	int n;
	printf("Enter the Number\n");
	scanf("%d",&n);
	int fact=1;
	for(int i=1;i<=n;++i){
		fact=fact*i;
	}

	printf("The factorial is %d",fact);
	return 0;

}