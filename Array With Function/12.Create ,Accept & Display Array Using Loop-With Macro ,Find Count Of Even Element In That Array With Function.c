#include<stdio.h>
#include<conio.h>
#define Cnt 5

 int Accepts_Element(int N1[]);
 int Find_Even_Cnt(int N2[]);

 int main()
 {
      int Arr[Cnt] ={};

      Accepts_Element(Arr);

      getch();

      printf("\n Count Of Even Elements  Is = %d",Find_Even_Cnt(Arr));

 }
 int Accepts_Element(int N1[])
 {
      int i =0;

      for(i =0;i < Cnt;i++)
      {
           printf("\n Entar Numbers = ");
           scanf("%d",&N1[i]);
      }
      return 0;
 }
  int Find_Even_Cnt(int N2[])
  {
       int i = 0,E_Cnt = 0;

       for(i = 0;i < Cnt;i++)
       {
            if(N2[i] % 2 == 0)
            {
                 E_Cnt++;
            }
       }
       return E_Cnt;

  }

