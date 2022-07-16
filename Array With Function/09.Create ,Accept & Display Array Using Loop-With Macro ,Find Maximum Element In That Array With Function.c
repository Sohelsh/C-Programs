#include<stdio.h>
#include<conio.h>
#define Cnt 3

 int Accepts_Element(int N1[]);
 int Find_Maximum_Num(int N2[]);

 int main()
 {
      int Arr[Cnt] = {};

      Accepts_Element(Arr);

      getch();

      printf("\n Maximum Number Is = %d",Find_Maximum_Num(Arr));

      return;
 }
 int Accepts_Element(int N1[])
 {
      int i = 0;

      for(i = 0;i < Cnt;i++)
      {
           printf("\n %d.Entar Numbers = ",i+1);
           scanf("%d",&N1[i]);
      }
      return;
 }
 int Find_Maximum_Num(int N2[])
 {
      int i = 0, Max = 0;

      for(i = 0;i < Cnt;i++)
      {
           if(Max < N2[i])
           {
                Max = N2[i];
           }
      }
      return;
 }

