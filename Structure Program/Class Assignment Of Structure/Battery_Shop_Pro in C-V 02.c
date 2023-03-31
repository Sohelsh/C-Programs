#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Cnt 1

struct Car_Battery_Shop
{
   int Shop_id;
   char Shop_Name[40];
   char Battery_Company[40];
   float Battery_Price;
   float Battery_Discount;
   float Total_Price;
};
int main()
{
     int i = 0,Choice = 0;
     struct Car_Battery_Shop Shop[Cnt];

     for(i = 0; i < Cnt ;i++)
     {
          printf("\n Enter Shop id = ");
          scanf("%d",&Shop[i].Shop_id);

          fflush(stdin);

          printf("\n Enter Shop Name = ");
          gets(Shop[i].Shop_Name);

          printf("\n *******Choice Battery Company*********");


          printf("\n\t %d.EXIDE",1);
          printf("\n\t %d.AMARON",2);
          printf("\n\t %d.TATT GREEN",3);
          printf("\n\t %d.DYNEX ",4);

           up:
          printf("\n\n Choice Battery Company Name = ");
          scanf("%d",&Choice);                                                    //  gets(Shop[i].Battery_Company);

          switch(Choice)
          {
               case 1:

                        strcpy(Shop[i].Battery_Company,"Exide" );
                        break;

               case 2:

                        strcpy(Shop[i].Battery_Company,"Amaron" );
                        break;

               case 3:

                        strcpy(Shop[i].Battery_Company,"TATT GREEN" );
                        break;

               case 4:

                        strcpy(Shop[i].Battery_Company,"DYNEX" );
                        break;

               default :

                        printf("\n\n :( Choice Corret Battery Company :( ");
                        goto up;

          }

          printf("\n Enter Battery Prize = ");
          scanf("%f",&Shop[i].Battery_Price);

          printf("\n Enter Battery Discount = ");
          scanf("%f",&Shop[i].Battery_Discount);

          Shop[i].Battery_Discount= ((float)Shop[i].Battery_Price) * (Shop[i].Battery_Discount) / 100;

          Shop[i].Total_Price = (Shop[i].Battery_Price) - (Shop[i].Battery_Discount);



          printf("\n -------------------------------------------------------------------------");


     }
     for(i = 0; i < Cnt ;i++)
     {
          printf("\n Battery Shop Id      = %d",Shop[i].Shop_id);
          printf("\n Battery Shop Name    = %s",Shop[i].Shop_Name);
          printf("\n Battery Company Name = %s",Shop[i].Battery_Company);
          printf("\n Battery Prize        = %0.2f",Shop[i].Battery_Price);
          printf("\n Battery Discount     = %0.2f",Shop[i].Battery_Discount);
          printf("\n Battery Total Prize  = %0.2f",Shop[i].Total_Price);

          printf("\n -------------------------------------------------------------------------");

     }

     getch();
     return 0;



}
