#include<stdio.h>
#include<conio.h>

 int main()
 {
         int iValue = 0,i = 1, Sum = 0;

         printf("\n Enter Number = ");
         scanf("%d",&iValue);

         while(iValue > i)
         {
             if(iValue % i == 0 )
             {
                 Sum += i;
             }
             i++;
         }
         if(Sum == iValue)
         {
             printf("\n Number Is Perfect ");
         }
         else
         {
             printf("\n Number Is Not Perfect ");
         }

         return 0;
         getch();
 }
