#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    printf("Enter the string");
    gets(a);
    char rev[50];

    for (int i = strlen(a) - 1; i >= 0; --i)
    {
        rev[strlen(a) - 1 - i] = a[i];
    }
    rev[strlen(a)] = '\0';
    // printf("%s", rev);
    if (!strcmp(a, rev))
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a Palindrome");
    }
    return 0;
}