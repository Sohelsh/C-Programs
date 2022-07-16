#include<stdio.h>
#include<conio.h>
#define Size 5

 int Accepts_Element(int N1[]);
 int Find_Odd_Cnt(int N2[]);

   int main()
  {
            int Arr[Size] = {0};

            Accepts_Element(Arr);

            getch();

            printf("\n Count Of Odd Elements  Is = %d ",Find_Odd_Cnt(Arr));
  }
   int Accepts_Element(int N1[])
  {
            int i = 0;

            for(i = 0;i < Size;i++)
            {
                 printf("\n Entar Numbers = ");
                 scanf("%d",&N1[i]);
            }
            return;

  }
   int Find_Odd_Cnt(int N2[])
   {
            int i = 0,O_Cnt = 0;

            for(i = 0;i < Size;i++)
            {
                 if(N2[i] % 2 == 1)
                 {
                      O_Cnt++;
                 }
            }
            return O_Cnt;
   }

