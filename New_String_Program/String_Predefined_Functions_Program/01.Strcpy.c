#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char Str[20] = "";
        char Str1[20] = "";

        strcpy(Str,"Sohel Shaikh");

        printf("\n Your String Is = %s",Str);

        strcpy(Str1,Str);

        printf("\n Your Second String Is = %s",Str1);

        getch();
        return 0;

}
