#include<stdio.h>
#include<conio.h>

 int main()
 {
     int arr[4]={22,66,99,77};
     int *ptr =arr;


     printf("\n Base Addares Of Array = %d",arr);
     printf("\n Value Of Pointar = %d",ptr);
     printf("\n Value Of Array Pointar Pointing = %d ",*ptr);


     getch();

     ptr++;


     printf("\n\n Aftar Increment Value Of Pointar = %d ",ptr);
     printf("\n Value Of Array Pointar Pointing = %d",*ptr);

     getch();


 }
