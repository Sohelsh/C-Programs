#include <stdio.h>
#include <conio.h>
   //Compiler version gcc  6.3.0
  // Count Small Letters In String

int main()
{  
   char cSrc[20]= {'\0'};
   int i =0,L_cnt = 0;
   
     printf("Enter A String = ");
     gets(cSrc);
     
     while( cSrc[i] != '\0')
     {
       if( cSrc[i] >= 'a' && cSrc[i] <= 'z')
       {
          L_cnt++;
       
       }
       i++;
     }
     printf("\n Count Small Letters is  :%d",L_cnt);
 
     getch();
     return 0;
  
  
}