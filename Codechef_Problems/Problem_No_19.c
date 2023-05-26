#include<stdio.h>
#include<conio.h>


int main()
{
    int X = 3;
    int Y = 4;
    int Z = 12;

        if ((Z%X == 0) && (Z%Y == 0))
        {
            printf("Z is divisible by both X and Y\n");
        }
        else if (Z%X == 0)
        {
            printf("Z is divisible only by X\n");
        }
        else if (Z%Y == 0)
        {
            printf("Z is divisible only by Y\n");
        }
        else
        {
            printf("Z is divisible by neither X nor Y\n");
        }

        X = 3;
        Y = 5;
        Z = 13;
        if ((Z%X == 0) && (Z%Y == 0))
        {
            printf("Z is divisible by both X and Y\n");
        }
        else if (Z%X == 0)
        {
            printf("Z is divisible only by X\n");
        }
        else if (Z%Y == 0)
        {
            printf("Z is divisible only by Y\n");
        }
        else
        {
            printf("Z is divisible by neither X nor Y\n");
        }

    getch();
    return 0;
}
