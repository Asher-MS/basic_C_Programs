#include<stdio.h>
#include<math.h>
// #include<stdlib.h>
int main()
{
	float a,b,c;
	printf("Enter the Coefficients\n");
	scanf("%f %f %f",&a,&b,&c);
	float det=pow(b,2)-(4*a*c);
	if(det<0)
	{
		printf("Imaginary roots");
// 		exit(0);
		return 0;
	}
	printf("The roots are %f %f",(-b+pow(det,0.5))/(2*a),(-b-pow(det,0.5))/(2*a));
	return 0;
}
