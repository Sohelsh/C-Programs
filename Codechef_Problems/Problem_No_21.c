#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d%d", &X, &Y);

        if(Y % 2 == 0)
        {
            printf("%d",(X-Y) + (Y/2));
        }

    return 0;
}
