#include<stdio.h>
#include<conio.h>

 int Fibonaoci(int);

int main()
{
            int Cnt  = 0;

            printf("\n Entar A Count For Series = ");
            scanf("%d",&Cnt);

            Fibonaoci(Cnt);

            getch();
            return 0;
}


int Fibonaoci(Count)
{
            int N1 = 1,N2 = 0,N3 = 0;

            while(Count != 0)
            {
              printf(" %d ",N3);

              N3 = N1 + N2;
              N1 = N2;
              N2 = N3;

              Count--;
            }
            return N3;
}
