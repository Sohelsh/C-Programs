#include<stdio.h>
#include<conio.h>

 int main()
 {
     int Num[5]={31,66,79,22,57};
     int *ptr = &Num[2];

     printf("\n Base Addres Of Array = %d",Num);
     printf("\n Value Of Pointer = %d",ptr);
     printf("\n Value Of Array Pointer Poninting = %d",*ptr);

     getch();

     ptr--;


     printf("\n Aftar Decrement Value Of Pointar = %d",ptr);
     printf("\n Value Of Array Pointar Pointing = %d",*ptr);

     getch();
     return 0;

 }
