#include<stdio.h>
#include<conio.h>

int Cout_Small_Latter(char Cstr[])
{
    int i = 0,Cnt = 0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i] >= 'a' & Cstr[i] <= 'z')
        {
            Cnt++;
        }
        i++;
    }

     return Cnt;
}
int main()
{
    char Str[20] = {'\0'};

    printf("\n Enter A Word = ");
    gets(Str);

    printf("\n Count Is = %d",Cout_Small_Latter(Str));

    getch();
    return 0;
}
