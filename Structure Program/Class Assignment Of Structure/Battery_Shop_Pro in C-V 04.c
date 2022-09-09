#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define B_Cnt 2

struct Car_Battery_Shop
{
   int Shop_id;
   char Shop_Name[40];
   char Battery_Company[40];
   float Battery_Price;
   float Battery_Discount;
   float Total_Price;
};
  //struct Car_Battery_Shop;

  void Sale_Battery(struct Car_Battery_Shop*);
  void Sale_Details(struct Car_Battery_Shop*);

int main()
{                           for(;;)
                   {

                           int Choice = 0,i = 0;
                           struct Car_Battery_Shop *ptr;

                           // printf("\n How Much Add Battery = ");
                            //scanf("%d",&B_Cnt);


                            ptr = (struct Car_Battery_Shop*)malloc(B_Cnt * sizeof(struct Car_Battery_Shop));

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

                                            for(i = 0; i < B_Cnt ;i++)
                                            {
                                                 Sale_Battery(&ptr[i]);
                                            }

                                           system("cls");
                                           printf("\n\t\t------------------------");
                                           printf("\n\t\t Add Successfully !!!!!!!!");
                                           printf("\n\t\t------------------------");
                                           getch();
                                           system("cls");
                                           break;

                               case 2:

                                            for(i = 0; i < B_Cnt ;i++)
                                           {
                                               Sale_Details(&ptr[i]);
                                           }
                                           break;






                           }

                   }

}
 void Sale_Battery(struct Car_Battery_Shop* Shop1)
 {
                            int j = 0,Choice = 0;


                            printf("\n\t\t\t\t ------------------------------------");
                            printf("\n\t\t\t\t      ADD YOUR SALES DETAILS");
                            printf("\n\t\t\t\t ------------------------------------");



                                      printf("\n\n Entar Shop id = ");
                                      scanf("%d",&Shop1->Shop_id);

                                      fflush(stdin);

                                      printf("\n Entar Shop Name = ");
                                      gets(Shop1->Shop_Name);

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

                                                    strcpy(Shop1->Battery_Company,"Exide" );
                                                    break;

                                           case 2:

                                                    strcpy(Shop1->Battery_Company,"Amaron" );
                                                    break;

                                           case 3:

                                                    strcpy(Shop1->Battery_Company,"TATT GREEN" );
                                                    break;

                                           case 4:

                                                    strcpy(Shop1->Battery_Company,"DYNEX" );
                                                    break;

                                           default :

                                                    printf("\n\n :( Choice Corret Battery Company :( ");
                                                    goto up;

                                      }

                                      printf("\n Entar Battery Prize = ");
                                      scanf("%f",&Shop1->Battery_Price);

                                      Dis:
                                      printf("\n Entar Battery Discount = ");
                                      scanf("%f",&Shop1->Battery_Discount);

                                       if(Shop1->Battery_Discount <= 5)
                                       {
                                            Shop1->Battery_Discount= ((float)Shop1->Battery_Price) * (Shop1->Battery_Discount) / 100;
                                       }
                                       else
                                       {    printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                                            printf("\n\t > > > >You Can Get Only Five Percrnt Discount < < < <");
                                            printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                                            goto Dis;
                                       }


                                      Shop1->Total_Price = (Shop1->Battery_Price) - (Shop1->Battery_Discount);

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
 void Sale_Details(struct Car_Battery_Shop* Shop2)
{


                            printf("\n\t\t\t\t --------------------------------");
                            printf("\n\t\t\t\t         SALES DETAILS");
                            printf("\n\t\t\t\t --------------------------------");

                            printf("\n\t==========================================================================================");
                            printf("\n\t ID    \t\tBATTERY NAME    \tPRICE    \tDISCOUNT    \tTOTAL DISCOUNT");
                            printf("\n\t==========================================================================================");





                                   printf("\n\t %d  \t\t%s \t\t\t%0.2f Rs \t%0.2f \t\t%0.2f Rs",Shop2->Shop_id,Shop2->Battery_Company,Shop2->Battery_Price,Shop2->Battery_Discount,Shop2->Total_Price);


                            getch();
                            system("cls");


 }

