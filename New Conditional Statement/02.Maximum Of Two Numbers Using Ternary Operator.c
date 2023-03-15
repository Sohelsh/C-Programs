#include<stdio.h>
#include<conio.h>


int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter A Numbers = ");
    scanf("%d%d",&No1,&No2);

    (No1 > No2)?printf("\n First Number is Maximum "):printf("\n Second Number Is Maximum ");

    getch();
    return 0;
}
