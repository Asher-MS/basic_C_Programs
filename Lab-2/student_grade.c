#include <stdio.h>

int main()
{
    int mark;
    printf("Enter the mark");
    scanf("%d", &mark);

    if (mark < 50)
        printf("Your Grade is F");
    else if (mark < 60)
        printf("Your Grade is C");
    else if (mark < 70)
        printf("Your Grade is B");
    else if (mark < 80)
        printf("Your Grade is B+");
    else if (mark < 90)
        printf("Your Grade is A");
    else if (mark <= 100)
        printf("Your Grade is A+");

    return 0;
}