#include <stdio.h>

int main()
{
    int arr[100];
    int length = 0;
    printf("Enter the length");
    scanf("%d", &length);
    for (int i = 0; i < length; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int carr[100];

    printf("The New array is ");
    for (int j = 0; j < length; ++j)
    {
        carr[j] = arr[j];
        printf("%d ", carr[j]);
    }

    return 0;
}