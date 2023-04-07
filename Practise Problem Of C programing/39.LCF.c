#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0, L = 0;

    printf("\n Enter Two Number = ");
    scanf("%d%d",&No1,&No2);

    for(L = 1;L <= No1*No2;L++)
    {
        if(L % No1 == 0 && L % No2== 0)
        {
            break;
        }
    }

    printf("\n LCF Is = %d",L);

    getch();
    return 0;
}
