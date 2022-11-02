#include<stdio.h>
#include<conio.h>

long long int Factorial_Of_Numbar(int);

int main()
{
            int No = 0;
            long long int Res = 0;

            printf("\n Entar A Number = ");
            scanf("%d",&No);

            Res = Factorial_Of_Numbar(No);

            printf("\n Factorial Of Number %d = %lld ",No,Res);

            getch();
            return 0;
}

long long int Factorial_Of_Numbar(Num)
{
            long long int Fact = 1;

            while(Num != 0)
            {
                Fact = Fact * Num;

                Num--;
            }S

            return Fact;
}
