#include <stdio.h>

int main()
{
    int year;
    int is_leap_year = 0;
    printf("Enter the Year");
    scanf("%i", &year);
    if (year % 400 == 0)
    {
        is_leap_year = 1;
    }
    else
    {
        if (year % 4 == 0 && year % 100 != 0)
            is_leap_year = 1;
    }
    if (is_leap_year)
        printf("The year is leap year");
    else
    {
        printf("The year is not leap year");
    }
    return 0;
}