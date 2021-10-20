#include <stdio.h>
#include <math.h>

int main()
{
	char string[100];
	int length = 0;
	gets(string);
	for (int l = 0; string[l] != '\0'; ++l)
	{
		length++;
	}
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < length - i - 1; ++j)
		{
			if (string[j] > string[j + 1])
			{

				char temp;
				temp = string[j];
				string[j] = string[j + 1];
				string[j + 1] = temp;
				// printf("%s\n",string);
			}
		}
	}

	printf("%s\n", string);

	return 0;
}