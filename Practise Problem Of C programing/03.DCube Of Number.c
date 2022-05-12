#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int Dig = 0, Cube = 0;
  
  printf("\n Enter Any Numbers = ");
  scanf("%d",&Dig);
  
  Cube = Dig * Dig * Dig;
  
  printf("\n Cube of Number = %d",Cube);
  
  
  getch();
  return 0;
}
