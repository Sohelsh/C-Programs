#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
        char cSrc[30] = {'\0'};
        char copy_s[20]= {};
        int i =0;

        printf("Enter A String =  ");
        gets(cSrc);

        while( cSrc[i] != '\0')
        {
            copy_s[i] = cSrc[i];

            i++;
        }
        copy_s[i] = '\0';


        printf("\n Given A String Is %s",cSrc);

        printf("\n Copy String Is %s",copy_s);


        getch();
        return 0;
}
