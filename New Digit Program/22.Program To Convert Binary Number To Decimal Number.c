#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No = 0,Temp = 0,Dig = 0, Dec = 0,Base =1;

      printf("\n Enter Binary Number = ");
      scanf("%d",&No);

      Temp = No;

      while(Temp != 0)
      {
           Dig = Temp %10;
           Temp= Temp /10;
           Dec = Dec + Dig *Base;
           Base = Base *2;
      }

      printf("\n Binary Number = %d To Decimal Number = %d",No,Dec);

      getch();
      return 0;
 }
