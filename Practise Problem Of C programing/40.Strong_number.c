#include<stdio.h>
#include<conio.h>
int Fact_Cal(int No);

int main()
{
    int Num = 0,Temp = 0, Dig = 0,T = 0, Ans = 0;

    printf("\n Enter Two Number = ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        Ans = Fact_Cal(Dig);
        T = T + Ans;
        Temp = Temp / 10;
    }
    if(Num == T)
    {
        printf("\n Given Number Is Strong = %d",Num);
    }
    else
    {
        printf("\n Given Number Is Not Strong = %d",Num);
    }

    printf("\n ");

    getch();
    return 0;
}

int Fact_Cal(int No)
{
    int Fact = 1;

    while(No > 0)
    {
        Fact = Fact * No;

        No--;
    }
    return Fact;
}
