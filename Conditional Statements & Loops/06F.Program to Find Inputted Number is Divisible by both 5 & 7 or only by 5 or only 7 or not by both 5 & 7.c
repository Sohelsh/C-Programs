#include <stdio.h>
#include <conio.h>

int main()
{
        int Num = 0;

        printf("\n\n Enter a Number = ");
        scanf("%d",&Num);

        if( (Num % 5 == 0) && (Num % 7 == 0) )
        {
            printf("\n Numbar is Divisibal By Both 5 & 7.");
        }
        else if (Num % 5 == 0)
        {
            printf("\n Number is Only Divisibal By 5 ");
        }
        else if( Num % 7 == 0)
        {
            printf("\n Number is Only Divisibal By 7 ");
        }
        else
        {
            printf("\n Number is Not Divisibal By Both 5 & 7");
        }
        printf("\n\n Thanks ");

        getch();
        return 0 ;
}
