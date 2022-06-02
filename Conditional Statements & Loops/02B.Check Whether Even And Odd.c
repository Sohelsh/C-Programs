#include <stdio.h>
#include<conio.h>


int main()
{
  int Num = 0;
   
   printf("\n Enter an Integer Number => ");
   scanf("%d",&Num);
   
   if(Num == 0)
     {
        printf("\n Given Number is Natural.");
     }
    else if (Num % 2 == 0)
     {
        printf("\n Given Number is Even.");
     }
    else
     {
         printf("\n Given Number is Odd.");
     }
  return 0;
  getch();
  
 }
