#include <stdio.h>

int main() {
    int t, N, M,i;
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

    return 0;
}

