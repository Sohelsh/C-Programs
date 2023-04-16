#include<stdio.h>
#include<conio.h>

int Space_Count(char *);

int main()
{
    char Str[20] = "";

    printf("\n Enter String = ");
    gets(Str);

    printf("\n Space Count Is = %d",Space_Count(Str));

    getch();
    return 0;
}

int Space_Count(char *Str1)
{
    int Cnt = 0,i = 0;

    while(Str1[i] != '\0')
    {
        if(Str1[i] == ' ' || Str1[i] == '\t')
        {
            Cnt++;
        }
        i++;
    }

    return Cnt;
}
