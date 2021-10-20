#include<stdio.h>
#include<stdlib.h>


void reverse_string(char *str)
{
	int length=0;
	for(int i=0;str[i]!='\0';++i)length++;
	for(int i=0;i<length/2;++i)
	{
		//printf("%c %c\n",str[i],str[length-i-1]);
		char temp;
		temp=*(str+i);
		*(str+i)=*(str+(length-i-1));
		*(str+(length-i-1))=temp;
	}
	
	
}
int main()
{
	char str[10];
	printf("Enter the String");
	gets(str);
	reverse_string(str);
	printf("The reverse string is %s",str);

	return 0;
}
