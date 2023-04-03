#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter 1st And 2 nd Number = ");
    scanf("%d%d",&No1,&No2);

    printf("\n Before Swap %d And %d ",No1,No2);

    getch();
    No2 = No1 + No2;
    No1 = No2 - No1;
    No2  = No2 - No1;
    printf(" \n After Swap Is %d and %d ",No1,No2);

    getch();
    return 0;
}
