#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,i = 0;

    printf("\n Enter number ");
    scanf("%d",&No);

    if(No == 0)
    {
        printf("\n Given Number Is Zero ");
    }

    for(i = 2; i < No;i++)
    {
        if(No % i == 0)
        {
            break;
        }
    }

    if(No == i)
    {
        printf("Given Number Is Prime ");
    }
    else{
        printf("\n Given Number Is Not Prime ");
    }

    getch();
    return 0;
}
