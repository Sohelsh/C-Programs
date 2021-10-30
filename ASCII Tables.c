#include <stdio.h>
#include<conio.h>

int main()
{
   int No = 0;
   
   printf("\n ASCII Tables");
   
   for(No = 0 ; No < 128; No++)
   
      {
        printf(" \n \t \t%d = %c.",No,No);
      }
   
   
    
     getch();
     return 0;
     
 }
