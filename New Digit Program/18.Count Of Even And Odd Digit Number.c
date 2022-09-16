#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No = 0,Temp = 0,Dig =0,E_Cnt = 0,O_Cnt =0;

      printf("\n Entar A Numbers = ");
      scanf("%d",&No);

      Temp=No;

      while(Temp != 0)
      {
           Dig = Temp % 10;
           Temp = Temp/10;

           if(Dig % 2 ==0)
           {
                E_Cnt++;
           }
           else
           {
                O_Cnt++;
           }
      }

      printf("\n\n Given Number Is %d \n\n Even Count Is = %d \n\n Odd Count Is = %d. ",No,E_Cnt,O_Cnt);

      getch();
      return 0;
 }
