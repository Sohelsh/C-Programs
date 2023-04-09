#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str1[20] = "";
    char Str2[20] = "";
    int Cnt = 0;

    puts("Enter 1st String = ");
    gets(Str1);

    puts("Enter 2nd String = ");
    gets(Str2);

    printf("\n How Many Concatenation = ");
    scanf("%d",&Cnt);

    strncat(Str1,Str2,Cnt);

    printf("\n Your String Is = %s",Str1);

    getch();
    return 0;
}
