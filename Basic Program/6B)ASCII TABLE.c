#include <stdio.h>
#include<conio.h>

int main()
{
     int Cnt = 0;
      
     printf("\n\n\t ASCII TABLE => \n");
  
     while(Cnt < 128)
     { 
       
       printf("\n %d = %c. ", Cnt, Cnt);
       
        Cnt++;
     }
  
      getch();
      return 0;
}
