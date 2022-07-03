#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define StdCnt 2

struct student
{
    int Roll_No;
    char Std_Name[16];
    int Phy_Mark;
    int Chem_Mark;
    int Maths_Mark;
    int Total_Mark;
    float per;
};
int main()
{
    int i = 0;
    struct student std[StdCnt];

    for(i = 0; i < StdCnt; i++)
    {
        std[i].Roll_No = i + 101;
        printf("\n Entar Student Details For Roll No %d  \n",i + 101);

        fflush(stdin);

        printf("\n Entar Student Name = ");
        gets(std[i].Std_Name);

        printf("\n Entar Student Physics Marks =  ");
        scanf("%d",&std[i].Phy_Mark);

        printf("\n Entar Student Chemistry Marks = ");
        scanf("%d",&std[i].Chem_Mark);

        printf("\n Entar Student Mathamatics Marks = ");
        scanf("%d",&std[i].Maths_Mark);

        std[i].Total_Mark = std[i].Phy_Mark + std[i].Chem_Mark + std[i].Maths_Mark;

        std[i].per = ((float)std[i].Total_Mark )/3;

        printf("-------------------------------------------------------------------------------");

        system("cls");
    }
    for(i = 0; i < StdCnt; i++)
    {
        printf("\n\t Entar Student Details For Roll No %d  \n",i + 101);

        printf("\n\t Student Name = %s",std[i].Std_Name);

        printf("\n\n Student Marks =>");

        printf("\n   Student Physics Marks = %d",std[i].Phy_Mark);
        printf("\n   Student Physics Marks = %d",std[i].Chem_Mark);
        printf("\n   Student Physics Marks = %d",std[i].Maths_Mark);

        printf("\n   Student Total Marks = %d",std[i].Total_Mark);
        printf("\n   Student Persentage  = %0.2f",std[i].per);

        printf("\n-------------------------------------------------------------------------------");

    }

    getch();
    return 0;
}
