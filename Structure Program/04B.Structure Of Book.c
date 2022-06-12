#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

 struct Book_Bank_Information
 {
     char Title[20];
     char Author[20];
     int Pages;
     float Prize;
 } ;

 int main()
 {
     struct Book_Bank_Information Book1,Book2={"Life Skill","Manish Shaha",200,99.76},Book3;


      strcpy(Book1.Title,"Math");
      strcpy(Book1.Author,"Ajay Mithal");
      Book1.Pages=230;
      Book1.Prize=299.99;

       printf("\n ***** 1st Book Information ****");


      printf("\n\n\t  1st Book =%s ",Book1.Title);
      printf("\n\n\t  1st Book =%s ",Book1.Author);
      printf("\n\n\t  1st Book =%d ",Book1.Pages);
      printf("\n\n\t  1st Book =%f ",Book1.Prize);

       printf("\n\t\n ***** 2nd Book Information ******");

      printf("\n\n\t  2nd Book =%s",Book2.Title);
      printf("\n\n\t  2nd Book =%s",Book2.Author);
      printf("\n\n\t  2nd Book =%d",Book2.Pages);
      printf("\n\n\t  2nd Book =%f",Book2.Prize);

      printf("\n\n***** Entar 3rd Book Information ******");

      printf("\n\t\n\t  Entar Book Title = ");
      scanf(" %[^\n]",&Book3.Title);

      fflush(stdin);


      printf("\n\t  Entar Book Author =");
      scanf(" %[^\n]",&Book3.Author);

      fflush(stdin);

      printf("\n\t  Entar Book Pages = ");
      scanf(" %[^\n]",&Book3.Pages);

      fflush(stdin);


      printf("\n\t  Entar Book Prize = ");
      scanf("%f",&Book3.Prize);

      fflush(stdin);

      getch();

      printf(" \t\n\n *****3rd Book Information*****  \n\t Book Title =%s \n\n\t Book Author =%s \n\n\t Book Pages=%d \n\n\t Book Prize =%f ",Book3.Title,Book3.Author,Book3.Pages,Book3.Prize);

      getch();
      return 0;





 }
