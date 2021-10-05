#include <stdio.h>
#include <string.h>
void main()
{   char x[100];
    printf("enter a sentence\t");
    gets(x);
    char y[100];
    printf("enter a word\t");
    gets(y);
  strcat(y,x);
printf("The new sentence is: %s",y);           
}