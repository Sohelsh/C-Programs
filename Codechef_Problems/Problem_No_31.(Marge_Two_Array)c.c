#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int * Marge_Array(int A[],int Size1,int B[],int Size2)
{
  int *C;
  int i,j,k;

  C = (int*)malloc((Size1+Size2)*sizeof(int));

  for(i=0,j=0,k=0;i<Size1&&j<Size2;k++)
  {
      if(A[i] < B[j])
      {
          C[k] = A[i];
          i++;
      }
      else
      {
          C[k] = B[j];
          j++;
      }
  }
  while(i < Size1)
  {
      C[k] = A[i];
      i++;
      k++;


  }
  while(j < Size2)
  {
      C[k] = B[j];
      j++;
      k++;

  }

  return C;
}
int main()
{
    int A[] = {10,20,30,40,50},B[] = {2,4,7,9,12,18,30};
    int *Ans,i;

    Ans = Marge_Array(A,5,B,7);

    for(i=0;i < 12;i++)
    {
        printf(" %d ",Ans[i]);
    }

     return 0;
}
