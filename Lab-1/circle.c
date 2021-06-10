#include<stdio.h>
#include<math.h>

int main()
{
	const float pi=M_PI;
	float radius;
	printf("Enter the radius");
	scanf("%f",&radius);
	float area,cicumference;
	area=pi*radius*radius;
	cicumference=2*pi*radius;
	printf("The Area is %f \nThe Circumference is %f \n",area,cicumference);




	return 0;
}