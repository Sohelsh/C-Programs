#include<stdio.h>
#include<conio.h>

 int main()
 {
     int No1 = 0, No2 = 0, Dig = 0,Cnt=1,Sum = 0;

     printf("\n Entar  A Number : ");
     scanf("%d",&No1);

     printf("\n How Many Numbers To Sum : ");
     scanf("%d",&No2);


     while(No2 >= Cnt)
     {
         Dig = No1 % 10;
         No1 = No1 /10;
         Sum = Sum + Dig ;

          Cnt++;
     }

     printf("\n Sum Of Given Count = %d",Sum);

 }
