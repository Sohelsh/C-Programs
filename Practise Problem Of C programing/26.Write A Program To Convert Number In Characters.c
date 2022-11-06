#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int No = 0,Dig = 0,Rev = 0;

        printf("\n Enter Number = ");
        scanf("%d",&No);

        while(No > 0)
        {
            Dig = No % 10;
            Rev = (Rev * 10) + Dig;
            No = No/ 10;
        }
        No = Rev;

        while(No > 0)
        {
            Dig = No % 10;

            switch(Dig)
            {
               case 1:
                      printf(" One ");
                      break;

               case 2:
                      printf("Two ");
                      break;

               case 3:
                      printf("Three ");
                      break;

               case 4:
                      printf("Four");
                      break;

               case 5:
                      printf("Five");
                      break;

               case 6:
                      printf("Six");
                      break;

               case 7:
                      printf("Seven");
                      break;

               case 8:
                      printf("Eight");
                      break;

               case 9:
                      printf("Nine");
                      break;

               case 0:
                      printf("Zero");
                      break;

            }

            No = No / 10;

        }

        getch();
        return 0;
}

