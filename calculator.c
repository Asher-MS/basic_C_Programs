#include <stdio.h>

int main()
{
	int oper;
	int a, b;
	a = b = 0;
	printf("Enter the operation \n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");

	scanf("%d", &oper);
	printf("Enter the Numbes");
	scanf("%d %d", &a, &b);
	switch (oper)
	{

	case (1):
	{
		printf("The result is %d", a + b);
		break;
	}
	case (2):
	{
		printf("The result is %d", a - b);
		break;
	}
	case (3):
	{
		printf("The result is %d", a * b);
		break;
	}
	case (4):
	{
		if (b == 0)
			printf("Division by 0 is not possible");
		printf("The result is %d", a / b);
		break;
	}
	}

	return 0;
}