#include<stdio.h>
#include<conio.h>

int Reverse_String(char *,char*);

int main()
{
    char Str[20] = "",N_Str[20] = "";;

    printf("\n Enter String = ");
    gets(Str);

    printf("\n Reverse String Is = %s",Reverse_String(Str,N_Str));

    getch();
    return 0;
}

int Reverse_String(char *Str1,char *N_Str)
{
    int i = 0,j = 0;

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
    return N_Str;
}
