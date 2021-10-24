#include <stdio.h>

int main()
{
    int a[100], i, n, smallest, second_smallest;
    printf("Enter the limit of array:");
    scanf("%d", &n);
    printf("Enter the Array Values:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // if (a[0] < a[1])
    // {
    //     smallest = a[0];
    //     second_smallest = a[1];
    // }
    // else
    // {
    //     smallest = a[1];
    //     second_smallest = a[0];

    // }
    int temp;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != a[0])
        {
            if (a[i] > a[0])
            {
                smallest = a[0];
                second_smallest = a[i];
            }
            else
            {
                smallest = a[i];
                second_smallest = a[0];
            }
            temp = i;
            break;
        }
    }

    for (i = temp; i < n; i++)
    {
        if (a[i] < smallest)
        {
            second_smallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < second_smallest)
        {
            second_smallest = a[i];
        }
    }
    printf("%d is the second Smallest element", second_smallest);
}