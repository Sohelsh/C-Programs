#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int x = 0 ,i = 0, j = 0;
  
  printf("\n Enter Row Size and Colum Size = ");
  scanf("%d",&x);
  
  for(i = 1;i <= x ;i++)
    {
      for(j = 1;j <= x;j++)
      {
        if(j == 1 || j == x || i == (x+1)/2)
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