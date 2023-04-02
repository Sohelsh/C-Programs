#include<conio.h>
#include<stdio.h>

int main()
{
    int Num = 0,Temp = 0,Rev = 0,Sum = 0;

    printf("\n Enter Number ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Rev = Temp % 10;
        Sum = (Sum * 10) + Rev;
        Temp = Temp / 10;
    }

    if(Sum  == Num)
    {
        printf("\n Number Is Palindrome");
    }
    else{
        printf("\n Number Is Not Palindrome");
    }

    getch();
    return 0;
}
