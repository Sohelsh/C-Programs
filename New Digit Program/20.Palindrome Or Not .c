#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0,Temp = 0,Rev = 0,Dig = 0;

        printf("\n Enter A Number = ");
        scanf("%d",&No);

        Temp=No;

        while(Temp != 0)
        {
            Dig  = Temp %10;
            Temp = Temp /10;
            Rev  = (Rev*10)+Dig;
        }

        if(Rev == No)
        {
        printf("\n Given Number %d Is Palindrome ",No);
        }
        else
        {
        printf("\n Given Number %d Is Not Palindrome ",No);
        }

        getch();
        return 0;
}
