#include<stdio.h>
#include<conio.h>

 int main()
 {
         int i = 0, Arr[7]= {0};

         for(i = 0; i < 7 ; i++)
         {
            printf("\n Entar A Elements No %d = ",i + 101);
            scanf("%d",&Arr[i]);
         }

         for(i = 0; i < 7 ; i++)
         {
             printf("\n Value Of %d Elements = %d ",i+101,Arr[i]);
         }

         getch();
         return 0;
 }
