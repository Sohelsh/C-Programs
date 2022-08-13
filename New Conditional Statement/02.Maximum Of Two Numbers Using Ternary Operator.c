#include<stdio.h>
#include<conio.h>


int main()
{
    int No1 =0, No2 = 0;

    printf("\n Enter A Numbars = ");
    scanf("%d%d",&No1,&No2);

    (No1 > No2)?printf("\n First Numbar is Maximum "):printf("\n Second Numbar Is MAximum ");

    getch();
    return 0;
}
