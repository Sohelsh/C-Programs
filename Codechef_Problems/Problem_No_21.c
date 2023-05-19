#include<stdio.h>
#include<conio.h>

int main() {
    int X, Y;

    printf("\n Enter Number = ");
    scanf("%d%d", &X, &Y);

        if(Y % 2 == 0)
        {
            printf("%d",(X-Y) + (Y/2));
        }

    getch();
    return 0;
}
