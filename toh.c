#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

void toh(int n, char a, char b, char c)
{
    if(n==0)
    {
        return;
    }
    toh(n-1, a,c,b);
    printf("%d [%c -> %c]\n", n, a, b);
    toh(n-1, c, b, a);
}

int main(){
    int n;
    char a ='A';
    char b = 'B';
    char c = 'C';
    scanf("%d", &n);
    toh(n, a, b, c);   
    return 0;
}