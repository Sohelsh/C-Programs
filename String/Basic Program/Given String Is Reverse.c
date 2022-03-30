#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
   char cSrc[30]={'\0'},Dest[30]={'\0'};
   int i =0 ,j = 0;
  
    printf("Enter A String = ");
    gets(cSrc);
    
    while(cSrc[i] != '\0')
    {
      i++;
    }
      i--;
      
    while(i >= 0)
    {
      Dest[j] = cSrc[i];
      
      i--;
      j++;
    }
    
    Dest[j] = '\0';
    
    printf("\n Given String is = %s",cSrc);
    printf("\n Given String Is Reverse =%s",Dest);
    
    getch();
    return 0;
}