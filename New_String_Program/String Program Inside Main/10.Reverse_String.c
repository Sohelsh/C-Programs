#include<stdio.h>
#include<conio.h>

int main()
{
        char Str[20] = "",Str1[20] = "";
        int i = 0,j = 0;

        printf("\n Enter String = ");
        gets(Str);

        while(Str[i] != '\0')
        {
            i++;
        }
        i = i - 1;

        while(Str[j] != '\0')
        {
            Str1[j] = Str[i];

            j++;
            i--;
        }

        printf("\n Reverse String Is = %s",Str1);

        getch();
        return 0;
}
