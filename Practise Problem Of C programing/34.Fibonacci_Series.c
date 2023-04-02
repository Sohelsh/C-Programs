#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 1,No2 = 0,No3 = 0,Cnt = 0,i = 0;

    printf("\n Enter Count = ");
    scanf("%d",&Cnt);

    while(i < Cnt)
    {
        printf(" %d ",No3);

        No3 = No1 + No2;
        No1 = No2;
        No2 = No3;

        Cnt--;
    }

    getch();
    return 0;
}
