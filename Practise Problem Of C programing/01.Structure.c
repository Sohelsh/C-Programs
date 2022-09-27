#include<stdio.h>
#include<conio.h>

 struct Workshop
 {
     char Std_Name[8];
     char Std_Cours[8];
     int Std_Fee;
 };
 int main()
{
        int i = 0;
        struct Workshop wor[3];

        for(i = 1;i <= 3 ;i++)
        {
            printf("\n Entar Student Name = ");
            scanf("%s",&wor[i].Std_Name);

            printf("\n Entar Student Cours = ");
            scanf("%s",&wor[i].Std_Cours);

            printf("\n Entar Student Fee = ");
            scanf("%d",&wor[i].Std_Fee);
        }
        for(i = 1;i < 3 ;i++)
        {
            printf("\n first Student information =%s %s %d",wor[i].Std_Name,wor[i].Std_Cours,wor[i].Std_Fee);

        }


 }





