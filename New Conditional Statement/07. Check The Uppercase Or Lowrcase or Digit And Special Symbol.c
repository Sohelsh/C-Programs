#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter A Character = ");
    Ch =getche(); //scanf("%c",&Ch);

    if(Ch >= 'A' && Ch <= 'Z')
    {
        printf("\n Given Character Is Uppercase = %c ",Ch);
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        printf("\n Given Character Is Lowercase = %c ",Ch);
    }
    else if(Ch >= '0' && Ch <= '9')
    {
         printf("\n Given Character Is Digit = %c ",Ch);
    }
    else
    {
         printf("\n Given Character Is Special Symbol = %c ",Ch);
    }


     getch();
     return 0;

}


















