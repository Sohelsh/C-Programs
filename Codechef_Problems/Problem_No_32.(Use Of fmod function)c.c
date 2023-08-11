#include<stdio.h>
#include<conio.h>
#include<math.h>
                                 ///Float Number remainder
int main()
{
    float No1 = 0.0,No2 = 0.0;

    printf("\n Enter 1st float Number = ");
    scanf("%f",&No1);

    printf("\n Enter 2nd float Number = ");
    scanf("%f",&No2);

    printf(" Your Answer Is %.1f / %.1f = %.1f",No1,No2,fmod(No1,No2));


    getch();
    return 0;
}
