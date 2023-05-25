#include<stdio.h>
#include<conio.h>


int main()
 {
    int t = 0, N, M,i;

    printf("\n Enter Number = ");
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d %d", &N, &M);

        if(N <= M)
        {
             printf("We need to buy %d shoes\n", N );
        }
        else
        {
             printf("We need to buy %d shoes\n", 2*N -M );
        }
    }


    getch();
    return 0;
}

