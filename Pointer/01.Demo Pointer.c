#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int No = 44;
  int *p = &No;
  int **q= &p;
  
  printf("\n Value Of No = %d",*p);
  printf("\n Value Of No = %d",p);
  printf("\n Value Of No = %d",&p);
  printf("\n Value Of No = %d",&No);
  printf("\n Value Of No = %d",**q);
  return 0;
}