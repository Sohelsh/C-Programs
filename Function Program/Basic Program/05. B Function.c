#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0
int Mod(int No1,int No2);
int main()
{
  int No1 = 0,No2 =0;
  
  printf("Enter A Number = ");
  scanf("%d%d",&No1,&No2);
  
  printf("\n Module Of = %d %% %d = %d ",No1,No2,Add(No1,No2));
}

int Add(int N1 ,int N2)
{
    int res = 0;
    
    res = N1 % N2;
    
    return res;
}