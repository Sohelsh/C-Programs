#include<stdio.h>
#include<conio.h>

int main()
{
      int Cnt = 0, No = 0;

      printf("\n Enter A Number = ");
      scanf("%d",&No);

      for(Cnt = 10;Cnt >= 1;Cnt--)
      {
          printf("%d",No*Cnt);
          printf("\n");
      }


       return 0;
       getch();

}
