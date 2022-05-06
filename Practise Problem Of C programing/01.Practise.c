#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int No= 0,Temp =0,Dig = 0,CountNum=0,Cnt =0;
  
  printf("\n Enter A Number = ");
  scanf("%d",&No);
  
  Temp = No;
  
  printf("\n Enter Count Number = ");
  scanf("%d",&CountNum);
  
  while( Temp != 0)
  {
    Dig = Temp %10;
    Temp= Temp /10;
    
    if(Dig == CountNum)
    {
      Cnt++;
    }
  }
  
  printf("\n Number of Count %d",Cnt);
  return 0;
}