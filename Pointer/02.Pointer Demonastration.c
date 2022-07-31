#include<stdio.h>
#include<conio.h>
 struct Student
 {
     char Name[24];
     int Roll_Name;
     float Per;
     double Mob;
 };
 int main()
 {
     struct Student *std;

     char *c;
     int *i;
     float *f;
     double *d;

     printf("\n %d %d %d %d %d",sizeof(std),sizeof(c),sizeof(i),sizeof(f),sizeof(d));

     getch();
     return 0;

 }
