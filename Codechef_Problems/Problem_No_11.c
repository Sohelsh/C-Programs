
#include <stdio.h>

int main()
 {
    int t,A,B;
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
    return 0;
}
