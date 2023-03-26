#include <stdio.h>
#include<conio.h>

int main()
{
        int i = 0,j = 0;

        printf("\n\n Pattern is => \n\n");

        for(i = 1;i <= 7; i++)
        {
            for(j = 1;j <= 1; j++)
            {
                if(i == 1||i == 7||j == 1||j == 3)
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

        printf("\n\n Thanks");

        getch();
        return 0;
}
