#include<stdio.h>
#include<conio.h>

int main() {
    int t;
    int A,B;
    char C[30];
    int i = 1;

    scanf("%d", &t );

    while( i <= t)
    {
        scanf("%d%d", &A, &B );
        scanf("%s", &C);
        printf("%d %d %s \n ", A,B,C );
        i = i+i;
    }

    getch();
    return 0;
}
