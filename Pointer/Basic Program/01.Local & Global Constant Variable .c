#include<stdio.h>
#include<conio.h>
 void Karad ();
 const int gNum =477;

 int main()
 {
     const int Num = 100;

     int P = Num - 20;

     printf("\n Value Of Num = %d",Num);

     printf("\n Value Of P = %d",P);

     printf(" \n Value Of Global Variable gNum Inside main() - %d",gNum);

     getch();

     Karad();

     getch();
     return 0;
 }
 void Karad()
 {
     const int No =2001;

     printf("\n Value Of Local Const No Is = %d",No);

     printf(" \n Value of Global Variable gNum inside Karad() =%d",gNum);

     return;
 }
