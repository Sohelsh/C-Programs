#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0;
    int i = 0,j= 0;

    printf("\n Enter Row = ");
    scanf("%d",&R);

    printf("\n Enter Column = ");
    scanf("%d",&C);

    for(i = 1;i <= R;i++)
    {
        for(j =1;j <= C;j++)
        {
            printf("%2d",j);
        }
        printf("\n");
    }

    getch();
    return 0;

}
