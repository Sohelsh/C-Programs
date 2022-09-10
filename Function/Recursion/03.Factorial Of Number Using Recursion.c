#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{
    int No = 0, Fact = 0;

    printf("\n Enter Number = ");
    scanf("%d",&No);

    Fact = Factorial(No);

    printf("\n Factorial Of Number  %d  =  %d",No,Fact);

    getch();
    return 0;
}
int Factorial(Num)
{
    static int Res = 1;

    if(Num > 1)
    {
        Res = Factorial(Num - 1);
    }
    return Res * Num;
}
