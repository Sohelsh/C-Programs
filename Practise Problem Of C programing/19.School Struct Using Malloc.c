#include<stdio.h>
#include<conio.h>
struct School
{
    int Stu_id;
    char Stu_Name[40];
    int Stu_Age;
};

void Add_Student_Information(struct School*);
void Display_Student_Information(struct School*);

int main()
{
        int i = 0,S_Cnt = 0;
        struct School *sptr;

        printf("\n Enter Student Student Count = ");
        scanf("%d",&S_Cnt);

        sptr = (struct School *)malloc(S_Cnt * sizeof(struct School));

        for(i = 0;i < S_Cnt;i++)
        {
             Add_Student_Information(&sptr[i]);
        }
        for(i = 0;i < S_Cnt;i++)
        {
              Display_Student_Information(&sptr[i]);
        }

        return 0;
        getch();
}
void Add_Student_Information(struct School* sptr1)
{
        printf("\n Enter Student ID = ");
        scanf("%d",&sptr1->Stu_id);

        printf("\n Enter Student Name = ");
        scanf("%s",&sptr1->Stu_Name);

        printf("\n Entar Student Age = ");
        scanf("%d",&sptr1->Stu_Age);

        return;
}
void Display_Student_Information(struct School* sptr2)
{
        printf("\n Student Id = %d",sptr2->Stu_id);
        printf("\n Student Name = %s",sptr2->Stu_Name);
        printf("\n Student Age = %d",sptr2->Stu_Age);

        return;
}

