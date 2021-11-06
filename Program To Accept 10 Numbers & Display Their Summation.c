 #include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int No = 0 , Sum = 0,Cnt = 0;
  
  for(Cnt =1 ; Cnt <= 10 ; Cnt ++)
  {
    printf("\n\t Enter Number %d = ",Cnt);
    scanf("%d",&No);
    
    Sum = Sum + No;
  }
  printf("\n Press Any Key To Get Summation Of Given Number = ");
  scanf("%d",&Sum);       // getche();
  system("cls");
  
  printf("\n Summation Of Given Number = %d",Sum);
  
  printf("\n\n Thanks");
  
  getch();
  return 0;
  
}