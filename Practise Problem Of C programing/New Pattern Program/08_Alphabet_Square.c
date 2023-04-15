#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0;
    int i = 0,j = 0;
    char Ch = '\0';
    printf("\n Enter Row = ");
    scanf("%d",&R);

    for(i = 1;i <= R;i++)
    {
        Ch = 'A';
        for(j = 1;j <= R;j++,Ch++)
        {
            printf(" %c ",Ch);

        }
        printf("\n");
    }

    getch();
    return 0;
}



