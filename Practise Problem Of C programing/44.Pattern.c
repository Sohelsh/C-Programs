#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0,i = 0,j =0;

    printf("\n Enter Row = ");
    scanf("%d",&R);

    printf("\n Enter Column = ");
    scanf("%d",&C);

    for(i = 1;i <= R;i++,C--)
    {
        for(j = 1;j <= C;j++)
        {

                printf(" * ");


        }
        printf("\n");
    }

    getch();
    return 0;
}
