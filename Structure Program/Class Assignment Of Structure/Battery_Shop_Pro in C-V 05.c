#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Cnt 2

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
  void Update_Details();
  int i = 0;


int main()
{                           for(;;)
                   {

                           int Choice = 0;

                           printf("\n ================================================================================================================");
                           printf("\n **************************************CAR'S BATTERY SOFTWARE****************************************************");
                           printf("\n ================================================================================================================");

                           printf("\n Select Choice => ");
                           printf("\n\t\t 1.Sale Battery \n\t\t 2.Sale Details \n\t\t 3.Update Details");

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
                                           printf("\n\t\t\t Press any key to Main.");
                                           getch();
                                           system("cls");

                                           break;

                               case 2:

                                           Sale_Details();
                                           break;

                               case 3:

                                           Update_Details();
                                           system("cls");

                                           break;

                           }

                   }

}
 void Sale_Battery()
 {
                            int j = 0,Choice = 0;


                            printf("\n\t\t\t\t ------------------------------------");
                            printf("\n\t\t\t\t      ADD YOUR SALES DETAILS");
                            printf("\n\t\t\t\t ------------------------------------");

                            if(i < Cnt)
                        {
                                      printf("\n\n Entar Shop id = ");
                                      scanf("%d",&Shop[i].Shop_id);


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

                                      printf("\n Entar Battery Prize = ");
                                      scanf("%f",&Shop[i].Battery_Price);

                                      Dis:
                                      printf("\n Entar Battery Discount = ");
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

                                       i++;

                            }
                            return;

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

                           return;


 }
  void Update_Details()
  {
                      int Sel = 0,id = 0,Find = 0,j = 0;

                      printf("\n\t\t\t Enter Your Shop Id :- ");
                      scanf("%d",&id);

            for(j = 0;j < Cnt;j++)
            {
                if(id == Shop[j].Shop_id)
                {     Find++;
                              printf("\n\t\t\t\t What Do You Want To Update");
                              printf("\n\t\t 1.Update Battery Price \n\t\t 2.Update Battery Discount");
                              scanf("%d",&Sel);

                              if(Sel == 1)
                              {
                                        printf("\n\n\t\t Enter Your New Battery Price = ");
                                        scanf("%f",&Shop[j].Battery_Price);


                              }
                              else if(Sel == 2)
                              {
                                        printf("\n\n\t\t Enter Your New Battery Discount = ");
                                        scanf("%f",&Shop[j].Battery_Discount);

                                        Shop[j].Battery_Discount = ((float)Shop[i].Battery_Price) * ( Shop[j].Battery_Discount) / 100;

                                        Shop[i].Total_Price = (Shop[i].Battery_Price) - ( Shop[j].Battery_Discount);


                              }
                              else
                              {
                                        printf("\n\t\t\t Invaild Choice ");
                              }

                              getch();
                        }

            }
            if(Find == 0)
            {
                printf("\n Id Is Not Available........");
            }

            return;

  }

