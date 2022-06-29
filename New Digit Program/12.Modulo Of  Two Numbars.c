#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No1 = 0,No2 =0,Mod = 0;

      printf("\n Entar Two Numbars Of Modulo = ");
      scanf("%d%d",&No1,&No2);

      Mod = No1 % No2;

      printf("\n Modulo Of |%d| & |%d| = %d",No1,No2,Mod);

      getch();
      return 0;

 }
