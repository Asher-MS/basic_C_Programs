#include <stdio.h>

int main()
{
    int no = 153;
    
    int k=no;
    int t=0;
    int temp;
    while(no>0){
        temp=no%10;
        t += temp*temp*temp;

        no=no/10;
    }



    if (k == t)
    {
        printf("The Number is Armstrong");
    }
    else
    {
        printf("The Number is not  Armstrong");
    }

    return 0;
}
