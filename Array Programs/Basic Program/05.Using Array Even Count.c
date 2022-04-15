#include <stdio.h>
#include<stdio.h>

int main()
{
   int i = 0,Ecnt= 0, arr[3]={};
    
   for(i = 0; i<3;i++)
   {
    printf("\n Enter A Element =");
    scanf("%d",&arr[i]);
   }
   for(i = 0; i< 3;i++)
   {
      printf("\n\nElements of %d =%d",i+101,arr[i]);
   }

    printf("\n\n\t Enter A Serach a Element =");
    scanf("%d",&Ecnt);
    
    for(i = 0; i < 3;i++)
   {
     if(arr[i] % 2 ==0)
     {
       Ecnt++;
     }
     else if
       {
         printf("\n Even Count is %d ");
       }
      else
       {
         printf("noy");
       }
   } 
   
   
  getch();
  return 0;
}