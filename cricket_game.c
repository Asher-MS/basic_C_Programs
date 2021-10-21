#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
char name[10];
void bat()
{
    int ui, ci, uscore = 0, a = 1, cscore = 0, wicket = 0;
    srand(time(0));
    while (a == 1)
    {
        printf("\n\n%s:", name);
        scanf("%d", &ui);
        if (ui > 6)
        {
            printf("*please enter a number between 0-6*");
            continue;
        }
        ci = floor(rand() % 7);
        printf("COMPUTER:%d", ci);
        if (ui == ci)
        {
            wicket++;
            printf("\nYou are out, %d wickets remaining", 3 - wicket);
            if (wicket == 3)
            {
                a = 0;
            }
        }
        else
            uscore += ui;
    }
    printf("\n\nALL OUT!\n%s score:%d\n\nNow its computer's turn to bat", name, uscore);
    a = 1;
    wicket = 0;
    while (a == 1)
    {
        printf("\n\n%s:", name);
        scanf("%d", &ui);
        if (ui > 6)
        {
            printf("*please enter a number between 0-6*");
            continue;
        }
        ci = floor(rand() % 7);
        printf("COMPUTER:%d", ci);
        if (ui == ci)
        {
            wicket++;
            printf("\nComputer is out, %d wickets remaining", 3 - wicket);
            if (wicket == 3)
            {
                a = 0;
            }
        }
        else
            cscore += ci;
        if (cscore > uscore)
        {
            printf("\n\nComputer won!!!\nComputer score:%d", cscore);
            break;
        }
    }
    if (a == 0)
        if (uscore > cscore)
            printf("\n\nALL OUT!\nCONGRATS You have won\nComputer Score:%d", cscore);
        else
            printf("\n\nIts a TIE\n");
    printf("\n");
}
void ball()
{
    int ui, ci, uscore = 0, a = 1, cscore = 0, wicket = 0;
    srand(time(0));
    while (a == 1)
    {
        printf("\n\n%s:", name);
        scanf("%d", &ui);
        if (ui > 6)
        {
            printf("*please enter numbers between 0-6*");
            continue;
        }
        ci = floor(rand() % 7);
        printf("COMPUTER:%d", ci);
        if (ui == ci)
        {
            wicket++;
            printf("\nComputer is out, %d wickets remaining", 3 - wicket);
            if (wicket == 3)
            {
                a = 0;
            }
        }
        else
            cscore += ci;
    }
    printf("\n\nALL OUT!\nComputer score:%d\n\nNow its your turn to bat", cscore);
    a = 1;
    wicket = 0;
    while (a == 1)
    {
        printf("\n\n%s:", name);
        scanf("%d", &ui);
        if (ui > 6)
        {
            printf("*please enter numbers between 0-6*");
            continue;
        }
        ci = floor(rand() % 7);
        printf("COMPUTER:%d", ci);
        if (ui == ci)
        {
            wicket++;
            printf("\nYou are out, %d wickets remaining", 3 - wicket);
            if (wicket == 3)
            {
                a = 0;
            }
        }
        else
            uscore += ui;
        if (uscore > cscore)
        {
            printf("\n\nCONGRATS You won!!!\n%s score:%d", name, uscore);
            break;
        }
    }
    if (a == 0)
        if (cscore > uscore)
            printf("\n\nALL OUT!\nCOomputer has won\n%s Score:%d", name, uscore);
        else
            printf("\n\nIts a tie");
    printf("\n");
}
void rules()
{
    printf(
        "Rules: You can either choose to bat or ball.To BAT or BALL, put any number(from "
        "0 to 6) and that will get added to your score while batting. You can bat till "
        "computer puts the same number as yours. While BALLING, computer can bat "
        "till its number is same as yours. Each team will have 3 wickets each. The team getting the highest runs "
        "wins the match.\nALL THE BEST!\tPress Enter to continue");
}
void main()
{
    char ans;
    printf("WELCOME TO HAND CRICKET!!!\n");
    rules();
    getchar();
    int ch;
    printf("\nEnter your name:");
    scanf("%s", name);
    do
    {
        printf("BAT -->1\nBall -->2\nEnter your choice:");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("\nYou chose to bat first!");
            bat();
        }
        else if (ch == 2)
        {
            printf("You chose to ball first!");
            ball();
        }
        else
        {
            printf("Invalid choice!");
        }
        printf("Do you want to play again?(y/n)");
        scanf(" %c", &ans);
    } while (ans == 'Y' || ans == 'y');
    printf("Terminating...\n");
}