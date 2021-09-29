#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *fp;
	fp=fopen("sample_file.txt","r");
	if(fp==NULL)
	{
		printf("Unable to open file");
	}
	char ch;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		printf("%c\n",ch);
	}
		
	return 0;



}
