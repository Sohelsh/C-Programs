#include<stdio.h>
#include<conio.h>

 int main()
 {
          int N1 = 1,N2 = 0,N3 = 0,Cnt = 0;

          printf("Enter A Number = ");
          scanf("%d",&Cnt);

          while(Cnt != 0)
          {
               printf(" %d ",N3);

               N3 = N1 + N2;
               N1 = N2;
               N2 = N3;

               Cnt--;
          }

           getch();
           return 0;
 }
