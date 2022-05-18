#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define size 4
//Compiler version gcc  6.3.0

int main()
{ 
 int i = 0, Bill_sum = 0,Bill[size] ={0};
   
  for(i = 0;i < size ;i++)
  {
  SameBill:
       printf("\n Enter Bill Number %d = ",(i+1));
       scanf("%d",&Bill[i]);
    
    if(Bill[i] <= 0)
     {
       printf("\n Number is Invalid ");
       goto SameBill;
     }
      Bill_sum += Bill [i];
   
  } 
  getch ();
  system("cls");
  
  for(i = 0;i < size ;i++)
   {
     printf("\n Enter Bill Number %d = %d",(i + 101) ,Bill[i]);
   }
  
  printf("\n\n Total Bill Received Today = %d",Bill_sum);
  
  getch ();
  return 0;
}
