#include<stdio.h>
#include<conio.h>
int Super_Prime(int Num);
int main()
{
    int No = 0,i = 0;

    printf("\n Enter Number = ");
    scanf("%d",&No);

    for(i = 2; i <= No;i++)
    {
        if(No % i == 0)
        {
            break;
        }
    }
    if(No == i)
    {
        if(No == Super_Prime(No))
        {
            printf("\n Number Is Super Prime = %d",No);
        }
        else
        {
            printf("\n Number Is Not Super Prime = %d",No);
        }
    }
    else
    {
        printf("\n Number Is Not Super Prime = %d",No);
    }
}
int Super_Prime(int Num)
{
    int Sum = 0,Dig = 0;

    Dig = Num % 10;

    Sum = Sum + Dig;

    Num = Num / 10;

    return Sum;
}
