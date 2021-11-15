#include <stdio.h>
#include <conio.h>


int main()
{
  int x = 0,i = 0, j = 0;
  
  printf("\n Entar Roz Size & Colum Size =");
  scanf("%d",&x);
  
  for( i = 1; i <= x; i++)
   {
     for(j = 1;j <= x; j++)
     {
       if(i==1 || j== 1|| i==x || j==x )
       {
         printf(" * ");
       }
       else 
        {
          printf("   ");
        }
     }
     printf("\n");
   }
   getch ();
  return 0;
}