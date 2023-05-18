#include<stdio.h>
#include<conio.h>


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

    getch();
    return 0;
}
