#include <stdio.h>

int main()
 {
        int t, N, total_games, remaining_time,i;
        scanf("%d", &t);

        for ( i = 0; i < t; i++) {
            scanf("%d", &N);

            total_games = N/30;
            remaining_time = N % 30;

            printf("%d %d\n", total_games, remaining_time);
        }

        return 0;
}
