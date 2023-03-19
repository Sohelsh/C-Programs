#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No = 0,Fact = 1;

      printf("\n Enter A Number = ");
      scanf("%d",&No);

      while(No != 0)
      {
           Fact = Fact * No;

           No--;
      }

      printf("\n Factorial Of Number Is = %d",Fact);

      getch();
      return 0;
 }
