#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Entar A Charactor = ");
    Ch =getche(); //scanf("%c",&Ch);

    if(Ch >= 'A' && Ch <= 'Z')
    {
        printf("\n Given Charactor Is Uppercase = %c ",Ch);
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        printf("\n Given Charactor Is Lowercase = %c ",Ch);
    }
    else
    {
         printf("\n Given Charactor Is Naither Lowercase and Upparcase = %c ",Ch);
    }


    getch();
    return 0;
}
