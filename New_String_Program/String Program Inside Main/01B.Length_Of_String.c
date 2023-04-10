#include<stdio.h>
#include<conio.h>
/// Using for

int main()
{
        char Str[20] = "";
        int Len = 0;

        printf("\n Enter String = ");
        gets(Str);


        for(Len = 0; Str[Len] != '\0'; Len++);

        printf("\n Length Of String Is = %d",Len);

        getch();
        return 0;
}

