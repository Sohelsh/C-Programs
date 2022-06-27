#include<stdio.h>
#include<conio.h>
                             //Table Of 5 - 10
 int main()
 {
      int R = 0, C = 0;

      for(R = 1;R <= 10 ; R++)
      {
           for(C = 5;C <= 10;C++)
           {
                printf("% 3d",R*C);
           }
           printf("\n");
      }
      getch();
 }

