#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int d = 0, Cube = 0;
  
  printf("\n Enter Any Numbers = ");
  scanf("%d",&d);
  
  Cube = d * d * d;
  
  printf("\n Cube of Number = %d",Cube);
  
  
  getch();
  return 0;
}
