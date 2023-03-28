#include<stdio.h>
#include<conio.h>

 int main()
 {
     int arr[4]={22,66,99,77};
     int *ptr =arr;


     printf("\n Base Address Of Array = %d",arr);
     printf("\n Value Of Pointer = %d",ptr);
     printf("\n Value Of Array Pointer Pointing = %d ",*ptr);


     getch();

     ptr++;


     printf("\n\n Aftar Increment Value Of Pointer = %d ",ptr);
     printf("\n Value Of Array Pointer Pointing = %d",*ptr);

     getch();


 }
