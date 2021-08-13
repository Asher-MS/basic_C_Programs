#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100];
    int length = 0;
    printf("Enter the length");
    scanf("%d", &length);

    int min = INT_MAX, min_index;
    for (int i = 0; i < length; ++i)
    {

        scanf("%d", &arr[i]);

        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    // printf("%d", min_index);
    arr[min_index] = INT_MAX;

    for (int i = 0; i < length; ++i)
    {

        if (i == 0)
            min = arr[0];
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    printf("The second smallest element is %d", min);
    return 0;
}