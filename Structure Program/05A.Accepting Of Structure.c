#include<stdio.h>
#include<conio.h>
#include<string.h>

 struct College
 {
     char Student_Name[20];
     int Student_id;
     float Per;
 };
 int main()
 {
    struct College Clg[3];



    strcpy(Clg[0].Student_Name,"Amar");     // First Student
    Clg[0].Student_id=22;
    Clg[0].Per=33.33;


    getch();


    strcpy(Clg[1].Student_Name,"Raj");
    Clg[1].Student_id=31;
    Clg[1].Per=77.88;                       // Second Student

    getch();


    strcpy(Clg[2].Student_Name,"Amay");      //Third Student
    Clg[2].Student_id=41;
    Clg[2].Per=66.88;


    printf("\n\n First Student ");

    printf("\n Student Name=%s",Clg[0].Student_Name);
    printf("\n Student Id=%d",Clg[0].Student_id);
    printf("\n Student Name=%f",Clg[0].Per);

    printf("\n\n Second Student ");


    printf("\n Student Name=%s",Clg[1].Student_Name);
    printf("\n Student Id=%d",Clg[1].Student_id);
    printf("\n Student Name=%f",Clg[1].Per);

    printf("\n\n Third Student ");


    printf("\n Student Name=%s",Clg[2].Student_Name);
    printf("\n Student Id=%d",Clg[2].Student_id);
    printf("\n Student Name=%f",Clg[2].Per);



    getch();
    return 0;


 }
