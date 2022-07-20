#include<stdio.h>
#include<conio.h>
#define Size 5

 int Accepts_Elements(int N1[]);
 int Display_Elements(int N2[]);
 int Find_Second_Max(int N3[]);

 int main()
 {
               int Arr[Size] = {0};

               Accepts_Elements(Arr);

               getch();

               Display_Elements(Arr);

               getch();

               printf("\n Second Maximum Number Is = %d",Find_Second_Max(Arr));
 }
 int Accepts_Elements(int N1[])
 {
               int i = 0;

               for(i = 0;i < Size;i++)
               {
                printf("\n Entar Element = ");
                scanf("%d",&N1[i]);
               }

               return;

 }
  int Display_Elements(int N2[])
 {
               int i = 0;

               for(i = 0;i < Size;i++)
               {
                 printf("\n Element Is = %d",N2[i]);
               }
               return;
 }
  int Find_Second_Max(int N3[])
  {
               int i = 0,Max = 0, S_Max = 0;

               for(i = 0;i < Size;i++)
               {
                    if(Max < N3[i])
                    {
                         Max = N3[i];
                    }
                    else if(Max != N3[i] && S_Max < N3[i])
                    {
                         S_Max = N3[i];
                    }
               }
               printf("\n\n Maximum Number Is = %d",Max);

               return S_Max;

  }

