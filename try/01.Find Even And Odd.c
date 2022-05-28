#include<stdio.h>
#include<conio.h>

int main()
{
  int No=0;

  //up:

  printf("\n Enter A Numbar = ");
  scanf("%d",&No);

  if(No==0)
  {
     printf("\n Numbar Is Netural");
  }
  else if(No%2 ==0)
  {
     printf("\n Numbar Is Even");
  }
  else if(No%2 ==1)
  {
      printf("\n Numbar Is Odd");
  }
  else
      printf("\n Given Numbar Is Wrong ");

     // goto up;


   getch();
   return 0;


}
