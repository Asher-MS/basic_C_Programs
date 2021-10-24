#include <stdio.h>
 
int main()
{
  
    float fahren,celsius;
    int choice;
 
    printf("\n1: Convert temperature from Fahrenheit to Celsius."); 
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice (1, 2): ");
    scanf("%d",&choice);
 
    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fahren);
        celsius= (fahren - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",celsius);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&celsius);
        fahren= (celsius*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fahren);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}
