#include <stdio.h>

int main()
{
    int arr[100];
    int length = 0;
    printf("Enter the length");
    scanf("%d", &length);
    int flag = 0;
    int min;
    for (int i = 0; i < length; ++i)
    {

        scanf("%d", &arr[i]);
        if (i == 0)
            min = arr[0];
        if (min > arr[i])
            min = arr[i];
    }

    int min2;
    if (arr[0] == min)
        min2 = arr[1];
    else
        min2 = arr[0];

    for (int j = 0; j < length; ++j)
    {
        if (arr[j] < min2 && arr[j] != min)
            min2 = arr[j];
    }
    printf("The second smallest element is %d", min2);
    return 0;
}