#include <stdio.h>
#include <string.h>
#define C_SIZE 20
union address
{
	char name[C_SIZE];
	char house_name[C_SIZE];
	char city_name[C_SIZE];
	char state[C_SIZE];
	char pincode[C_SIZE];
};

int main()
{
	char address_of_person[100];
	union address person;
	printf("Enter The name\n");
	gets(person.name);
	strcat(person.name, "\n");
	strcpy(address_of_person, person.name);
	printf("Enter the House name");

	gets(person.house_name);
	strcat(person.house_name, "\n");
	strcat(address_of_person, person.house_name);
	printf("Enter the city name");

	gets(person.city_name);
	strcat(person.city_name, "\n");
	strcat(address_of_person, person.city_name);
	printf("Enter the state");

	gets(person.state);
	strcat(person.state, "\n");
	strcat(address_of_person, person.state);
	printf("Enter the pincode");

	gets(person.pincode);
	strcat(person.pincode, "\n");
	strcat(address_of_person, person.pincode);
	printf("ADDRESS : \n");
	printf("%s", address_of_person);

	return 0;
}
