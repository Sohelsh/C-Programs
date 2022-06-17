#include<stdio.h>
#include<conio.h>

 int main()
 {
     int No[4]={14,44,67,56};
     int *ptr= No;

     printf("\n Base Address Of Array = %d",No);
     printf("\n Value Of Pointar = %d",ptr);
     printf("\n Value Of Array Pointer Poninting = %d",*ptr);

     getch();

     ptr = ptr + 3;

     printf("\n\n New Value Pointar Is = %d",ptr);
     printf("\n Value Of Array Pointar Pointing = %d",*ptr);

     getch();
     return 0;
 }
