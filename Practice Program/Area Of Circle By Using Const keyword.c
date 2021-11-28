#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  const float pi  = 3.14;
  int r ; 
  float area;
  printf("\n Entar Of Radious = ");
  scanf("%d",&r);
  
  area = pi * r * r;
  
  printf("\n area of circle is = %f",area);
  
  getch();
  return 0;
}