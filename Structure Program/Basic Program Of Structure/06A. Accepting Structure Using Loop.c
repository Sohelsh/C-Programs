#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

  struct Family
  {
      char Family_Name[20];
      int Male_Cnt;
      int Female_Cnt;
      int Child_Cnt;
  };


  int main()
{
    int i=0;

    struct Family Fam[2];

    for(i = 0 ;i < 2; i++)
    {
        printf("\n %d Number Family Information ",i+1);

        printf("\n Enter Family Name = ");
        scanf("%[^\n]",&Fam[i].Family_Name);

        fflush(stdin);

        printf("\n Enter Male Count = ");
        scanf("%d",&Fam[i].Male_Cnt);

        fflush(stdin);

        printf("\n Enter Female Count = ");
        scanf("%d",&Fam[i].Female_Cnt);

        fflush(stdin);

        printf("\n Enter Child Count = ");
        scanf("%d",&Fam[i].Child_Cnt);

        fflush(stdin);


    }


    for(i =0 ;i < 2; i++)
    {
        printf("\n\t %d Family Information  = ",i+1);

        printf("\n\n Family Name = %s",Fam[i].Family_Name);
        printf("\n\n Male Count  =  %d ",Fam[i].Male_Cnt);
        printf("\n\n Female Count = %d",Fam[i].Female_Cnt);
        printf("\n\n Child Count  = %d",Fam[i].Child_Cnt);
    }

    getch();
    return 0;
}
