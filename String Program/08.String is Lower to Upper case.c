#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
   char cSrc[30] = {'\0'};
   int i = 0;
   
   printf("Enter A String = ");
   gets(cSrc);
   
   while( cSrc[i] != '\0')
    { 
      if( cSrc[i] >= 'a' && cSrc[i] <= 'z')
         {
           cSrc[i] = cSrc[i] - 32 ;
         }
         i++;
    }


   printf("\n Given String is After Upper case : %s ",cSrc);
  
  getch();
  return 0;
}