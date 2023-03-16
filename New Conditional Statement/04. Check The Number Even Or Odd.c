#include<stdio.h>
#include<conio.h>


 int main()
 {
     int No= 0;

     printf("\n Enter A Any Number = ");
     scanf("%d",&No);

     if(No == 0)
     {
        printf("\n Given Number Is Natural");
     }
     else if(No%2 == 0)
     {
         printf("\n Given Number Is Even ");
     }
     else
     {
         printf("\n Given Number Is Odd");
     }

     getch();
     return 0;
 }
