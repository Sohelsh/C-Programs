#include<stdio.h>
#include<conio.h>

 int main()
 {
      int N1 = 0,N2 = 0,N3 = 0;
      float Ave = 0.0;

      printf("\n Entar Three Numbers = ");
      scanf("%d%d%d",&N1,&N2,&N3);

      Ave = (N1+N2+N3)/3;

      printf("\n Average Of Three Numbers %0.2f",Ave);

      getch();
      return 0;
 }
