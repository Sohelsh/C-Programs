#include<stdio.h>
#include<conio.h>


 int main()
 {
     int No=0;

     printf("\n Enter A Any Numbar = ");
     scanf("%d",&No);

     if(No == 0)
     {
        printf("\n Given Numbar Is Natural");
     }
     else if(No%2 == 0)
     {
         printf("\n Given Numbar Is Even ");
     }
     else
     {
         printf("\n Given Numbar Is Odd");
     }

     getch();
     return 0;
 }
