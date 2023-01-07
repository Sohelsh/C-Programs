#include<stdio.h>
#include<conio.h>

 int main()
 {
        int No = 0,Cnt = 0,S_Dig = 0,Dig = 0,Temp = 0;

        printf("\n Enter a Number = ");
        scanf("%d",&No);

        printf("\n Enter Count Number = ");
        scanf("%d",&S_Dig);

        Temp = No;
        while(Temp != 0)
        {
             Dig = Temp%10;
             Temp =Temp /10;

             if(Dig == S_Dig)
             {
                  Cnt++;
             }
        }

        printf("\n Count Of  %d  Number Is = %d",Temp,Cnt);

        getch();
        return 0;
 }

