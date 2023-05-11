#include <stdio.h>
#include<conio.h>

int main()
{
    int t;
    int n;
    int i = 1;

    printf("\n Enter Number = ");
    scanf("%d\n", &t );

    while ( i <= t)
    {
        scanf("%d", &n);
        printf("%d\n", n+1 );
        i = i+1;
    }

    getch();
    return 0;
}

