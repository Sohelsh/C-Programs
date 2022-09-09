#include<stdio.h>
#include<conio.h>

int Fun();
int main()
{
        int Cnt = 0;

        printf("\n Welcome Inside Main ");
        getch();

        Cnt = Fun();

        printf("\n Back To Main \n Call No Are = %d",Cnt);


        getch();
        return 0;
}
int Fun()
{
        static int i = 1;

        printf("\n Inside Function \n Call No = %d ",i);

        i++;

        if(i <= 5)
        {
              Fun();
        }
        return i;
}
