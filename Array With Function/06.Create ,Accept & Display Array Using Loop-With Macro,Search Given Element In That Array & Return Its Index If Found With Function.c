#include<stdio.h>
#include<conio.h>
#define Cnt 3

 int Accepts_Element(int N1[]);
 int Display_Element(int N2[]);
 int Search_Element(int N3[]);

 int main()
 {
           int Arr[Cnt] = {0};

           Accepts_Element(Arr);


           getch();
           system("cls");

           Display_Element(Arr);

           getch();
           system("cls");

           Search_Element(Arr);

           printf("\n\n Thanks For Visiting .....");

           return 0;
 }
 int Accepts_Element(int N1[])
 {
           int i =  0;

           printf("\n ********Entar A Elements*********");
           for(i = 0;i < Cnt ;i++)
           {
                 printf("\n Entar A Elements %d =  ",i+1);
                 scanf("%d",&N1[i]);
           }

           return;

      }
  int Display_Element(int N2[])
  {
           int i = 0;

           printf("\n **********Elements List************");
            for(i = 0;i < Cnt ;i++)
          {
                printf("\n Elements Is %d = %d ",i+1,N2[i]);
          }
           printf("\n**************************************");
           return;
  }
   int Search_Element(int N3[])
   {
           int i = 0,Ser = 0;

           printf("\n Entar A Search Element = ");
           scanf("%d",&Ser);

           for(i = 0;i < Cnt ;i++)
           {
                if(Ser == N3[i])
                {
                     break;
                }
           }
           if(i < Cnt)
           {
                printf("\n Element Is Found ");
           }
           else
           {
                printf("\n Element Is Not Found ");
           }

           return;
   }
