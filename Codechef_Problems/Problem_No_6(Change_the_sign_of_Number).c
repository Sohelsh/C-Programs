#include<stdio.h>

int main()
{
    int No = 0,Cnt = 0,i = 0;

    printf("\n Enter Count = ");
    scanf("%d",&Cnt);

    i = 1;
    while(i <= Cnt)
    {
       printf("\n Enter Number :");
       scanf("%d",&No);

       printf(" Change Sign = %d",No*-1);
       i++;
    }

    return 0;

}
