#include<stdio.h>
#include<conio.h>

 int main()
 {
     int R = 0,C = 0,EP = 0,SP = 0;

      printf("\n Entar Ending Numbar = ");
      scanf("%d",&EP);

      printf("\n Entar Starting Numbar = ");
      scanf("%d",&SP);

      printf("\n----------------------------------------------------\n");

      for(R = 1;R <= 10;R++)
      {
         for(C = EP;C >= SP;C--)
         {
              printf("%4d",R*C);
         }
         printf("\n");
      }

      printf("\n----------------------------------------------------\n");

      return 0;
      getch();


 }
