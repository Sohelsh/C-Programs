#include <stdio.h>
#include <conio.h>

int main()
{
  
  int No = 0,Fact = 1, Temp = 0;
  
  printf("\n Enter Number To Calculate Its Factorial = ");
  scanf("%d",&No);
  
  Temp = No;
  
  while (Temp > 1)
  {
    Fact = Fact * Temp ;
    Temp--;
  }
  printf("\n Factorial Of Number %d is = %d",No,Fact);
  
  printf("\n\n Thanks ...");
  
  getch();
  return 0;
}
