#include<stdio.h>
#include<conio.h>

 int Power_Of_Number(int,int);

 int main()
 {
      int No1 = 0,No2 = 0,Res =  0;

      printf("\n Enter No1 Raise To No2 = ");
      scanf("%d%d",&No1,&No2);

     Res = Power_Of_Number(No1,No2);

     printf("\n\n Power Of Number (%d)^(%d)= %d",No1,No2,Res);
 }
 int Power_Of_Number(N1,N2)
 {
      int Pow =0, i = 0;

      for(i = 1,Pow = 1; i <= N2;i++)
      {
           Pow = Pow * N1;
      }

      return Pow;
 }

