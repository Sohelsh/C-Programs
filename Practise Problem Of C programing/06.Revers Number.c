#include<stdio.h>
#include<conio.h>

 int main()
 {
      int No = 0,Dig = 0;

      scanf("%d",&No);

      while(No > 0)
      {
           Dig = No % 10;
      }

      printf("%d",Dig);

      getch();
      return 0;
 }
