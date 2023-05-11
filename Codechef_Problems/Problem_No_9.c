#include<stdio.h>
#include<conio.h>

int main()
{
    int t,X,Y;
    int i = 1;
    scanf("%d", &t );
    while (i <= t){
        scanf("%d %d", &X,&Y);
        printf("%d\n",X*Y);
        i = i+1;

    }

    getch();
    return 0;
}
