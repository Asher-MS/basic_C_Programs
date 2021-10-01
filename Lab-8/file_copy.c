#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fileptrsource,*fileptrdestination;
	char content[100];
	printf("Enter the content of file one");
	gets(content);
	fileptrsource=fopen("source.txt","w");
	fprintf(fileptrsource,"%s",content);
	fclose(fileptrsource);

	fileptrsource=fopen("source.txt","r");
	if(fileptrsource==NULL)
	{
		printf("Unable to read source file");
		exit(0);
	}
	fileptrdestination=fopen("dest.txt","w");

	while(1)
	{	
		char currentChar=fgetc(fileptrsource);
		if(currentChar==EOF)break;
		fprintf(fileptrdestination,"%c",currentChar);
		
	}


}
