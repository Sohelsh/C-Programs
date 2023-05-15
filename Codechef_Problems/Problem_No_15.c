#include<stdio.h>
#include<conio.h>

int main()
 {
        int t, N, total_games, remaining_time,i;

        printf("\n Enter Number :");
        scanf("%d", &t);

        for ( i = 0; i < t; i++) {

            printf("\n Enter Number = ");
            scanf("%d", &N);

            total_games = N/30;
            remaining_time = N % 30;

            printf("%d %d\n", total_games, remaining_time);
        }

        getch();
        return 0;
}
