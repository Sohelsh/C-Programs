#include <stdio.h>
#include <conio.h>
# define pi 3.14
//Compiler version gcc  6.3.0

int main()
{
  int r; float area ;
  
  printf("\n Enter of Rodious = ");
  scanf("%d",&r);
  
  area = pi * r * r;
  
  printf("\n area of Circle  = %f",area);
  
  
  getch();
  return 0;
}