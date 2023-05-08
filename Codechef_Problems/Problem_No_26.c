#include <stdio.h>
int main()
{
	int t;
    scanf("%d",&t);

	while(t--)
	{
	    int N,i,j;
	    scanf("%d", &N);
	    int A[N];
	    for(i = 0; i < N; i++)
	    {
	        scanf("%d", &A[i]);
	    }
	    int count_neg = 0;
        int count_zero = 0;

        for( i = 0; i < N; i++)
        {
           if(A[i] == 0)
           {
               count_zero++;
           }
           else if(A[i] < 0)
           {
               count_neg++;
           }
        }
        if((count_zero > 0) || (count_neg % 2 == 0))
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }


	}
	return 0;
}
