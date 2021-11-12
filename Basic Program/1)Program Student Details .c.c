#include <stdio.h>
#include <conio.h>

int main()
{
   int Roll_No =0;
   char Name[80]=" ";
   float Per =0.0;
   char Course [40]=" ";
   
   printf("\n Accepting Student Details = ");
   
   printf("\n\n Enter Student Roll_No = ");
   scanf("%d",&Roll_No);
   
   fflush(stdin);
   
   printf("\n\n Enter Student Name = ");
   gets(Name);
   
   printf("\n\n Enter Student Percentage = ");
   scanf("%f",Per);
   
   fflush(stdin);
   
   printf("\n\n Enter Student Course");
   gets(Course);
   
   printf("============#####============");
   
   printf("\n Desplaying Studend Details ");
   
   printf("\n Roll Number = %d");
   printf("\n Student Name = %s");
   printf("\n Student Percentage = %f");
   printf("\n Student Course = %s");
   
   
   printf("============#####============");
 
   
   
  getch();
  return 0;
 
}
