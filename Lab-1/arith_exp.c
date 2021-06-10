#include<stdio.h>

int main(){
	int a,b,c,d,e,f,g;
	printf("Enter the values\n");
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
	float result=((a-b/c*d+e)*(f+g));
	printf("The result is %f",result);


	return 0;
}