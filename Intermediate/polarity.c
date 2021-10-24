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
        switch (no)
        {
        case 0:
        {
            printf("The number is 0");
            break;
        }
        default:
            printf("The Number is  Positive");
            break;
        }
        break;
    case -1:
        printf("The Number is negative");
    default:
        break;
    }

    return 0;
}