#include <stdio.h>

int main()
{
    char a[100];
    printf("Enter the String\n");
    gets(a);
    int count = 0;
    for (int i = 0; a[i] != '\0'; ++i)
    {
        count++;
    }
    printf("The Length is %i", count);
    return 0;
}
