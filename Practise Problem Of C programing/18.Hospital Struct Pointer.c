#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Hospital
{
    int P_Id;
    char P_Name[40];
    char P_City[20];
};

void Add_Patient_Information(struct Hospital*);
void Display_Patient_Information(struct Hospital*);

int main()
{
        int i = 0,P_Cnt =0;
        struct Hospital *Pptr;

        printf("\n How Many Patient Add = ");
        scanf("%d",&P_Cnt);

        Pptr = (struct Hospital *)malloc(P_Cnt * sizeof(struct Hospital));

        for(i = 0;i < P_Cnt;i++)
        {
            Add_Patient_Information(&Pptr[i]);
            system("cls");
        }

        printf("\n Enter Any Key For Display Information = ");

        for(i = 0;i < P_Cnt;i++)
        {
            Display_Patient_Information(&Pptr[i]);

        }

        return 0;
        getch();

}

void Add_Patient_Information(struct Hospital* ptr)
{
        printf("\n Enter Patient Id = ");
        scanf("%d",&ptr->P_Id);

        printf("\n Enter Patient Name = ");
        scanf("%s",&ptr->P_Name);

        printf("\n Enter Patient City = ");
        scanf("%s",&ptr->P_City);

        return 0;
}

void Display_Patient_Information(struct Hospital* ptr)
{
        printf("\n Patient ID   = %d",ptr->P_Id);
        printf("\n Patient Name = %s",ptr->P_Name);
        printf("\n Patient City = %s",ptr->P_City);

        return 0;
}
