#include<stdio.h>
#include<conio.h>
#define Size 6

 int main()
 {
           int Arr[Size] = {0},i = 0, Z_Cnt = 0;

           for(i = 0;i < Size;i++)
           {
                printf("\n %d.Entar Element = ",i+101);
                scanf("%d",&Arr[i]);
           }
           for(i = 0;i < Size;i++)
           {
                printf("\n\n %d.Element Is = %d",i+101,Arr[i]);
           }
           for(i = 0;i < Size;i++)
           {
                if(Arr[i] == 0)
                {
                     Z_Cnt++;
                }
           }

           printf("\n\n Count Of Zero Is = %d",Z_Cnt);

           getch();
           return 0;
 }
