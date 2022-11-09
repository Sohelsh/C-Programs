#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
        int R = 0,C = 0 ,N = 0;

        printf("\n Entar Pattern Size =");
        scanf("%d",&N);

        for(R =1 ;R <= N; R++)
        {
            for(C = 1; C<= N; C++)
            {
                if(C == 1|| C == N|| R == (N/2)+1)
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
