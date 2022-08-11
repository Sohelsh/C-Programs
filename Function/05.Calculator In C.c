#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 int Add(int,int);
 int Sub(int No1,int No2);
 int Mult(int No1,int No2);
 int Mod(int No1,int No2);
 int Div(int No1,int No2);
 int Per(int No1,int No2);

 int main()
 {
     int Choice = 0,No1 = 0 ,No2 = 0 ;

      UP:
     printf("\n-----------------------------------------------------------------\n");
     printf("\n Select Choice :- ");

                         printf("\n\t 1.Addition");
                         printf("\n\t 2.Subtraction");
                         printf("\n\t 3.Multiplication ");
                         printf("\n\t 4.Modulo  ");
                         printf("\n\t 5.Division");
                         printf("\n\t 6.Percentage");
                         printf("\n\t 7.Exit");
     printf("\n-----------------------------------------------------------------");



                printf("\n\n Entar Your Choice = ");
                scanf("%d",&Choice);


      switch(Choice)
      {
            case 1:
                         printf("\n Entar 2 Numbers For Addition = ");
                         scanf("%d%d",&No1,&No2);

                         Add(No1,No2);
                         break;

           case 2:
                         printf("\n Entar 2 Numbers For Subtraction = ");
                         scanf("%d%d",&No1,&No2);

                         Sub(No1,No2);
                         break;

            case 3:

                         printf("\n Entar 2 Numbers For Multiplication = ");
                         scanf("%d%d",&No1,&No2);

                         Mult(No1,No2);
                         break;

            case 4:
                         printf("\n Entar 2 Numbers For Modulo = ");
                         scanf("%d%d",&No1,&No2);

                         Mod(No1,No2);
                         break;

            case 5:
                         printf("\n Entar 2 Numbers For Division  = ");
                         scanf("%d%d",&No1,&No2);

                         Div(No1,No2);
                         break;

             case 6:
                         printf("\n Entar A Number Of Percentage = ");
                         scanf("%d",&No1);

                         printf("\n How Much Percent = ");
                         scanf("%d",&No2);

                         Per(No1,No2);
                         break;

             case 7:

                       goto DWN;

             default:
                       printf("\n Invalid Choice___Select A Agian ");

                       getch();
                       system("cls");

                goto UP;

      }


             DWN:
                        printf("\n Thanks For Visiting ..........");

              getch();
              return 0;

 }

           int Add(N1,N2)
           {
                      int Sum =0;

                      Sum = N1 + N2;

                      printf("%d",Sum);

                      return Sum;
           }

           int Sub(N1,N2)
           {
                     int Sub = 0;

                     Sub = N1 - N2;

                     printf("\n Division Of %d - %d = %d",N1,N2,Sub);

                     getch();
                     return 0;
           }

           int Mult(N1,N2)
           {
                     int Mul = 0;


                     Mul = N1 * N2;

                     printf("\n Multiplication Of %d * %d = %d",N1,N2,Mul);

                     getch();
                     return 0;

           }

           int Mod(N1,N2)
           {
                     int Mod = 0;

                     Mod = N1 % N2;

                     printf("\n Modulo Of |%d| & |%d| = %d",N1,N2,Mod);

                     getch();
                     return 0;
           }

           int Div(N1,N2)
           {
                    int Div = 0;

                     Div = N1 / N2;

                     printf("\n Division Of %d / %d = %d",N1,N2,Div);


                     getch();
                     return 0;

           }
           int Per(N1,N2)
           {
                     int Per = 0;

                     Per = (N1 * N2) /100;

                     printf("\n Addition  Of |%d| & |%d| = %d",N1,N2,Per);

                     getch();
                     return 0;
           }



