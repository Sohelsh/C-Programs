#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No1 = 0,No2 = 0,Mul = 0;

      printf("\n Enter 2 Number For Multiplication = ");
      scanf("%d%d",&No1,&No2);


      Mul = No1 * No2;

      printf("\n Multiplication Of %d * %d = %d",No1,No2,Mul);

      getch();
      return 0;
 }
