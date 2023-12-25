#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Dig = 0,Temp = 0,Sum = 0;

    printf("\n Enter A number = ");
    scanf("%d",&No);

    Temp = No;
    while(Temp != 0)
    {
        Dig = Temp % 10;
        Temp = Temp / 10;

        Sum = Sum +(Dig * Dig * Dig);
    }
    if(Sum == No)
    {
        printf("Number Is Armstrong = %d",No);
    }

    getch();
    return 0;
}
