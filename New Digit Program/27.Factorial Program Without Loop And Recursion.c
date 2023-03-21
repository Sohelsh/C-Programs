#include<stdio.h>
#include<conio.h>

int Factorial_Of_Number(int Num);
int main()
{
    int No = 0;

        printf("\n Enter Number = ");
        scanf("%d",&No);

        printf("Factorial Of Number = %ld",Factorial_Of_Number(No));

        return 0;
}
int Factorial_Of_Number(int Num)
{
        long int Fact = 1;

        up:
        if(Num > 1)
        {
           Fact = Fact * Num;
           Num--;
           goto up;
        }
        return Fact;
}
