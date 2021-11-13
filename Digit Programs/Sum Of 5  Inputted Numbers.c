#include <stdio.h>
#include<conio.h>



int main()
{
      int Cnt = 1,No = 0,Sum =0;
      
      printf("\n Enter 5 Integer Numbers For Addition => \n");
      
      while(Cnt<=5)
      {
        printf("\n Enter a Number %d = ",Cnt);
        scanf("%d",&No);
        
        Sum = Sum + No ;
        
        Cnt++;
        
      }
      
       printf("\n Sumation of given Numbers =%d",Sum);
       
       getch();
       return 0;
  
} 
