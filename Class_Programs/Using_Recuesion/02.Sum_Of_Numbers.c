#include<stdio.h>
#include<conio.h>

int Sum_Of_Number(int Num);

int main()
{
    int Num = 0;

    printf("\n Enter Number = ");
    scanf("%d",&Num);

    printf("\n Sum Of Number = %d",Sum_Of_Number(Num));
}

int Sum_Of_Number(int No)
{
    static int Sum = 0;

    Sum = Sum_Of_Number(No / 10) + ((No % 10)+ Sum);

    return Sum;
}
