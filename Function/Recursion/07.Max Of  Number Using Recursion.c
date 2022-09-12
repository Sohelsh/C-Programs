#include<stdio.h>
#include<conio.h>

int Max_Of_Number();

int main()
{
    printf("\n Enter Five Numbers .....");

    printf("\n Max Of Number Is = %d",Max_Of_Number());

    getch();
    return 0;
}
int Max_Of_Number()
{
    static int i = 0;
    int Arr[5] = {0},Max = 0;

    if(i < 5)
    {
        printf("\n Enter %d. Number = ",++i);
        scanf("%d",&Arr[i]);

        Max_Of_Number();
    }
    return Max = Max < Arr[i];
}
