#include<stdio.h>
#include<conio.h>

 void Display_Elements(int N1[] );

 int main()
 {
      int Arr[7] = {0};

      Display(Arr);

      return 0;
 }
  void Display(int N1[])
 {
      int i =  0;

      for(i = 0;i < 7;i++)
      {
           printf("\n %d.Element Is = %d ",i+1,N1[i]);
      }

      getch();
      return;
 }
