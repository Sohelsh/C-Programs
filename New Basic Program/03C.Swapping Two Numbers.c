#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0, Temp =0;

    printf("\n Enter Two Number =  ");
    scanf("%d%d",&No1,&No2);

    printf("\n\n Before Swap No1 = %d,No2 = %d",No1,No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp;


    printf("\n\n After Swap No1 = %d,No2 = %d",No1,No2);

    getch();
    return 0;




}
