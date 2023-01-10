#include<stdio.h>
#include<conio.h>
                     //Read Content From A File Using fgets Function.
int main()
{
    FILE * Ptr;
    char Str[20];

    Ptr = fopen("F1.txt","r");

    if(Ptr == NULL)
    {
        printf("\n Data Not Found");
        exit(1);
    }

    while(!feof(Ptr))
    {
        fgets(Str,2,Ptr);
        printf("%s",Str);
    }

    fclose(Ptr);

    getch();
    return 0;

}
