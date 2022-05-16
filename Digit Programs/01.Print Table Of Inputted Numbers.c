#include<stdio.h>
#include<conio.h>


int main()
{
  int Cnt = 1,No = 0;
  
   printf("Enter a Number To Print its Table =");
   scanf("%d",&No);
   
   printf("\n Table of &d is \n",No);
   
   while(Cnt <= 10)
   {
     printf("\n %d",(No * Cnt));
     
     Cnt++;
   }
   getch();
   return 0;
}
