#include<stdio.h>
#include<conio.h>

int main()
{
        char Str[20] = "";
        int Cnt = 0,i = 0;

        printf("\n Enter String = ");
        gets(Str);

        while(Str[i] != '\0')
        {
            if(Str[i] == 'a' || Str[i] == 'A'||Str[i] == 'e'||Str[i] == 'E')
            {
                Cnt++;
            }
            else if(Str[i] == 'i' || Str[i] == 'I'||Str[i] == 'O'||Str[i] == 'o' ||Str[i] == 'U' || Str[i] == 'u')
            {
                Cnt++;
            }
            i++;
        }

        printf("\n Count Of Vowels = %d",Cnt);

        getch();
        return 0;
}
