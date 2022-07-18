#include<stdio.h>
#include<conio.h>
#define Size 5

 int Accepts_Element(int N1[]);
 int Find_Even_Cnt(int N2[]);
 int Find_Odd_Cnt(int N3[]);
 int Find_Zero_Cnt(int N4[]);

  int main()
  {
            int Arr[Size] = {0};

            Accepts_Element(Arr);

            getch();

            printf("\n Count Of Even Elements Is = %d",Find_Even_Cnt(Arr));
            printf("\n Count Of Odd Elements Is = %d",Find_Odd_Cnt(Arr));
            printf("\n Count Of Null(0) Elements Is = %d",Find_Zero_Cnt(Arr));
  }
  int Accepts_Element(int N1[])
  {
            int i = 0;

            for(i = 0;i < Size;i++)
            {
               printf("\n Entar Elements = ");
               scanf("%d",&N1[i]);
            }
            return;

  }
  int Find_Even_Cnt(int N2[])
  {
            int i = 0, E_Cnt = 0;

            for(i = 0;i < Size;i++)
            {
               if(N2[i] % 2 == 0 && N2[i] != 0)
               {
                    E_Cnt++;
               }
            }
            return E_Cnt;

  }
  int Find_Odd_Cnt(int N3[])
  {
            int i = 0, O_Cnt = 0;

             for(i = 0;i < Size;i++)
            {
               if(N3[i] % 2 == 1)
               {
                    O_Cnt++;
               }
            }
            return O_Cnt;

  }
  int Find_Zero_Cnt(int N4[])
  {
             int i = 0, Z_Cnt = 0;

             for(i = 0;i < Size;i++)
            {
               if(N4[i] == 0)
               {
                    Z_Cnt++;
               }
            }
            return Z_Cnt;
  }
