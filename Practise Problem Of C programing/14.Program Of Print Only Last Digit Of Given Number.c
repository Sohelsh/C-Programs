#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0,Dig = 0;

      printf("\n Enter A Number = ");
      scanf("%d",&No);

      Dig = No %10;

      printf("\n Given Number Last Digit Is : %d",Dig);

      getch();
      return 0;
}
