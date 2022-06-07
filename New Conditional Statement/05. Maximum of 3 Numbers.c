#include<stdio.h>
#include<conio.h>


  int main()
  {
      int Num1 =0,Num2=0,Num3 =0;

      printf("\n Enter First Numbar = ");
      scanf("%d",&Num1);

      printf("\n Enter Second Numbar = ");
      scanf("%d",&Num2);

      printf("\n Enter Third Numbar = ");
      scanf("%d",&Num3);


      if( Num1 >= Num2 && Num1 >= Num3 )
      {
          printf("\n First Numbar Is Maximum = %d",Num1);
      }

      else if(Num2 >= Num1 && Num2 >= Num3)
      {
          printf("\n Second Numbar Is Maximum = %d",Num2);
      }

      else
      {
          printf("\n Third Numbar Is Maximum = %d",Num3);
      }

      getch();
      return 0;


  }
