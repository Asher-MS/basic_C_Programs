#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Enter the Number\n");
	scanf("%d",&n);
	for(int i=2;i<=pow(n,0.5);++i){
		if(n%i==0){
			printf("It is Composite\n");
			return 0;
		}
	}
	printf("It is Prime\n");

	return 0;

}