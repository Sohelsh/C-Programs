#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Calulate_Perfect_Num(int Num)
{
        int i = 1,Sum = 0;

        while(i < Num)
        {
            if(Num % i == 0)
            {
                Sum = Sum + i;
            }
            i++;
        }
         if(Sum == Num)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}
int main()
{
        int No = 0;

        printf("\n Enter Number = ");
        scanf("%d",&No);

        printf("\n Output Is %d ", Calulate_Perfect_Num(No));

        return 0;
        getch();
}
