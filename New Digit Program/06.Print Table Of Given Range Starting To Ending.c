#include<stdio.h>
#include<conio.h>

 int main()
 {
      int R =0,C = 0,SP = 0,EP = 0;

      printf("\n Enter Starting Number = ");
      scanf("%d",&SP);

      printf("\n Enter Ending Number = ");
      scanf("%d",&EP);

      printf("\n----------------------------------------------------\n");

      for(R = 1;R <= 10; R++)
      {
         for(C = SP;C <= EP; C++)
         {
              printf("%4d",R*C);
         }
         printf("\n");
      }

      printf("\n----------------------------------------------------");

      return 0;
      getch();

 }
