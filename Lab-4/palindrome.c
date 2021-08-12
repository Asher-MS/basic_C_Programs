#include<stdio.h>
#include<math.h>


int main()
{
	char a[20];
	gets(a);
	int is_palindrome=1;
	int length=0;
	for(int i=0;a[i]!='\0';++i){length++;}
	
	
	
	for(int i=0;i<length;++i)
	{
		if(a[i]!=a[length-i-1])
		{
			is_palindrome=0;
			break;
		}
	}
	if(is_palindrome)
		printf("It is a Palindrome\n");
	else
		printf("It is not a Palindrome");

	return 0;
}