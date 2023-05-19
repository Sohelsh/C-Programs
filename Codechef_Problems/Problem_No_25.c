#include<stdio.h>
#include<conio.h>

int main()
{
    int t, N, k,i,j;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        printf("\n Enter Number = ");
        scanf("%d %d",&N,&k);

        int A[N];
        for(j=0; j<N; j++)
        {
            scanf("%d", &A[j]);
        }

        int pos=0, neg=0, divk=0;
        for(j=0; j<N; j++)
        {
            if(A[j] < 0)
            {
                neg++;
            }
            else if(A[j]> 0)
            {
                pos++;
            }

            if(A[j]% k == 0)
            {
                divk++;
            }
        }

        printf("%d %d %d\n", pos, neg, divk);
    }

    getch();
    return 0;
}
