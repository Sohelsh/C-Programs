#include <stdio.h>
#include<conio.h>

int main()
{
  int R=0,C=0,SP=0,EP=0;
  
   printf("\n Enter Start Point For Tables =");
   scanf("%d",&SP);
   
   printf("\n Enter End Point For Tables =");
   scanf("%d",&EP);
   
   printf("\n**********=====**********\n");
   
    for(R=1;R<=10;R++)
    {
      for(C=SP;C<=EP;C++)
      {
        printf(" %3d ",R*C);
      }
       printf("\n");
    }
     printf("\n**********=====**********\n");
     
     getch();
     return 0;
}
