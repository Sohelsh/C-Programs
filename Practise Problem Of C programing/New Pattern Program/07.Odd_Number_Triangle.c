#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,Cnt = 0;
    int i = 0,j = 0;

    printf("\n Enter Row = ");
    scanf("%d",&R);

    for(i = 1;i <= R;i++)
    {
         Cnt = 1;
        for(j = 1;j <= i;j++)
        {
            printf(" %d ",Cnt);
            Cnt = Cnt + 2;

        }
        printf("\n");
    }

    getch();
    return 0;
}


