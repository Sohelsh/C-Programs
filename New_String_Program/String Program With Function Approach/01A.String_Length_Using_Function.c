#include<stdio.h>
#include<conio.h>

int StrLen(char *);

int main()
{
        char Str[20] = "";
        int Len = 0;

        printf("\n Enter String = ");
        gets(Str);

        Len = StrLen(Str);

        printf("\n Length Of String = %d",Len);

        getch();
        return 0;
}

int StrLen(char *Strl)
{
        int i = 0;

        while(Strl[i] != '\0')
        {
            i++;
        }

        return i;
}
