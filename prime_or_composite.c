#include<stdio.h>


int main(){
	int n;
	printf("Enter the Number\n");
	scanf("%d",&n);
	for(int i=2;i<=(n/2);++i){
		if(n%i==0){
			printf("It is Composite\n");
			return 0;
		}
	}
	printf("It is Prime\n");

	return 0;

}