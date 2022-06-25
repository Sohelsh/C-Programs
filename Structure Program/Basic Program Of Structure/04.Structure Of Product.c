#include<stdio.h>
#include<conio.h>
#include<string.h>

 struct Product
 {
     char Prod_Name[20];
     int Prod_id;
     float Prod_Prize;



 };
 int main()
 {
     struct Product Prod1;


     strcpy(Prod1.Prod_Name,"Tomato Sos");
     Prod1.Prod_id=66;
     Prod1.Prod_Prize=99.99;



     printf("\n Product Information =>\n\t");

     getch();

     printf("\n Product Name =%s ",Prod1.Prod_Name);
     printf("\n Product ID =%d ",Prod1.Prod_id);
     printf("\n Product Prize =%.2f ",Prod1.Prod_Prize);

     getch();



 }
