#include<stdio.h>

struct employee
{
	char name[100];
	int eno;
	int salary;
};

int main()
{	
	struct employee employees[100];
	int n;
	int max_salary=0;
	int max_salary_employee_index=0;
	printf("Enter the no of employees\n");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		printf("Enter the details of the %d employee\n",i+1);
		printf("Enter the Employee number\n");
		scanf("%d",&employees[i].eno);
		printf("Enter the Employee name\n");
		getchar();
		// scanf("%[^\n]%*c", employees[i].name);
		// fgets(employees[i].name,100,stdin);
		gets(employees[i].name);
		printf("Enter the Employee salary\n");
		scanf("%d",&employees[i].salary);
		if(max_salary<employees[i].salary)
		{	
			max_salary=employees[i].salary;
			max_salary_employee_index=i;
		}

	}

	printf("The Employee with the highest salary is Employee NO:%d\nEmployee Name:%s\nEmployee salary:%d",employees[max_salary_employee_index].eno,employees[max_salary_employee_index].name,employees[max_salary_employee_index].salary);





	return 0;
}