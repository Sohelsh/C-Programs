#include<stdio.h>
#include<conio.h>

int Reverse_Diff(int Num)
{
        int Dig = 0, Temp = 0,Rev = 0;

        Temp = Num;

        while(Temp != 0)
        {
            Dig  = Temp % 10;
            Temp = Temp / 10;
            Rev  = (Rev * 10) + Dig;
        }

        return Num - Rev;
}
int main()
{
        int No = 0;

        printf("\n Enter Number = ");
        scanf("%d",&No);

        printf("\n Difference Of Original Number And Reversed Number = %d",Reverse_Diff(No));

        getch();
        return 0;
}
