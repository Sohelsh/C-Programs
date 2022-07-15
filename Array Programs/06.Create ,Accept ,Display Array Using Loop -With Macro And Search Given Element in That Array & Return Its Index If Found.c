#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Cnt 3

 int main()
 {
     int Arr[Cnt]={},i = 0, Ser = 0;

     printf("\n\t******Entar Element******");
     for(i = 0;i < Cnt;i++)
     {
         Up:
         printf("\n %d.Entar A Element = ",i+1);
         scanf("%d",&Arr[i]);

         if(Arr[i] <= 0)
         {
             goto Up;
         }
     }
     system("cls");
     getch();


     printf("\n\t******Element List******");
     for(i = 0;i < Cnt;i++)
     {
         printf("\n Element Of %d = %d",i+1,Arr[i]);
     }
     getch();
     system("cls");

     printf("\n******Search Element******");

     printf("\n Entar Search Element = ");
     scanf("%d",&Ser);

     for(i = 0;i < Cnt;i++)
     {
         if(Arr[i] == Ser)
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

      return 0;
      getch();
 }
