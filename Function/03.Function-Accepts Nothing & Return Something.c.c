#include<stdio.h>
#include<conio.h>
int Add(void);

int main()
{
    int Sum =  0;

    Sum = Add();

    printf("\n Addition Of Numbers = %d ",Sum);

    getch();
}
int Add()
{
    int No1 = 0,No2 = 0,Sum = 0;

    printf("\n Enter 2 Numbers = ");
    scanf("%d%d",&No1,&No2);

    Sum = No1 + No2;

    return Sum;
}
