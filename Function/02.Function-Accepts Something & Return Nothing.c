#include<stdio.h>
#include<conio.h>
void Add(int,int);

int main()
{
    int No1 = 0,No2 =  0;

    printf("\n Enter 2 Numbers = ");
    scanf("%d%d",&No1,&No2);

    Add(No1,No2);

    getch();
    return 0;
}
Add(int N1 ,int N2)
{
    int Sum =0;

    Sum = N1 + N2;

    printf("\n Addition Of Given Number %d + %d = %d",N1,N2,Sum);

    return;
}
