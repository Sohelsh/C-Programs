#include<stdio.h>
#include<conio.h>

int main()
{
            int No = 0,Dig = 0,Des = 0,Base = 1;

            printf("\n Entar A Number = ");
            scanf("%d",&No);

            while(No != 0)
            {
                    Dig = No %10;
                    Des = Des+Dig*Base;
                    No = No/10;
                    Base = Base *2;
            }

            printf("\n %d",Des);

            getch();
            return 0;

}
