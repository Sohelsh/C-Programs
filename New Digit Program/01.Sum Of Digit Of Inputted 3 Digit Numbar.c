#include<stdio.h>
#include<conio.h>


 int main()
 {
       int No = 0,Sum = 0,Dig = 0,Temp = 0;

       printf("\n Enter  3 Digit Number =  ");
       scanf("%d",&No);

       Temp = No;

       while(Temp > 0)
       {
            Dig  = Temp %10;
            Temp = Temp / 10;
            Sum  = Sum + Dig;
       }

       printf("Sum OF Digits = %d",Sum);

       getch();
       return 0;
 }
