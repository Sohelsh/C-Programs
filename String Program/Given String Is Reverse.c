#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
   char Schar[5]={'\0'};
 
   puts("Enter a string =");
   gets(Schar);
   
   puts("Given String Is =");
   puts(Schar);
  
   
   getch();
   return 0;
}   i++;
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