#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Fptr;

    int i = 0;
    char S[20];

    Fptr = fopen("File.txt","r");

    if(Fptr == NULL)
    {
        printf("\n File Can't Open");
        exit(1);
    }

    printf("\n Enter String = ");
    gets(S);

    for(i = 0;i < strlen(S);i++)
    {
        fputc(S[i],Fptr);
    }

    fclose(Fptr);

    getch();
    return 0;

}
