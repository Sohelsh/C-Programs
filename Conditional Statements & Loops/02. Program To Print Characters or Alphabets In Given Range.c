#include <stdio.h>
#include<conio.h>

int main()
{
  char Sch ='\0',Ech ='\0';
  
  printf("\n Enter a Range to Print Characters =>");
  
  printf("\n\t Start Point = ");
  Sch = getche();
  
  printf("\n\t End Point = ");
  Ech = getche();
  
  for( ;Sch <= Ech ; Sch++)
  {
    printf("\n %c",Sch);
  }
   
   getch();
   return 0;
} 