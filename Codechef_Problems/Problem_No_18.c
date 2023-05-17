#include <stdio.h>
#include<conio.h>

int main() {
    int t,i;
    scanf("%d", &t);

    for ( i = 0; i < t; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if ((X + 200) >= Y && (Y >= X)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    getch();
    return 0;
}

