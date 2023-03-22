#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Cnt = 0,Year = 0;

    printf("\n Enter Your Birthday Year = ");
    scanf("%d",&Year);

    for(i = 2023;i > Year; i--)
    {
        Cnt++;
    }

    printf("\n Your Age Is : %d",Cnt);
}

