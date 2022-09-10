#include<stdio.h>
#include<conio.h>

int Sum_Of_Number();

int main()
{
    printf("\n Enter Five Numbers .....");

    printf("\n Sum Of Five Number Is = %d",Sum_Of_Number());

    getch();
    return 0;
}
int Sum_Of_Number()
{
    static int i = 0,Sum = 0;
    int No = 0;

    if(i < 5)
    {
        printf("\n Enter %d. Number = ",++i);
        scanf("%d",&No);

        Sum = Sum_Of_Number() + No;
    }
    return Sum;
}
