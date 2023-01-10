#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Fp;
    char Str[40];

    Fp = fopen("F:\\C_Programs\\File_Handling\\File_Data\\04.File.txt","a");

    if(Fp == NULL)
    {
        printf("\n File Not Found");
        exit(1);
    }

    printf("\n Enter String = ");
    gets(Str);

    fputs(Str,Fp);

    fclose(Fp);

    getch();
    return 0;

}
