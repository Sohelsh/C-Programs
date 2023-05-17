#include<stdio.h>
#include<conio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int X, Y, A;
        scanf("%d%d%d", &X, &Y, &A);

        if(X <= A &&  A < Y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO \n");
        }

    }

    getch();
    return 0;
}
