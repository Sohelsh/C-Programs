#include<stdio.h>
#include<conio.h>

int Sum_Of_Numbers(int,int);

int main()
{
            int No1 = 0,No2 = 0,Res = 0;

            printf("\n Entar A Number = ");
            scanf("%d%d",&No1,&No2);

            Res = Sum_Of_Numbers(No1,No2);

            printf("\n Sum Of Two Numbers = %d",Res);

            return 0;
            getch();
}

Sum_Of_Numbers(Num1,Num2)
{
            int Sum = 0;

            Sum = Num1 + Num2;

            return Sum;
}
