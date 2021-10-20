#include <stdio.h>
#include <math.h>
#define max_length 20
int main()
{
	char a[max_length], b[max_length];
	printf("Enter the First string ");
	gets(a);
	printf("Enter the Second String ");
	gets(b);
	char result[2 * max_length];
	int rindex = 0;
	for (int i = 0; a[i] != '\0'; ++i, rindex++)
	{
		result[rindex] = a[i];
	}
	for (int i = 0; b[i] != '\0'; ++i, rindex++)
	{
		result[rindex] = b[i];
	}
	result[rindex] = '\0';
	printf("The Result is \"%s\"", result);

	return 0;
}