#include<stdio.h>
#include<conio.h>
#define Cnt 3

  int Accepts_Element(int Num[]);
  int Display_Element(int No[] );

  int main()
  {
               int Arr[Cnt] =  {0};

               Accepts_Element(Arr);

               getch();

               Display_Element(Arr);
  }
   int Accepts_Element(int Num[])
   {
              int i = 0;

              for(i = 0;i < Cnt;i++)
              {
                   printf("\n %d.Entar A Elements = ",i+101);
                   scanf("%d",&Num[i]);
              }

               return;
   }
   int Display_Element(int No[])
   {
              int i = 0;

              for(i = 0;i < Cnt;i++)
              {
                   printf("\n Elements Is = %d",No[i]);
              }

              return;

   }


