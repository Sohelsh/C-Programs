#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int t = 0,i = 0;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int A, B;

        printf("\n Enter Number = ");
        scanf("%d %d", &A, &B);
        int diff1 = A - B;
        int diff2 = B - A;
        printf("%d %d %d %d\n", diff1, diff2, abs(diff1), abs(diff2));
    }

    getch();
    return 0;
}
