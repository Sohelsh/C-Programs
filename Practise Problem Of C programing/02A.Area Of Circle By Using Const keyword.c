#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
        const pi = 3.14;
        int R = 0;
        float Area = 0.0;

        printf("\n Enter A Radious = ");
        scanf("%d",&R);

        Area = pi * R * R;

        printf("\n Area Of Circal =%f",Area);

        getch();
        return 0;
}
