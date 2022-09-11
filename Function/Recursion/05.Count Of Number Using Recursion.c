#include<stdio.h>
#include<conio.h>

int Count_Number(int);

int main()
{
    int No = 0;

    printf("\n Enter Number = ");
    scanf("%d",&No);

    printf("\n Count Of Number = %d",Count_Number(No));

    getch();
    return 0;
}
int Count_Number(Num)
{
    static i = 0;

    if(Num > 0)
    {
        i++;
        Num = Num / 10;
        Count_Number(Num);
    }
    return i;
}
