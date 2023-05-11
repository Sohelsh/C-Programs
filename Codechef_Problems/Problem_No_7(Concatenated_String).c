#include<stdio.h>
#include<string.h>
#define Size 200

int main()
{
    char Str1[Size] = {},Str2[Size] = {};
    int Cnt = 0,i = 0,Len = 0,j = 0;

    printf("\n Enter Count Of String = ");
    scanf("%d",&Cnt);

    for(i = 0; i < Cnt;i++)
    {
        printf("\n Enter First String = ");
        scanf("%s",Str1);

        printf("\n Enter String = ");
        scanf("%s",Str2);

        Len = strlen(Str1);

        Str1[Len] = ' '; /// For White Space
        Len = Len + 1;
        for(j = 0;j <= Len;j++)
        {
            Str1[Len+j] = Str2[j];
        }

        Str1[Len+j] = '\0';

        printf("\n\a Concatenated String Is = %s",Str1);

    }


    getch();
    return 0;
}
