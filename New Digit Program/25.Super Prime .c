/// Super Prime Number
#include<stdio.h>
#include<conio.h>

 int Declare_Prime(int iNo);
 int Sum_Prime(int iNo);
 int main()
 {
     int iNo = 0,iRet = 0,Sum = 0,Ans = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iNo);

     iRet = Declare_Prime(iNo);

      if(iRet == iNo)
      {
         Sum = Sum_Prime(iNo);
         Ans =  Declare_Prime(Sum);

         if(Sum == Ans)
         {
             printf("\n Number Is Super Prime ");
         }
         else
         {
             printf("\n Number Only Prime ");
         }
      }
      else
      {
          printf("\n Number Is Not Prime");
      }
 }
 int Declare_Prime(int iNO)
 {
     int i =0;

     for(i = 2;i < iNO;i++)
     {
         if(iNO % i == 0)
         {
             break;
         }
     }
     if(iNO == i)
     {
         return iNO;
     }
     else
     {
         return 0;
     }
 }
 int Sum_Prime(int iNo)
 {
     int Dig = 0, Sum = 0;

     while(iNo != 0)
     {
         Dig = iNo % 10;
         iNo = iNo /10;
         Sum = Sum + Dig;
     }
     return Sum;
 }
