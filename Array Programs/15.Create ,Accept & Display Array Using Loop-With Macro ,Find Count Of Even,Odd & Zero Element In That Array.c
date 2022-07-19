#include<stdio.h>
#include<conio.h>
#define Size 6

 int main()
 {
                int Arr[Size] = {0},i = 0,E_Cnt = 0,O_Cnt = 0,Z_Cnt = 0;

                for(i = 0;i < Size;i++)
                {
                     printf("\n %d.Entar Element = ",i+101);
                     scanf("%d",&Arr[i]);
                }
                for(i = 0;i < Size;i++)
                {
                     printf("\n Elements Is = %d ",Arr[i]);
                }
                for(i = 0;i < Size;i++)
                {
                     if(Arr[i] != 0 && Arr[i] % 2 == 0)
                     {
                          E_Cnt++;
                     }
                     if(Arr[i] % 2 == 1)
                     {
                          O_Cnt++;
                     }
                     if(Arr[i] == 0)
                     {
                          Z_Cnt++;
                     }
                }
                    printf("\n\n Even Count Of Element Is = %d ",E_Cnt);
                    printf("\n\n Odd Count Of Element Is  =  %d ",O_Cnt);
                    printf("\n\n Zero Count Of Element Is = %d ",Z_Cnt);

                    getch();
                    return 0;
 }
