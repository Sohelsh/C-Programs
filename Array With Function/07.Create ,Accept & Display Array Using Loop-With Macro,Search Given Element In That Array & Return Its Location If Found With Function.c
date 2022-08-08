#include<stdio.h>
#include<conio.h>
#define Size 7

 int Accepts_Elements(int N1[]);
 int Display_Elements(int N2[]);
 int Search_Element(int N3[]);

  int main()
  {
               int Arr[Size] =  {0};

               Accepts_Elements(Arr);

               getch();

               Display_Elements(Arr);

               getch();

               Search_Element(Arr);
  }
  int Accepts_Elements(int N1[])
  {
               int i = 0;

               for(i = 0;i < Size;i++)
               {
                  printf("\n Entar A Elements %d = ",i+1);
                  scanf("%d",&N1[i]);
               }
               return;
  }
   int Display_Elements(int N2[])
   {
               int i = 0;

               for(i = 0;i < Size;i++)
               {
                   printf("\n %d.Elements Is = %d",i+1,N2[i]);
               }
   }
    int Search_Element(int N3[])
    {
               int i = 0,Src = 0;

               printf("\n\n Entar A Search Element = ");
               scanf("%d",&Src);

               for(i = 0;i < Size;i++)
               {
                    if(Src == N3[i])
                    {
                         break;
                    }
               }
               if(i < Size )
               {
                    printf("\n Element Is Found :'%d'& Location Is = %d",Src,i+1);
               }
               else
               {
                     printf("\n Element Is Not Found ");
               }

               return;
               getch();

    }
