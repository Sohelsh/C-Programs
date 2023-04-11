#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20] = "";
    int i = 0;

    printf("\n Enter String  = ");
    gets(Str);

    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Str[i] -= 32;
        }
        i++;
    }

    printf("\n Your String Is = %s",Str);

    getch();
    return 0;
}
