#include<stdio.h>
#include<conio.h>

 struct Student
 {
     int Roll_No;
     char SName[60];
     float Per;
     char Course[20];
 };

 int main()
 {
     int Num =0;
     struct Student Std1;

     printf("\n Size Of Variable = %d",sizeof(Num));

     printf("\n Size Of Object = %d",sizeof(Std1));


     getch();
     return 0;
 }
