#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char Str[20] = "I Am From Delhi";
        int Len = 0;

        Len = strlen(Str);

        printf("\n Your String Is = %d",Len);

        getch();
        return 0;
}

