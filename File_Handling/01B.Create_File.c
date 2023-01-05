#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("F:\\C_Programs\\File_Handling\\File_Data\\01file.text","w");

    if(ptr == NULL)
    {
        printf("\n File Not Created");
    }
    else
    {
        printf("\n File Is Created & Ready To Use");
    }

    fclose(ptr);

    getch();
    return 0;
}
