#include<stdio.h>
#include<conio.h>

int Table_Of_Range(int,int);

int main()
{
    int SNo = 0,ENo =  0;

     up:
    printf("\n\n Enter Staring Point = ");
    scanf("%d",&SNo);

    printf("\n Enter Ending Point = ");
    scanf("%d",&ENo);

    if((SNo > 0 && SNo > 0) && (ENo > 0 && ENo > 0))
    {
            Table_Of_Range(SNo,ENo);

            printf("\n Print Your Table Successfully.....");
    }
    else
    {
            printf("\n Invalid Input ....");

            goto up;
    }

    getch();

}
 int Table_Of_Range(N1,N2)
 {
     int R = 0, C = 0;

     for(C = 1; C  <= 10; C++)
     {
         for(R = N1 ; R <= N2 ;R++)
         {
             printf("%4d",R*C);
         }
         printf("\n");
     }
     return;
 }
