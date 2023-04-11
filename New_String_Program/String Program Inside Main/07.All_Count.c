#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20] = "";
    int DCnt = 0,C_Cnt = 0,S_Cnt = 0,S_char = 0,i = 0;

    printf("\n Enter String = ");
    gets(Str);

    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            S_Cnt++;
        }
        else if(Str[i] >= 'A' && Str[i] <= 'Z')
        {
            C_Cnt++;
        }
        else if(Str[i] >= '0' && Str[i] <= '9')
        {
            DCnt++;
        }
        else
        {
            S_char++;
        }
        i++;
    }
    printf("\n Capital Latter Count Is = %d",C_Cnt);
    printf("\n Small Latter Count Is = %d",S_Cnt);
    printf("\n Digits Latter Count Is = %d",DCnt);
    printf("\n Special Latter Count Is = %d",S_char);

    getch();
    return 0;
}
