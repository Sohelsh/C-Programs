#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Fp;
    char S[40];
    int i;

    Fp = fopen("F:\\C_Programs\\File_Handling\\File_Data\\03file.text","w");

    if(Fp == NULL)
    {
        printf("\n File Can't Created");
    }

    puts("\n Enter Any Text = ");
    gets(S);

    for(i = 0;i < strlen(S);i++)
    {
        fputc(S[i],Fp);
    }

     printf("\n !.....Data Successfully Transfer In File....!");

     getch();
     return 0;
}
