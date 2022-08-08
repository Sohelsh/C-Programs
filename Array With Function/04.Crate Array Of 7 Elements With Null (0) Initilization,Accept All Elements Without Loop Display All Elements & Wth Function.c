#include<stdio.h>
#include<conio.h>

 void Display_Elements(int Arr[]);

 int main()
 {
      int Value[7] =  {0};

      Display_Elements(Value);

      return 0;
 }
 void Display_Elements(int Arr[])
 {
        printf("\n Frist   Element = %d",Arr[0]);
        printf("\n Second  Element = %d",Arr[1]);
        printf("\n Third   Element = %d",Arr[2]);
        printf("\n Fourth  Element = %d",Arr[3]);
        printf("\n Fifth   Element = %d",Arr[4]);
        printf("\n Sixth   Element = %d",Arr[5]);
        printf("\n Sevnth  Element = %d",Arr[6]);

        return;
 }
