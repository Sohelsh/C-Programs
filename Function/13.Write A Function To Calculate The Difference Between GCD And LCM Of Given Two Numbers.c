#include<stdio.h>
#include<conio.h>

int Calculate_Of_GCD(int N1,int N2)
{
        int i = 0,Res = 0;

        for(i = 1; i <= N1 && i <= N2;i++)
        {
            if(N1 % i == 0 && N2 % i == 0)
            {
                Res = i;
            }
        }
        return Res;
}
int Calculate_Of_LCM(int N1,int N2)
{
        int i = 0;

        for(i = 1; i<= N1 * N2;i++)
        {
            if(i % N1 == 0 && i % N2 == 0)
            {
                break;
            }
        }
        return i;
}
int main()
{
        int No1 = 0, No2 = 0,LCM = 0, GCD = 0;

        printf("\n Enter Two Nubers = ");
        scanf("%d%d",&No1,&No2);

        LCM = Calculate_Of_LCM(No1,No2);

        GCD = Calculate_Of_GCD(No1,No2);

        printf("\n LCM Of Two Numbers Is= %d",LCM);
        printf("\n GCD Of Two Numbers Is = %d",GCD);

        No1 = LCM - GCD;

        printf("\n LCM And GCD Difference = %d",No1);

        getch();
        return 0;
}
