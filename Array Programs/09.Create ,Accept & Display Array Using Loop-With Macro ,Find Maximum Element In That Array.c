#include<stdio.h>
#include<conio.h>
#define Cnt 7

 int main()
 {
      int Arr[Cnt] ={},i = 0,Max = 0;

      printf("\n\t Entar Seven Numbers = ");

      for(i = 0;i < Cnt;i++)
      {
           printf("\n Entar %d Numbers =  ",i+1);
           scanf("%d",&Arr[i]);
      }

      for(i = 0;i < Cnt;i++)
      {
           if(Max < Arr[i])
           {
                Max = Arr[i];
           }
      }

      printf("\n Maximum Number Is = %d",Max);
 }
