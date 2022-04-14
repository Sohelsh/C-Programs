#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
   char cSrc[20]= {'\0'};
   int i = 0;
   
   printf("Enter A String = ");
   gets(cSrc);
   
   while( cSrc[i] != '\0')
     {
       if( cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
           cSrc[i] = cSrc[i] + 32;
      
        }
        i++;
     }
     
     printf("\n Givan String Is Converted to Lower case = %s",cSrc);
  
  getch();
  return 0;
}