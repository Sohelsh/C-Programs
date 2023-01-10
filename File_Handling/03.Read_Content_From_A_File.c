#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Ptr;
    char Ch;

    Ptr = fopen("F1.txt","r");

    if(Ptr == NULL)
    {
        printf("\n File Not Found");
        exit(1);
    }
    // Ch = fgetc(Ptr);

     while(!feof(Ptr))
     {
         printf("%c",Ch);
         Ch = fgetc(Ptr);
     }

    fclose(Ptr);

    getch();
    return 0;
}
