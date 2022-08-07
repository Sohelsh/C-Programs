#include<stdio.h>
#include<conio.h>
#define Size 6

 int main()
 {
      int Arr[Size] = {0},i = 0, Ele_Sum = 0;

      for(i = 0;i < Size;i++)
      {
           printf("\n %d.Entar Elements = ",i+1);
           scanf("%d",&Arr[i]);
      }
      for(i = 0;i < Size;i++)
      {
           printf("\n %d.Elemets Is = %d",i+1,Arr[i]);
      }
      for(i = 0;i < Size;i++)
      {
          Ele_Sum = Ele_Sum + Arr[i];
      }

      printf("\n\n Summation Of Element Is = %d",Ele_Sum);

      getch();
      return 0;
 }
