#include<stdio.h>
#include<conio.h>

 struct Student
 {
     int Roll_No;
     char SName[60];
     float Per;
     char Course[20];
     char Grade;
 };

 int main()
 {

     struct Student Std1;

     Std1.Roll_No = 17;
     strcpy(Std1.SName,"Raj Patil")
     Std1.Per =86.5588
     strcpy(Std1.Course,"BCA")
     Std1.Grade-'B'



     getch();
     return 0;
 }
