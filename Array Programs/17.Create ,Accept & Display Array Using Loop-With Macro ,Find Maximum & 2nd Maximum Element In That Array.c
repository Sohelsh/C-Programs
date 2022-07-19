#include<stdio.h>
#include<conio.h>
#define Size 5

 int main()
 {
      int Arr[Size] = {0},i = 0,Max = 0,S_Max = 0;

      for(i = 0;i < Size;i++)
      {
           printf("\n Entar Elements = ");
           scanf("%d",&Arr[i]);
      }
      for(i = 0;i < Size;i++)
      {
           printf("\n Element Is = %d ",Arr[i]);
      }
      for(i = 0;i < Size;i++)
      {
           if(Max < Arr[i])
           {
                Max = Arr[i];
           }
           else if (Max != Arr[i] && S_Max < Arr[i])
           {
                S_Max = Arr[i];
           }
      }

      printf("\n\n Maximum Number Is = %d",Max);
      printf("\n\n Second Maximum Number Is = %d",S_Max);

      getch();
      return 0;
 }
