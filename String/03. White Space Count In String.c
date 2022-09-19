#include <stdio.h>
#include <conio.h>

int main()
{
        char cSrc[30]={'\0'};
        int i = 0,scout = 0;

        printf("Enter A String = ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
            if(cSrc[i] == ' ')
            {
            scout++;
            }
            i++;
        }

        printf("\n Space Count is = %d",scout);

        getch();
        return 0;
}
