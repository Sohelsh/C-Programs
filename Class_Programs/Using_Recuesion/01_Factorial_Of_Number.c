#include<stdio.h>
#include<conio.h>
int Calu_Fact(int No);

int main()
{
        int No = 0;

        printf("\n Enter Number = ");
        scanf("%d",&No);

        printf("\n Factorial Is = %d",Calu_Fact(No));

        getch();
        return 0;

}

 int Calu_Fact(int Num)
 {
         int Fact = 1;

         if(Num > 1)
         {
             Fact = Num * Calu_Fact(Num - 1);
         }

         return Fact;
 }
