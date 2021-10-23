#include<stdio.h>

struct student
{
	char name[100];
	int rollno;

	int marks[3];
};

float student_average_finder(struct student stu)
{
	int sum=0;
	for(int i=0;i<3;++i)
	{	
		sum+=stu.marks[i];

	}
	return sum/3;
}

int main()
{	
	struct student students[100];
	int n;
	printf("Enter the no of students");
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;++i)
	{
		printf("Enter the details of student no %d\n",i+1);
		printf("Enter the name of the student");
		getchar();
		gets(students[i].name);
		printf("Enter the rollno");
		scanf("%d",&students[i].rollno);
		printf("Enter the marks of three subjects");
		scanf("%d %d %d",&students[i].marks[0],&students[i].marks[1],&students[i].marks[2]);
		printf("The average mark of student %d is %f\n",i+1,student_average_finder(students[i]));
	}



	return 0;
}