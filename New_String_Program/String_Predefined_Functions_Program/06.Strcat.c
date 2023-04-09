#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char Str[20] = "";
        char Str1[20] = "";

        printf("\n Enter 1st String = ");
        gets(Str);

        printf("\n Enter 2nd String = ");
        gets(Str1);

        strcat(Str,Str1);

        printf("\n Your String Is = %s",Str);


        getch();
        return 0;
}


