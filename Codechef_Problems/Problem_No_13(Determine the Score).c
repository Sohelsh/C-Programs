#include<stdio.h>
#include<conio.h>

int main()
 {
    int t;

    printf("\n Enter Number = ");
    scanf("%d",&t);

    while (t--)
        {
            int X, N, points_per_testcase, score;

            printf("\n Enter Number = ");
            scanf("%d%d", &X, &N);

            points_per_testcase = X / 10;
            score = points_per_testcase * N;

            printf("%d\n", score);
      }


    getch();
    return 0;
}
