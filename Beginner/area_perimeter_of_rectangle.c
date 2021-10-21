#include<stdio.h>
 

int main(){
	float length,breadth;
	printf("Enter the length and breadth");
	scanf("%f %f",&length,&breadth);
	printf("The Area is %f and the perimeter is %f",length*breadth,2*(length*breadth));
	return 0;

}