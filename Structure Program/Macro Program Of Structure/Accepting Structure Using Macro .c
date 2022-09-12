#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Hos_P 3          ///Macro


struct Hospital
{
       char Patient_Name[20];
       int Patient_Age;
       char Patient_From[20];

};
int main()
{
        int i =0;

        struct Hospital Hos[4];

        for(i = 0;i < Hos_P;i++)
        {
        printf("\n\t %d Patient Detilas ",i+1);

        printf("\n\n Entar Patient Name = ");
        gets(Hos[i].Patient_Name);

        fflush(stdin);

        printf("\n Entar Patient Age = ");
        scanf("%d",&Hos[i].Patient_Age);

        fflush(stdin);

        printf("\n Entar Patient From = ");
        gets(Hos[i].Patient_From);

        fflush(stdin);

        printf("\n ---------------------------------------------- ");

        system("cls");
        }

        for(i = 0;i < Hos_P;i++)
        {
        printf("\n******* %d Patients Detalis******* ",i+1);


        printf("\n\n Patient Name= %s \n\n Patient Age= %d \n\n Patient From = %s",Hos[i].Patient_Name,Hos[i].Patient_Age,Hos[i].Patient_From);

        }

        getch();
        return 0;
}
