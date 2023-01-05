#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Fp;

    char S[]="Hello World";
    int i;

    Fp = fopen("F:\\C_Programs\\File_Handling\\File_Data\\02file.text","w");

    if(Fp == NULL)
    {
        printf("\n File Can'n Open");
    }
    for(i = 0;i < strlen(S);i++)
    {
        fputc(S[i],Fp);
    }

     printf("\n Data Successfully Transfer IN File");
     fclose(Fp);

     getch();
     return 0;

}
