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
  struct Car_Battery_Shop Shop[Cnt];

  void Sale_Battery();
  void Sale_Details();

int main()
{                           for(;;)
                   {

                           int Choice = 0;

                           printf("\n ================================================================================================================");
                           printf("\n **************************************CAR'S BATTERY SOFTWARE****************************************************");
                           printf("\n ================================================================================================================");

                           printf("\n Select Choice => ");
                           printf("\n\t\t 1.Sale Battery \n\t\t 2.Sale Details ");

                           printf("\n ================================================================================================================");

                           printf("\n Entar Your Choice =  ");
                           scanf("%d",&Choice);

                           printf("\n ================================================================================================================");

                           switch(Choice)
                           {
                               case 1:

                                           Sale_Battery();
                                           system("cls");
                                           printf("\n\t\t------------------------");
                                           printf("\n\t\t Add Successfully !!!!!!!!");
                                           printf("\n\t\t------------------------");
                                           getch();
                                           system("cls");
                                           break;

                               case 2:

                                           Sale_Details();


                           }

                   }

}
 void Sale_Battery()
 {
                            int i = 0,j = 0,Choice = 0;


                            printf("\n\t\t\t\t ------------------------------------");
                            printf("\n\t\t\t\t      ADD YOUR SALES DETAILS");
                            printf("\n\t\t\t\t ------------------------------------");

                            for(i = 0; i < Cnt ;i++)
                            {
                                      printf("\n\n Enter Shop id = ");
                                      scanf("%d",&Shop[i].Shop_id);

                                      fflush(stdin);

                                      printf("\n Enter Shop Name = ");
                                      gets(Shop[i].Shop_Name);

                                      printf("\n  ->->->->->->->->->-> Choice Battery Company <-<-<-<-<-<-<-<-<-<-");


                                      printf("\n\t\t %d.EXIDE",1);
                                      printf("\n\t\t %d.AMARON",2);
                                      printf("\n\t\t %d.TATT GREEN",3);
                                      printf("\n\t\t %d.DYNEX ",4);

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

                                      Dis:
                                      printf("\n Enter Battery Discount = ");
                                      scanf("%f",&Shop[i].Battery_Discount);

                                       if(Shop[i].Battery_Discount <= 5)
                                       {
                                            Shop[i].Battery_Discount= ((float)Shop[i].Battery_Price) * (Shop[i].Battery_Discount) / 100;
                                       }
                                       else
                                       {    printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                                            printf("\n\t > > > >You Can Get Only Five Percrnt Discount < < < <");
                                            printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                                            goto Dis;
                                       }


                                      Shop[i].Total_Price = (Shop[i].Battery_Price) - (Shop[i].Battery_Discount);

                                        printf("\n\t\t\t\t\t-----------------");
                                        printf("\n\t\t\t\t\t    SUBMIT");
                                        printf("\n\t\t\t\t\t-----------------");

                                        getch();

                                        for( j = 1;j < 5;j++)
                                        {
                                                printf("\n\t\t\t (Waiting Just Momment)");

                                                printf("\n----------------------------------------------");
                                                printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
                                                printf("\n----------------------------------------------");

                                                printf("\n\t\t\t\t\t  %d",j * 25);

                                                if(j < 4)
                                                {
                                                system("cls");
                                                }

                                        }
                                       // getch();

                            }

 }
 void Sale_Details()
{
                            int j = 0;

                            printf("\n\t\t\t\t --------------------------------");
                            printf("\n\t\t\t\t         SALES DETAILS");
                            printf("\n\t\t\t\t --------------------------------");

                            printf("\n\t==========================================================================================");
                            printf("\n\t ID    \t\tBATTERY NAME    \tPRICE    \tDISCOUNT    \tTOTAL DISCOUNT");
                            printf("\n\t==========================================================================================");

                            for(j = 0;j < Cnt;j++)
                            {

                                   printf("\n\t %d  \t\t%s \t\t\t%0.2f Rs \t%0.2f \t\t%0.2f Rs",Shop[j].Shop_id,Shop[j].Battery_Company,Shop[j].Battery_Price,Shop[j].Battery_Discount,Shop[j].Total_Price);

                            }
                            getch();
                            system("cls");


 }

