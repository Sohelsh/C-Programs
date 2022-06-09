#include<stdio.h>
#include<conio.h>

 int main()
 {
     int No =0;


     printf("\n Enter A Numbar = ");
     scanf("%d",&No);

     if(No % 5 ==0 && No % 7==0)
     {
         printf("\n Given Numbar Divisible By Both 7 & 5 = %d",No);
     }
     else if( No % 5==0)

     {
         printf("\n Given Numbar Divisible By Only 5 = %d",No);
     }
     else if (No % 7==0)
     {
         printf("\n Given Numbar Divisible By Only 7 = %d",No);
     }
     else
     {
         printf("\n Given Numbar Divisible Not By Both 7 & 5 = %d",No);
     }

     getch();
     return 0;
}
