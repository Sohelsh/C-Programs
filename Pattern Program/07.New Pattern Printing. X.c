#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
        int R = 0,C = 0 ,N = 0;

        printf("\n Enter Pattern Size =");
        scanf("%d",&N);

        for(R =1 ;R <= N; R++)
        {
            for(C = 1; C<= N; C++)
            {
                if(R == C || R + C == N +1)
                {
                printf(" * ");
                }
                else
                {
                printf("   ");
                }
            }

            printf("\n");

        }

        getch();
        return 0;
}
