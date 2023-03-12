#include<stdio.h>
#include<conio.h>

 int Count_Of_Number(int);

 int main()
 {
      int No =0,Res =  0;

      printf("\n Enter A Number = ");
      scanf("%d",&No);

      Res = Count_Of_Number(No);

      printf("\n Count Of Number %d = %d",No,Res);
 }
 int Count_Of_Number(Num)
 {
      int Dig = 0,Cnt = 0;

      while(Num != 0)
      {
           Dig = Num % 10;
           Num = Num / 10;
           Cnt++;
      }
      return Cnt;
 }
