#include<stdio.h>
#include<conio.h>                     /// Pending

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
           if(i == 1 || j == 1 ||i == (R / 2 + 1) || i == R)
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




