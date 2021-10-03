/* c program for adding two numbers by using function */

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    printf("Enter the Numbers");
    scanf("%d %d", &a, &b);
    printf("The sum is %d", sum(a, b));

    return 0;
}
