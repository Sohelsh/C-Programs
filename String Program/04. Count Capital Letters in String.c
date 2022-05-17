#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0
///Count Capital Letters In String.
int main()
{
    char cSrc[30]={'\0'};
    int i = 0,L_cnt = 0;
    
       printf("Entar A String = ");
       gets(cSrc);
       
       while(cSrc[i] != '\0')
       {
         if(cSrc[i] >= 'A'&& cSrc[i] <= 'Z')
         {
           L_cnt++;
         }
         i++;
       }
       
        printf("\n Count Capitals Lattes is : %d",L_cnt);

       getch();
       return 0;
}