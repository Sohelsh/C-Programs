#include<stdio.h>
#include<conio.h>

int main()
{
        char Str[20] = "";
        int i = 0,Cnt = 0;

        puts("\n Enter String = ");
        gets(Str);

        while(Str[i] != '\0')
        {
            if(Str[i] != ' ' && Str[i] != '\t')
            {
                Cnt++;
            }

            i++;
        }

        printf("\n\n Digit Count In String Is = %d",Cnt);

        getch();
        return 0;
}

