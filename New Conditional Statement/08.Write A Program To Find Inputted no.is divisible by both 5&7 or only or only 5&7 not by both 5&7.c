#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No =0;

     printf("\n Entar A Number = ");
     scanf("%d",&No);

     if(No % 5 == 0 && No % 7 == 0)
     {
      printf("\n Divisible By 5 And 7");
     }
     if (No % 5 == 0)
     {
     printf("\n\n Divisible By Only 5");
     }
     if(No % 7 == 0)
     {
     printf("\n\n Divisible By Only 7");
     }
     else
     {
     printf("\n\n Not Divisible By Both");
     }

     getch();
     return 0;
 }
