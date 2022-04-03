#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
   char Carr[40]={};
   int i = 0;
   
   puts("Enter A String = ");
   gets(Carr);
   
   for(i =0;i<=40;i++)
    {
      if(Carr[i] == '\0')
      {
        break;
      }
   
    }
    printf("\n Length of String is %d",i);
   getch();
  return 0;
}