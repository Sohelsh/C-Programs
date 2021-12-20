#include <stdio.h>
#include <conio.h>

int main()
{
  int Age = 0;
  
  printf("\n Enter Voter Age = ");
  scanf("%d",&Age);
  
  if(Age <= 18)
   {
     printf("\n Voter is Eligible ");
   }
   else
   {
     printf("\n Voter is Not Eligible ");
   }
    
  getch();
  return 0;
}
