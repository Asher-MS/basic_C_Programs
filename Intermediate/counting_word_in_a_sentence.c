#include <stdio.h>
#include <string.h>

void main()
{
    int checker = 0, count = 0, maincount = 0;
    char x[100];
    printf("enter a sentence\t");
    gets(x);
    char y[100];
    printf("Enter the word to search\t");
    gets(y);

    for (int i = 0; i < strlen(x); i++)
    { count = 0;
        if (x[i] == y[0])
        {
            checker = i;
            for (int j = 0; j < strlen(y); j++)
            {
                if (y[j] == x[checker])
                {checker++;
                    count++;
                    if((count == (strlen(y))&&checker!=strlen(x)&&x[checker]!=' ')){
                        count=0;}
                
                }
            

                
            }
            if (count == (strlen(y)))
                {
                    maincount++;
                    
                }
            count = 0;
        }
    }
    printf("count: %ld", maincount);
}