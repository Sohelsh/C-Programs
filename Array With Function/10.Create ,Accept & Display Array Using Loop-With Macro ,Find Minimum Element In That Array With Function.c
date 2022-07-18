#include<stdio.h>
#include<conio.h>
#define Cnt 5

 int Accepts_Element(int N1[]);
 int Find_Minimum_Num(int N2[]);

 int main()
 {
          int Arr[Cnt]={};

          Accepts_Element(Arr);

          getch;

          printf("\n Minimum Number Is = %d ",Find_Minimum_Num(Arr));
 }
 int Accepts_Element(int N1[])
 {
          int i = 0;

          for(i = 0;i < Cnt; i++)
          {
               printf("\n Entar Elements = ");
               scanf("%d",&N1[i]);
          }
          return;
 }
 int Find_Minimum_Num(int N2[])
 {
          int i = 0,Min = 0;

          for(i = 0;i < Cnt; i++)
          {
             if(Min > N2[i])
             {
                  Min = N2[i];
             }
          }
           return;
 }

