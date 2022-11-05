#include<stdio.h>
#include<conio.h>

int Check_Scores(int Num[])
{
            int i = 0,Sum = 0;

            for(i = 0;i < 5;i++)
            {
                    Sum = Sum + Num[i];
            }

            Sum = Sum / 5;

            return Sum;
}
int main()
{
            int Mark[5] = {0}, i = 0,Res = 0;

            for(i = 0;i < 5;i++)
            {
                    printf("\n Enter Mark Of %d Subject = ",i+ 1);
                    scanf("%d",&Mark[i]);
            }
            Res = Check_Scores(Mark);

            if(Res >= 80)
            {
                    printf("\n Grade Of Student = A");
            }
            else if(Res >=60 && Res < 80)
            {
                    printf("\n Grade Of Student = B");
            }
            else if(Res >= 40 && Res < 60)
            {
                    printf("\n Grade Of Student = C");
            }
            else
            {
                    printf("\n Grade Of Student = D");
            }

            return 0;
            getch();
}
