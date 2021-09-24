#include<stdio.h>

struct distance
{
	float feet;
	float inches;
};

struct distance distance_adder(struct distance dis1,struct distance dis2)
{
	float distance_sum=((12*dis1.feet)+dis1.inches)+((12*dis2.feet)+dis2.inches);
	struct distance sum_distance;
	sum_distance.feet=(int)distance_sum/12;
	sum_distance.inches=(int)(distance_sum)%12;
	return sum_distance;

}

int main()
{
	struct distance dis1,dis2,result_distance;
	printf("Enter the first distance in feet inches format");
	scanf("%f %f",&dis1.feet,&dis1.inches);

	printf("Enter the second distance in feet inches format");
	scanf("%f %f",&dis2.feet,&dis2.inches);
	result_distance=distance_adder(dis1,dis2);
	printf("The sum of the distances is %f feet %f inches",result_distance.feet,result_distance.inches);



	return 0;
}