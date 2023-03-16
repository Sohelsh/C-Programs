#include<stdio.h>
#include<conio.h>


  int main()
  {
      int Num1 = 0,Num2 = 0,Num3 = 0;

      printf("\n Enter First Number = ");
      scanf("%d",&Num1);

      printf("\n Enter Second Number = ");
      scanf("%d",&Num2);

      printf("\n Enter Third Number = ");
      scanf("%d",&Num3);


      if( Num1 >= Num2 && Num1 >= Num3 )
      {
          printf("\n First Number Is Maximum = %d",Num1);
      }

      else if(Num2 >= Num1 && Num2 >= Num3)
      {
          printf("\n Second Number Is Maximum = %d",Num2);
      }

      else
      {
          printf("\n Third Number Is Maximum = %d",Num3);
      }

      getch();
      return 0;


  }
