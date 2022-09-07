#include<stdio.h>
#include<conio.h>

int Fun();
int i = 0;
int main()
{
        int Cnt = 0;

        printf("\n Inter The Main");

        Cnt = Fun();

        printf("\n Back To Main \n Value Of i = %d",Cnt);

        getch();
        return 0;
}
int Fun()
{
        i++;

        printf("\n Inside Function Call No = %d",i);

        if(i <= 5)
        {
             Fun();
        }

        return i;


}
