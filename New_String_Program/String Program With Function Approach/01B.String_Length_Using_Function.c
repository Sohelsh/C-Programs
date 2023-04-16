#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int StrLen(char *);

int main()
{
    char Str[20] = "";


    printf("\n Enter String = ");
    gets(Str);

    printf("\n Length Of String = %d",StrLen(Str));

    getch();
    return 0;
}

int StrLen(char *Strl)
{
    return printf("%s",Strl);

}
