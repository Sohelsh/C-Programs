#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Std
{
    int Roll_No;
    char Name[40];
    int AC;
    int SP;
    int OMC;
    int Total;
    float Per;
};

void Accepts_Details(struct Std*);
void Display_Details(struct Std*);

int main()
{
        int i = 0,Cnt = 0;
        struct Std *Stu = NULL;

        printf("\n\t Enter Count => ");
        scanf("%d",&Cnt);

        Stu = (struct Std*)malloc(Cnt * sizeof(struct Std));

        for(i = 0;i < Cnt;i++)
        {
                Accepts_Details(&Stu[i]);
        }

        printf("\n Entar Any Key To Go Display Information ");

        getch();

        for(i = 0;i < Cnt;i++)
        {
                Display_Details(&Stu[i]);
        }

        getch();
        return 0;
}

void Accepts_Details(struct Std *sptr)
{
        printf("\n Entar Student Roll No = ");
        scanf("%d", &sptr->Roll_No);

        fflush(stdin);

        printf("\n Entar Student Name = ");
        gets(sptr->Name);
        fflush(stdin);


        fflush(stdin);

        printf("\n Entar Account Mark = ");
        scanf("%d", &sptr->AC);

        printf("\n Entar SP Mark = ");
        scanf("%d", &sptr->SP);

        printf("\n Entar OMC Mark = ");
        scanf("%d", &sptr->OMC);

        sptr->Total = sptr->AC + sptr->SP + sptr->OMC;
        sptr->Per  = (sptr->Total * 300)/100;

        return;
}

void Display_Details(struct Std *sptr)
{
        printf("\n Roll Number = %d",sptr->Roll_No);
        printf("\n Name Is = %s",sptr->Name);
        printf("\n Account Mark = %d",sptr->AC);
        printf("\n SP Mark = %d",sptr->SP);
        printf("\n OMC Mark = %d",sptr->OMC);
        printf("\n Total Mark =%d",sptr->Total);
        printf("\m Percentage = %f",sptr->Per);

        getch();
        return;
}


