#include<stdio.h>
#include<conio.h>

 int main()
 {
     int iNo = 0,i = 0;

     printf("\n Enter Number = ");
     scanf("%d",&iNo);

     for(i = 2;i < iNo;i++)
     {
         if(iNo % i== 0)
         {
             break;
         }
     }
     if(i == iNo)
     {
         printf("\n Number Is Prime = %d",iNo);
     }
     else
     {
         printf("\n Number Is Not Prime = %d",iNo);
     }
     getch();
     return 0;

 }
