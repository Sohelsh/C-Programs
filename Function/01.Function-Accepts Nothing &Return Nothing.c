#include<stdio.h>
#include<conio.h>
 void Add(void);

 int main()
 {
     printf("\n\t***** Welcome ***** ");

     Add();

     printf("\n\t  Thanks ");

     getch();
     return 0;
 }
 void Add()
 {
     int No1 = 0,No2 = 0,Res = 0;

     printf("\n\n Entar 2 Numbars = ");
     scanf("%d%d",&No1,&No2);

     Res = No1 + No2;

     printf("\n Addition Of Givan Numbar %d + %d = %d",No1,No2,Res);

     return;
 }
