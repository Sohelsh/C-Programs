#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Fact = 1;

       printf("\n Enter Number = ");
       scanf("%d",&No);

       while(No > 0 )
       {
           Fact = Fact * No;

           No--;
       }

       printf("\n Factorial Of  = %d ",Fact);

       return 0;
       getch();
}
