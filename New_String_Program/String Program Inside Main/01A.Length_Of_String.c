#include<stdio.h>
#include<conio.h>
/// Using While

int main()
{
        char Str[20] = "";
        int Len = 0;

        printf("\n Enter String = ");
        gets(Str);


        while(Str[Len] != '\0')
        {
            Len++;
        }

        printf("\n Length Of String Is = %d",Len);

        getch();
        return 0;
}
