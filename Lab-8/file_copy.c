#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fileptrsource,*fileptrdestination;
	fileptrsource=fopen("sample.txt","r");
	if(fileptrsource==NULL)
	{
		printf("Unable to read source file");
		exit(0);
	}
	fileptrdestination=fopen("sample_dest.txt","w");

	while(1)
	{	
		char currentChar=fgetc(fileptrsource);
		if(currentChar==EOF)break;
		fprintf(fileptrdestination,"%c",currentChar);
		
	}


}
