#include<stdio.h>
#include<conio.h>

int main()
{
        char Str[20] = "";
        int i = 0,Spl_Sy = 0;

        printf("\n Enter String = ");
        gets(Str);

        while(Str[i] != '\0')
        {
            if(!((Str[i] >= 'A' && Str[i]<= 'Z') || (Str[i] >= 'a' && Str[i]<= 'z') || (Str[i] >= '0' && Str[i]<= '9')))
            {
                Spl_Sy++;
            }
            i++;
        }

        printf("\n Count Of Special Symbol Is = %d",Spl_Sy);

        getch();
        return 0;
}
