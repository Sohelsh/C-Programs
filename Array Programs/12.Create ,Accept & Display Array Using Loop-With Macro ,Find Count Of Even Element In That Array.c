#include<stdio.h>
#include<conio.h>
#define Size 5

 int main()
 {
           int Arr[Size] =  {0},i = 0,E_Cnt = 0;

           for(i = 0;i < Size;i++)
           {
                printf("\n %d.Entar Elements = ",i+1);
                scanf("%d",&Arr[i]);
           }
           for(i = 0;i < Size;i++)
           {
                printf("\n Element Is = %d",Arr[i]);
           }
           for(i = 0;i < Size;i++)
           {
                if(Arr[i] % 2 == 0)
                {
                     E_Cnt++;
                }
           }

           printf("\n\n Count Of Even Elements Is = %d",E_Cnt);

           getch();
           return 0;
 }
