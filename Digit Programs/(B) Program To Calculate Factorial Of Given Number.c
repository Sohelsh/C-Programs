#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0, Fact = 1, Temp = 0 ;
  
  printf("\n Enter Number To Calculate Its Factorial = ");
  scanf("%d",&No);
  
  for(Fact = 1,Temp = No; Temp > 1; Fact *= Temp , Temp--);
  
  printf("\n Factorial Of Number %d is = %d",No,Fact);
  
  printf("\n Thanks");
  
  getch();
  return 0;
  
 
  
} 