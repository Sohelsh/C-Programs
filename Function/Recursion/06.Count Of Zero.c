#include<stdio.h>
#include<conio.h>

int Count_Of_Zero(int);

int main()
{
    int No = 0;

    printf("\n Enter Number = ");
    scanf("%d",&No);

    printf("\n Count Of Zero = %d",Count_Of_Zero(No));

    getch();
    return 0;
}
int Count_Of_Zero(Num)
{
    static int Z_Cnt = 0;
    int Dig = 0;

    if(Num > 0)
    {
        Dig = Num % 10;
        Num  = Num / 10;
        if(Dig == 0)
        {
            Z_Cnt++;
        }
        Count_Of_Zero(Num);
    }
    return Z_Cnt;
}
