#include<stdio.h>
#include<math.h>

int main()
{
	char a[20],b[20];
	printf("Enter the strings to concatinate");
	gets(a);
	gets(b);
	char result[40];
	int rindex=0;
	for(int i=0;a[i]!='\0';++i,rindex++)
	{
		result[rindex]=a[i];

	}
	for(int i=0;b[i]!='\0';++i,rindex++)
	{
		result[rindex]=b[i];

	}
	result[rindex]='\0';
	printf("%s\n",result);

	return 0;
}