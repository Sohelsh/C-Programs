#include<stdio.h>
#include<conio.h>

int main()
{
    int t = 0,X = 0,Y = 0;
    int i = 1;

    printf("\n Enter Number :");
    scanf("%d", &t );

    while (i <= t){

        printf("\n Enter Number :");
        scanf("%d %d", &X,&Y);

        printf("%d\n",X*Y);
        i = i+1;

    }

    getch();
    return 0;
}
