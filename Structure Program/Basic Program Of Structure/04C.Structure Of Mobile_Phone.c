#include<stdio.h>
#include<conio.h>
#include<string.h>

 struct Mobile_Phone
 {
     char Company_Name[20];
     int Prize;
     float RAM;
 };
 int main()
 {
     struct Mobile_Phone Mob1={"Apple",50000,3.99},Mob2,Mob3;

     strcpy(Mob2.Company_Name,"OPPO");
     Mob2.Prize=30000;
     Mob2.RAM=2.99;


     printf("\n Enter Mobile Company = ");
     scanf("%s",&Mob3.Company_Name);

     printf("\n Enter Mobile Prize = ");
     scanf("%d",&Mob3.Prize);

     printf("\n Enter Mobile Ram = ");
     scanf("%f",&Mob3.RAM);


     printf("\n****1st Mobile Company **** \n\t\n\t 1st Mobile Company Name=%s\n\n\t 1st Mobile Company Prize =%d \n\n\t 1st Mobile Ram =%0.2f",Mob1.Company_Name,Mob1.Prize,Mob1.RAM);

     printf("\n****2nd Mobile Company **** \n\t\n\t 2nd Mobile Company Name=%s \n\n\t 2nd Mobile Company Prize=%d \n\n\t 2nd Mobile Ram =%0.2f",Mob2.Company_Name,Mob2.Prize,Mob2.RAM);

     printf("\n****3rd Mobile Company **** \n\t\n\t 3rd Mobile Company Name =%s \n\n\t 3rd Mobile Company Prize=%d \n\n\t 3rd Mobile Ram =%0.2f",Mob3.Company_Name,Mob3.Prize,Mob3.RAM);


     getch();
     return 0;

 }
