#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Limit");
    scanf("%i", &n);
    int first = 0;
    int second = 1;
    printf("%i ", first);
    for (int i = 0; i < n - 1; ++i)
    {
        printf("%i ", second);
        int temp;
        temp = second;
        second = second + first;
        first = temp;
    }

    return 0;
}