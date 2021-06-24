#include <stdio.h>

int main()
{
    int arr[100];
    int length = 0;
    printf("Enter the length");
    scanf("%d", &length);
    int max, min = 0;
    for (int i = 0; i < length; ++i)
    {
        scanf("%d", &arr[i]);
        if (i == 0)
            max = min = arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("The largest element is %d \nThe smallest element is %d", max, min);
    return 0;
}