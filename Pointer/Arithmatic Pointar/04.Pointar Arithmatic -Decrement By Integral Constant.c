#include<stdio.h>
#include<conio.h>

 int main()
 {
     int Arr[4]={65,97,31,42};
     int *ptr = &Arr[3];

     printf("\n Base Address Of Array = %d",Arr);

     printf("\n Value Of Pointar = %d",ptr);

     printf("\n Value Of Array Pointer Poninting = %d",*ptr);

     getch();

     ptr = ptr- 2;


     printf("\n\n New Value Pointar Is = %d",ptr);
     printf("\n Value Of Array Pointar Pointing = %d",*ptr);

     getch();
     return 0;
 }



