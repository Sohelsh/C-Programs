
#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0;

    int i = 0,j = 0;

    printf("\n Enter Row = ");
    scanf("%d",&R);

    printf("\n Enter Column = ");
    scanf("%d",&C);


    for(i = 1;i <= R;i++,C--)
    {
        for(j = 1;j <= R;j++)
        {
           if(i == 1 || j == C || i == R)
            {
                 printf("* ");
            }
            else
            {
                 printf("  ");
            }

        }
        printf("\n");
    }

    getch();
    return 0;
}





