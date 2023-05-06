#include <stdio.h>

int main()
{
     int t;
    scanf("%d", &t);

    while(t--)
    {
      int X,N;
      scanf("%d",&N);
      scanf("%d",&X);

      int Rem = N - X;

      printf("\n %d",X < Rem ? X:Rem );


    }

    return 0;
}
