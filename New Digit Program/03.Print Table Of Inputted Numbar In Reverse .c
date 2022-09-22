#include<stdio.h>
#include<conio.h>

int main()
{
      int Cnt = 0, No = 0;

      printf("\n Entar A Numbar = ");
      scanf("%d",&No);

      for(Cnt = 10;Cnt >= 1;Cnt--)
      {
          printf("%d",No*Cnt);
          printf("\n");
      }


       return 0;
       getch();

}
