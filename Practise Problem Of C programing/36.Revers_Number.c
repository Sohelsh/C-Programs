#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Temp = 0,Rev = 0, Add = 0;

    printf("\n Enter Number = ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Rev = Temp % 10;
        Add = (Add * 10)+ Rev;
        Temp = Temp / 10;
    }

    printf("\n Revers Number IS = %d",Add);

    getch();
    return 0;
}
