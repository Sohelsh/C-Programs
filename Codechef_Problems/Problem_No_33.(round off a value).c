#include<stdio.h>
#include<conio.h>
#include<math.h>
                                 ///Round Of a Value
int main()
{
    float No1 = 0.0;

    printf("\n Enter 1st float Number = ");
    scanf("%f",&No1);

    printf(" Round Of Value  %f = %f",No1,ceil(No1));

    getch();
    return 0;
}
