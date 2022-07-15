#include<stdio.h>
#include<conio.h>
#define Cnt 3

 int main()
 {
     int Arr[Cnt] = {},i = 0,src = 0;

     for(i = 0;i < Cnt;i++)
     {
         printf("\n %d.Entar A Element = ",i+101);
         scanf("%d",&Arr[i]);
     }

      system("cls");
      getch();

     for(i = 0;i < Cnt;i++)
     {
         printf("\n Element Is %d = %d",i+101,Arr[i]);
     }

     getch();
     system("cls");

     printf("\n Entar Search Element = ");
     scanf("%d",&src);

     for(i = 0;i < Cnt;i++)
     {
         if(src == Arr[i])
         {
             break;
         }
     }
      if(i < Cnt)
      {
          printf("\n Element Is Found :'%d'& Location Is = %d",src,i+101);
      }
      else
      {
          printf("\n Element Is Not Fount ");
      }

       getch();
       return 0;
 }
