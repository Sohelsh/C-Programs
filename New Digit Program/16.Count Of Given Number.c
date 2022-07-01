#include<stdio.h>
#include<conio.h>

int main()
{
     int No = 0,Temp = 0,Cnt =0;

     printf("\n Entar A Number = ");
     scanf("%d",&No);

     Temp=No;
     while(Temp != 0)
     {
          Temp = Temp /10;
          Cnt++;
     }
     printf("\n Count Of Given Numbers = %d",Cnt);

     getch();
     return 0;
}
