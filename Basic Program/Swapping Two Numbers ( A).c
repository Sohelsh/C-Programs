#include <stdio.h>
#include<conio.h>

int main()
{ 
  int No1 = 0, No2 = 0,Temp = 0;
  
  printf("\n Enter 2 Number For Swapping  ");
  scanf("%d%d",&No1 ,&No2);
  
  printf("\n Befor Swap 1st Number =%d,Befor Swap 2nd Number =%d ",No1,No2);
  
  Temp = No1;
  No1 = No2;
  No2 = Temp;
  
  printf("\n After swap 1st Number = %d,After swap 2 nd Number = %d",No1,No2);
  
  return 0;
  getch();
} 