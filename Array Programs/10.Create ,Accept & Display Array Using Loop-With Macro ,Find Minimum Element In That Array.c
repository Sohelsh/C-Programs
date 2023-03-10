#include<stdio.h>
#include<conio.h>
#define Cnt 8

 int main()
 {
      int Arr[Cnt]= {},i = 0,Min =0;

      printf("\n\t Enter Eight Numbers = ");
      for(i = 0;i < Cnt ;i++)
      {
           printf("\n Enter %d Number = ",i+1);
           scanf("%d",&Arr[i]);
      }
      Min = Arr[0];
      for(i = 0;i < Cnt;i++)
      {
           if(Min > Arr[i])
           {
                Min = Arr[i];
           }
      }
      printf("\n Minimum Number Is = %d",Min);

      getch();
      return 0;
 }
