#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{ 
  int Age = 0;
  
  printf("\n\t Enter A Age = ");
  scanf("%d",&Age);
  
  if(Age < 18)
  {
    printf("\n Voter Is Not Eligible For Voting = ");
  }
  else
   {
     printf("\n Voter Is Eligible For voting= ");
   }
   
  getch();
  return 0;
}
