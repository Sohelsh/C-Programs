#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No1 = 0,No2 = 0,Div = 0;

      printf("\n Enter Two Numbers For Division = ");
      scanf("%d%d",&No1,&No2);

      Div = No1 / No2;

      printf("\n Division Of %d / %d = %d",No1,No2,Div);


      getch();
      return 0;
 }
