#include<stdio.h>
#include<conio.h>

int length_String(char *);

int main()
{
    char Str[20] ="";

    printf("\n Enter String = ");
    gets(Str);

    printf("\n Length Of String = %d",length_String(Str));

    getch();
    return 0;
}

int length_String(char *Str1)
{
    int Cnt = 0,i = 0;

    while(Str1[i] != '\0')
    {
        if(Str1[i] != ' ' && Str1[i] != '\t')
        {
            Cnt++;
        }
        i++;
    }

    return Cnt;
}
