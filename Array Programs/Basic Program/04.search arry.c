#include <stdio.h>
#include<stdio.h>

int main()
{
   int i = 0, ser = 0, arr[3]={};
    
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
     scanf("%d",&ser);
    
    for(i = 0; i < 3;i++)
   {
     if(arr[i]== ser)
     {
       break;
     }
     
   }
     if( i < 3)
     {
       printf("\n Element of Found");
     }
     else
     {
       printf("\n Element of  Not Found");
     }
   
  getch();
  return 0;
}
