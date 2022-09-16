#include<stdio.h>
#include<conio.h>

 int main()
 {
          int No1 = 0,No2 =0,Per = 0;

          printf("\n Entar A Number Of Percentage = ");
          scanf("%d",&No1);

          printf("\n How Much Percent = ");
          scanf("%d",&No2);

          Per = (No1 * No2) /100;


          printf("\n Addition  Of |%d| & |%d| = %d",No1,No2,Per);


          getch();
          return 0;

 }


