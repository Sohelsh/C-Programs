#include<stdio.h>
#include<conio.h>

int main()
{
        char Str[20] = "";
        int i = 0,Dcnt = 0;

        puts("\n\n Enter String = ");
        gets(Str);

        while(Str[i] != '\0')
        {
            if(Str[i] >= '0' && Str[i] <= '9')
            {
                Dcnt++;
            }

            i++;
        }

        printf("\n\n Digit Count In String Is = %d",Dcnt);

        getch();
        return 0;
}
