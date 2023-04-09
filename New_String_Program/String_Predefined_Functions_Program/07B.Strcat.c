#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char Str1[20] = "";
        char Str2[20] = "";
        char FName[20] = "";

        printf("\n Enter 1st String = ");
        gets(Str1);

        printf("\n Enter 2nd String = ");
        gets(Str2);

        strcat(strcat(strcat(FName,Str1)," "),Str2);

        printf("\n Your Concatenation String Is = %s",FName);


        printf("\n\n Your Old 1st String = %s",Str1);
        printf("\n\nYour Old 2nd String = %s",Str2);

        getch();
        return 0;
}


