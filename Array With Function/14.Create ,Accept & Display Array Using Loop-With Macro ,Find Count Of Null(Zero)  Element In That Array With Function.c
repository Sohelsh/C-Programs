#include<stdio.h>
#include<conio.h>
#define Size 5

 int Accepts_Element(int N1[]);
 int Find_Zero_Cnt(int N2[]);

 int main()
 {
               int Arr[Size] =  {0};

               Accepts_Element(Arr);

               getch();

               printf("\n Count Of Null(0) Element Is = %d",Find_Zero_Cnt(Arr));
 }
 int Accepts_Element(int N1[])
 {
               int i = 0;

               for(i = 0;i < Size;i++)
               {
                printf("\n Entar A Elemnts = ");
                scanf("%d",&N1[i]);
               }
               return;
 }
 int Find_Zero_Cnt(int N2[])
 {
               int i = 0, Z_Cnt = 0;

               for(i = 0;i < Size;i++)
               {
                   if(N2[i] == 0)
                   {
                      Z_Cnt++;
                   }
               }
               return Z_Cnt;
 }


