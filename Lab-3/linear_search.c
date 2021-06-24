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
    int item;
    printf("Enter the Item");
    scanf("%d", &item);
    // printf("%d", item);
    int loc = -1;
    //Search
    for (int i = 0; i < length; ++i)
    {
        // printf("%d", arr[i]);
        if (arr[i] == item)
        {

            loc = i;
            // printf("%d", loc);
            break;
        }
    }
    if (loc != -1)
        printf("Item found at %d", loc);
    else
        printf("Item not Found");
    return 0;
}