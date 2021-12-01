#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;
  Up:
      
      printf("\n Enter a Number To Check Whether it is +ve or -ve = ");
      scanf("%d",&No);
      
      if(No == 0)
      {
        printf("\n You Have Entered Zero , Which is Neatral. ");
        printf("\n Please Enter Valid Number ..\n ");
        goto Up;
      }
      if(No > 0)
      {
        printf("\n Welcome You Have Entered a Postive Number ");
      }
      else
      {
        printf("\n Welcome You Have Entered a Negative Number ");
      }
      
      getch();
      printf("\n\n Thanks For Intaracting...");
      
      getch();
      return 0;
}
