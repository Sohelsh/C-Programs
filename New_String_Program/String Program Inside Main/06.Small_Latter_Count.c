#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20] = "";
    int Cnt = 0,i = 0;

    printf("\n Enter String = ");
    gets(Str);

    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Cnt++;
        }
        i++;
    }

    printf("\n Small Latter Count Is = %d",Cnt);

    getch();
    return 0;
}
