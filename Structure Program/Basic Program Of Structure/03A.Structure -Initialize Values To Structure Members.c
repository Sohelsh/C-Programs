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
     strcpy(Std1.SName,"Raj Patil");
     Std1.Per =86.5588;
     strcpy(Std1.Course,"BCA");
     Std1.Grade='B';


     printf("\n\n \t Student Details =>");

     getch();


     printf("\n\n\t Student Roll No    = %d ",Std1.Roll_No);
     printf("\n\n\t Student Name       = %s ",Std1.SName);
     printf("\n\n\t Student Percentage  = %0.2f",Std1.Per);
     printf("\n\n\t Student Course     = %s ",Std1.Course);
     printf("\n\n\t Student Grade      = %c",Std1.Grade);

     getch();
     return 0;
 }
