#include<stdio.h>
#include<conio.h>

int Reverse_String(char *);

int main()
{
    char Str[20] = "";

    printf("\n Enter String = ");
    gets(Str);

    printf("\n Reverse String Is = %s",Reverse_String(Str));

    getch();
    return 0;
}

int Reverse_String(char *Str1)
{
    int i = 0,j = 0;
    char N_Str[20] = "";

    while(Str1[i] != '\0')
    {
        i++;
    }
    i--;

    while(Str1[j] != '\0')
    {
        N_Str[j] = Str1[i];

        i--;
        j++;
    }

    printf("\n Reverse String Is = %s",N_Str);

    return N_Str;
}
