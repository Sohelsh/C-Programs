#include <stdio.h>
#include<conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int i =0,arr[4] ={};
 
  for(i = 0;i < 4;i++)
  {
    printf("\n Element of %d =%d",i+1,arr[i]);
  }
  getch();
   
  for(i = 0;i < 4;i++)
  {
    printf("\n\n\tEnter A Element %d = ",i+101);
    scanf("%d",&arr[4]);
  }
   getch();
  
   for(i = 0;i < 4 ;i++)
   {
   printf("\n\nElment Of %d = %d",i+1,arr[4]);
   }
  
  getch();
  return 0;
}
