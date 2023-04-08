#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char Str[20] = "I Am From Delhi";
        char Str1[20] = "";

        strncpy(Str1,Str,9);

        printf("\n Your String Is = %s",Str1);

        getch();
        return 0;
}
