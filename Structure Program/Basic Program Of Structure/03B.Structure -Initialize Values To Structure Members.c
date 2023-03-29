#include<stdio.h>
#include<conio.h>


 struct Student
 {
     int Roll_No;
     char SName[20];
     char Course[20];
     long int Mo_Numbar;

 };
 int main()
 {
     struct Student Std1={137,"Pruthviraj","MCA",9096272174};


    printf("\n Student Roll Number = %d",Std1.Roll_No);
    printf("\n Student Name        = %s",Std1.SName);
    printf("\n Student Roll Number = %s",Std1.Course);
    printf("\n Student Roll Number = %ld",Std1.Mo_Numbar);

    getch();

 }
