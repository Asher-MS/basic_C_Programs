#include <stdio.h>
#define max 100
int main()
{
    int arr[100];
    int freq[max] = {0};
    // for (int i = 0; i < max; ++i)
    // {
    //     freq[i] = 0;
    // }
    int size;
    printf("Enter the Size of array");
    scanf("%d", &size);
    printf("Enter the Array");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    for (int i = 0; i < max; ++i)
    {
        if (freq[i] != 0)
        {
            printf("Frequency of %d is %d\n", i, freq[i]);
        }
    }
    return 0;
}