#include<stdio.h>
#include<stdlib.h>



int main()
{
	char alphabets[26];
	for(int i=0;i<26;++i)
	{
		alphabets[i]=(char)(65+i);
	}
	int i=0;
	for(char* c=alphabets;i<26;++i)
	{
		printf("%c\n",*(c+i));
	}

	return 0;

}
