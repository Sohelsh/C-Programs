#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0;

    int i = 0,j = 0;

    printf("\n Enter Row = ");
    scanf("%d",&R);

    for(i = 1;i <= R;i++)
    {
        for(j = 1;j <= R;j++)
        {
            if(j == 1 || j == R || i == (R / 2 + 1))
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





