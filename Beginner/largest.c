#include<stdio.h>
int main(){

	int a,b,c;
	printf("Enter the Nummbes");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)printf("%d is the largest\n",a );
	else if(b>a && b>c)printf("%d is the largest",b);
		 else printf("%d is the largest",c);


	return 0;
}