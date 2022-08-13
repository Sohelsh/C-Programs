#include<stdio.h>
#include<conio.h>

                                    // Use Of goto keyword
 int main()
 {
     int No1 =0, No2 = 0;

     up:
     printf("\n Enter A Numbar = ");
     scanf("%d%d",&No1,&No2);


     if(No1 == No2)
     {
         printf("\n\n  Both Number Is Equal ");
         goto up;
     }

     else if(No1 > No2)
     {
         printf("\n First Numbar Is Maximum ");
     }
     else
     {
         printf("\n  Second Numbar Is Maximum");
     }


     getch();
     return 0;
 }
