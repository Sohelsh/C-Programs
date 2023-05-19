#include<stdio.h>
#include<conio.h>
#define N  4

int main()
{
    int A[N] = {0};
    int i = 0,j = 0;

    for(i = 0; i < N;i++)
    {
       printf("\n Enter Number = ");
       scanf("%d",&A[i]);
    }

     for(i = 0; i < N;i++)
    {
        printf("%d ",A[i]);
    }

    printf("\n");

    for(j = i - 1; j >= 0;j--)
    {
        printf("%d ",A[j]);
    }

    getch();
    return 0;

}
