#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,G = 0,GCD = 0;

    printf("\n Enter Two Numbers = ");
    scanf("%d%d",&No1,&No2);

    for(G = 1;G <= No1 && G <= No2;G++)
    {
        if(No1 % G == 0 && No2 % G == 0)
        {
            GCD = G;
        }
    }
    printf(" GCD Is = %d ",GCD);

    getch();
    return 0;
}
