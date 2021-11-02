#include <stdio.h>
#include<conio.h>


int main()
{
  int Cnt = 1, No = 0;
  
  printf("\n Enter a Number To Print its Table");
  scanf("%d",&No);
 
 printf("\n Table Of %d is \n,No");
 
 while( Cnt <= 10)
 {
   printf("\n %3d * %3d = %3d",No,Cnt,(No * Cnt));
   
   Cnt++;
 }
  getch();
  return 0;
} 