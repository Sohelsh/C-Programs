#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,i = 0, GCD = 0;

    printf("\n Enter Two Number = ");
    scanf("%d%d",&No1,&No2);

    for(i = 1; i <= No1 && i <= No2; i++)
    {
        if((No1 % i == 0)&& (No2 % i == 0))
        {
            GCD = i;
        }
    }

    printf("\n GCD Is = %d",GCD);

    getch();
    return 0;
}
