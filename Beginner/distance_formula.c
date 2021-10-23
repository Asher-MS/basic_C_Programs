#include<stdio.h>
#include<math.h>

int main(){

	float x1,x2,y1,y2;
	float distance;
	printf("Enter the Cordinates in the order x1 y1 x2 y2");
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	distance=pow(pow(x2-x1,2)+pow(y2-y1,2),0.5);
	printf("The Distance Between the points is %f",distance);

	return 0;

}