#include <stdio.h>
#include <conio.h>

int main()
{
        char ch =  '\0';

        printf("\n\nEnter a Character To Check Whether,\n\n(It is Upper case =  Or Lover Case = Or Digit = Or Special Symbol = )= ");
        scanf("%c",&ch); // or ch = getche();

        if((ch >= 'A') && (ch <= 'Z'))
        {
            printf("\n\n Given Character is Uppercase Letter. ");
        }
        else if((ch >= 'a') && (ch <= 'z'))
        {
            printf("\n\n Given Character is Lovercase Letter");
        }
        else if((ch >='0') && (ch <= '9'))
        {
            printf("\n\n Given Character is Digit ");
        }
        else
        {
            printf("\n\n Given Character is Special Symbol ");
        }

        printf("\n\n Thanks..");

        getch();
        return 0;
}
