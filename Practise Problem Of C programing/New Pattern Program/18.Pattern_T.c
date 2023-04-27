#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,j = 0,No = 0;

    printf("\n Enter Size = ");
    scanf("%d",&No);

    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No;j++)
        {
            if(i == 1 || j == (No/2 + 1 ))
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
