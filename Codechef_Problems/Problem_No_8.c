#include<stdio.h>
#include<conio.h>

int main()
 {
    int t = 0,A = 0,B = 0;
    int P = 0,S = 0;
    int i = 1;

        printf("\n Enter Number :");
        scanf("%d", &t );

        while (i <= t)
        {
            printf("\n Enter Number :");
            scanf("%d %d", &A,&B);

            S = A + B;
            P = A * B;

            printf("%d %d \n", S,P );

            i = i+1;
        }

    getch();
    return 0;
}
