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
    printf("%s", rev);
    return 0;
}