#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No = 0, Temp = 0,Cnt = 0,Dig = 0,Count_Num = 0;

      printf("\n Enter A Number = ");
      scanf("%d",&No);

      printf("\n Enter A Which Number Count = ");
      scanf("%d",&Count_Num);

      Temp=No;
      while(Temp != 0)
      {
           Dig = Temp %10;
           Temp = Temp /10;

           if(Dig == Count_Num)
             {
                  Cnt++;
             }
      }

      printf("\n Count Of %d Is = %d",Count_Num,Cnt);

      getch();
      return 0;
 }
