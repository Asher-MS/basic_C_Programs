#include<stdio.h>

int is_substring(char st[100],char subst[100])
{	
	int sub_index=0;
	int sub_length=0;
	for(int j=0;subst[j]!='\0';++j)sub_length++;
	for(int i=0;st[i]!='\0';++i)
	{	
		// printf("%c %c\n",st[i],subst[sub_index]);
		if(st[i]==subst[sub_index])
		{
			sub_index++;
			if(sub_index>=sub_length)
			return 1;

		}else
		{
			sub_index=0;
		}
	
	}
	// printf("%d %d",sub_index,sub_length);
	return 0;	
}


int main()
{	
	char st[100],subst[100];
	printf("Enter the string\n");
	gets(st);
	printf("Enter the substring\n");
	gets(subst);

	if(is_substring(st,subst))
		printf("It is a substring");
	else
		printf("It is not a substring");


	return 0;
}