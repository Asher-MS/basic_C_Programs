#include <stdio.h>
#include <math.h>

int main()
{

    int no = 153;

    int k=no;
    int cnt=0;
    while(no>0){
        ++cnt;

        no=no/10;

    

    }

    // printf("%i", cnt);
    
    int s=k;
    int t=0;
    int temp;
    while(k>0){
        temp=k%10;
        // printf("%i \n", temp);
        t += pow(temp, cnt);
        // printf("%i \n", t);

        k=k/10;
    }

    // printf("%i \n", s);
    // printf("%i \n", t);

    if (s == t)
    {
        printf("The Number is Armstrong");
    }
    else
    {
        printf("The Number is not  Armstrong");
    }

    return 0;
}
