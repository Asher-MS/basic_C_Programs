#include <stdio.h>
#include <stdlib.h>

#define C_SIZE 25

union Address
{
   char name[C_SIZE];
   char house[C_SIZE];
   char city[C_SIZE];
   char state[C_SIZE];
   char pincode[C_SIZE];
}a;

int main()
{
    printf("Enter the name of the person:");
    gets(a.name);
    printf("Name: ");
    puts(a.name);
    printf("\n");

    printf("Enter the name of the house:");
    gets(a.house);
    printf("House name: ");
    puts(a.house);
    printf("\n");

    printf("Enter the name of the city:");
    gets(a.city);
    printf("City: ");
    puts(a.city);
    printf("\n");

    printf("Enter the name of the state:");
    gets(a.state);
    printf("State: ");
    puts(a.state);
    printf("\n");
	
    printf("Enter pincode:");
    gets(a.pincode);
    printf("Pincode: ");
    puts(a.pincode);

    return 0;
}