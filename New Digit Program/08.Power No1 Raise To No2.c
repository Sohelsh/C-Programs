#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No1 = 0,No2 = 0,Pow = 0,i = 0;

      printf("\n Enter 2 Number To Find Num1 Raise To Num2 = ");
      scanf("%d%d",&No1,&No2);

      for(i = 1,Pow = 1;i <= No2;i++)
      {
           Pow = Pow * No1;
      }

      printf("\n (%d)^ %d = %d",No1,No2,Pow);

      getch();
      return 0;
 }
