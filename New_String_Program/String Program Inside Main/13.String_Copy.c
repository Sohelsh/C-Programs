#include<stdio.h>
#include<conio.h>

int main()
{
    char Str1[20] = "",Str2[20] = "";
    int i = 0, j = 0;

    printf("\n Enter String = ");
    gets(Str1);

    while(Str1[i] != '\0')
    {
        Str2[i] = Str1[i];

        i++;
    }

    printf("\n Old String Is = %s",Str1);
    printf("\n\n Copy String Is = %s",Str2);

    getch();
    return 0;
}
