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

    //Bubble Sort
    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < length - i - 1; ++j)
        {
            // printf("%d boom %d\n", arr[j], arr[j + 1]);
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The second smallest element is %d", arr[1]);

    return 0;
}