#include <stdio.h>
#include <math.h>

int main()
{
    int no = 153;
    printf("Enter the Number");
    scanf("%d", &no);
    int no_of_digits=0;
    for(int i=10;;i=i*10)
    {
        if(no%i==no)
        {
            no_of_digits=log10(i);
            break;
        }

    }
    int temp = no;
    int x = 0;
    while (no >= 1)
    {
        x = x + pow(no % 10, no_of_digits);
        no = no / 10;
    }
    
    if (x == temp)
    {
        printf("The Number is Armstrong");
    }
    else
    {
        printf("The Number is not  Armstrong");
    }

   
    return 0;
}