#include<stdio.h>
#include<conio.h>

 int main()
 {
     int No = 0,i = 0,Cnt = 0;

     printf("\n Enter A Any Number = ");
     scanf("%d",&No);

     for(i=1;i<=No;i++)
     {
        if(No%i==0)
        {
            Cnt++;
        }
     }
     if(Cnt==2)
     {
         printf("\n Number Is Prime ");
     }
     else
     {
         printf("\n Number Is Not Prime ");
     }

     getch();
     return 0;

 }
