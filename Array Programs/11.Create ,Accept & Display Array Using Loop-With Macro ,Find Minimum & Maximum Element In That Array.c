#include<stdio.h>
#include<conio.h>
#define Size 5

 int main()
 {
          int Arr[Size] = {0},i = 0,Max = 0,Min = 0;

          for(i = 0;i < Size;i++)
          {
           printf("\n 1.Entar Elements = ",i+1);
           scanf("%d",&Arr[i]);
          }

          for(i = 0;i < Size;i++)
          {
            printf("\n 1.Element Is = %d",i+1,Arr[i]);
          }
          for(i = 0;i < Size;i++)
          {
          if(Max < Arr[i])
          {
               Max = Arr[i];
          }
          }
          Min = Arr[0];
          for(i = 0;i < Size;i++)
          {
            if(Min > Arr[i])
            {
                 Min = Arr[i];
            }
          }

          printf("\n Maximum Number Is = %d",Max);
          printf("\n Minimum Number Is = %d",Min);

          return 0;
          getch();
 }
