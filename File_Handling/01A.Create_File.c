#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;

    fp = fopen("F:\\C_Programs\\File_Handling\\File_Data\\01file.text","w");

    if(fp == NULL)
    {
        printf("\n File Not Created");
    }
    else
    {
        printf("\n File Is Created & Ready For Use");
    }

    fclose(fp);

    getch();
    return 0;
}
