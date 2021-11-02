#include <stdio.h>
#include<conio.h>


int main()
{
  int Cnt = 10 ,No = 0;
  
   printf("\n Enter a Number To print its Table =");
   scanf("%d",&No);
   
   printf("\n Table of %d is \n",No);
   
   while(Cnt >= 1)
   {
     printf("\n %3d * %3d = %3d",No,Cnt,(No*Cnt));
     
     Cnt--;
   }
   getch();
  return 0;
} 