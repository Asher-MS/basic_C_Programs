#include <stdio.h>
#include <math.h>

int main()
{
	char string[100];
	gets(string);
	int vowel_count = 0, consonant_count = 0, space_count = 0;
	for (int i = 0; string[i] != '\0'; ++i)
	{
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
		{
			vowel_count++;
		}
		else
		{
			if (string[i] == ' ')
				space_count++;
			else
				consonant_count++;
		}
	}
	printf("Vowels : %d\nConsonants : %d\nSpaces : %d\n", vowel_count, consonant_count, space_count);

	return 0;
}