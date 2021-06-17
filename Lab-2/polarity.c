#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no;
    printf("Enter the Number");
    scanf("%i", &no);
    switch (no / abs(no))
    {
    case 1:
        if (no == 0)
            printf("No is 0");
        else
            printf("The number is Positive");
        break;
    case -1:
        printf("The Number is negative");
    default:
        break;
    }

    return 0;
}