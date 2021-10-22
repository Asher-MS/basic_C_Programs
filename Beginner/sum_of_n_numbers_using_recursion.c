#include <stdio.h>
int sum_of_natural_numbers(int n)
{
	if (n == 1)
		return 1;
	else
		return (n + sum_of_natural_numbers(n - 1));
}

int main()
{
	printf("Enter the Limit\n");
	int n;
	scanf("%d", &n);
	printf("The sum is %d", sum_of_natural_numbers(n));

	return 0;
}