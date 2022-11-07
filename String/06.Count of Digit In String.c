#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
        char cSrc[40] = {'\0'};
        int i = 0,D_cnt =0;

        printf("Enter A String = ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
            if(cSrc[i] >= '0'&& cSrc[i] <= '9')
            {
              D_cnt++;
            }
            i++;
        }
        printf("\n Count Of Digits In String : %d",D_cnt);


        getch();
        return 0;

}
