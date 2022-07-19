#include<stdio.h>
#include<conio.h>
#define Size 6

 int main()
 {
           int Arr[Size] = {0},i = 0, O_Cnt = 0;

           for(i = 0;i < Size;i++)
           {
                printf("\n %d. Entar Element = ",i+1);
                scanf("%d",&Arr[i]);
           }
           for(i = 0;i < Size;i++)
           {
                printf("\n %d.Element Is = %d",i+1,Arr[i]);
           }
           for(i = 0;i < Size;i++)
           {
                if(Arr[i] % 2 == 1)
                {
                     O_Cnt++;
                }
           }

           printf("\n\n Odd Count Of Elements Is = %d ",O_Cnt);

           getch();
           return 0;

 }
