#include <stdio.h>

int main() {
    int t;
    int n;
    int i = 1;

    scanf("%d\n", &t );

    while ( i <= t) {
        scanf("%d", &n);
        printf("%d\n", n+1 );
        i = i+1;
    }
    return 0;
}

