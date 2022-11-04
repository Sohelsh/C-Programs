#include<stdio.h>
#include<conio.h>
#define Pi 3.14

int main()
{
            int R = 0;
            float Area = 0.0;

            printf("\n Entar A Radius = ");
            scanf("%d",&R);

            Area = R * R * Pi;

            printf("\n Area Of Circle = %f",Area);

            getch();
            return 0;
}
