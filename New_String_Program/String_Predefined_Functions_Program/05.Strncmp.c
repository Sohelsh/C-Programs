#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char Str[20] = "";
        char Str1[20] = "";
        int Result = 0,Cnt = 0;

        printf("\n Enter 1st String = ");
        gets(Str);

        printf("\n Enter 2nd String = ");
        gets(Str1);

        printf("\n How Many Character Compare = ");
        scanf("%d",&Cnt);


        Result = strncmp(Str,Str1,Cnt);

        if(Result == 0)
        {
            printf("\n Your String Is Same");
        }
        else
        {
            printf("\n Your String Is Not Same");
        }

        getch();
        return 0;
}

