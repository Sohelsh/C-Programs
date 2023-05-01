#include <stdio.h>

int main() {
    int t,X;
    int i = 1;
    scanf("%d", &t );
    while (i <= t){
        scanf("%d", &X);
        X = X * 2;
        printf("\n%d",X*5);
        i = i+1;
    }
    return 0;
}
