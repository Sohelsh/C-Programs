#include<stdio.h>
#include<conio.h>
#define size 5


int main()
{
    int Arr[5] = {},Lsum = 0,Rsum = 0,sum = 0;
    int i = 0,j = 0;

    for(i = 0; i <= size;i++)
    {
        printf("\n Enter Number %d = ",i);
        scanf("%d",&Arr[i]);
         sum = sum + Arr[i];
    }

    printf("\n Sum Of = %d",sum);

    Rsum = sum ;

    for(j = 0; j < size;j++)
    {
         Rsum = Rsum - Arr[j];

         if(Rsum == Lsum)
         {
             printf("\n Index = %d",j);
         }

         Lsum = Lsum + Arr[j];
    }

    getch();
    return 0;
}
