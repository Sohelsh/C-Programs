#include<conio.h>
#include<stdio.h>

int main()
 {
    int t = 0,A = 0,B = 0;
    int i = 1;
    int D,Q;

    printf("\n Enter Number :");
    scanf("%d", &t );

    while (i <= t)
    {
        printf("\n Enter Number = ");
        scanf("%d%d",&A,&B);

        D = A - B;
        Q = A / B;
        printf("%d %d\n",D,Q);
        i = i+1;
    }

    getch();
    return 0;
}
