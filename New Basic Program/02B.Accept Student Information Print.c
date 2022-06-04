#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Stdname[20]={'\0'};
    int Roll_No=0;
    char Course[10]={'\0'};
    char City[10]={'\0'};


    printf("\n Enter Student Name = ");
    gets(Stdname);

    printf("\n Enter Student Roll No = ");
    scanf("%d",&Roll_No);

    fflush(stdin);

    printf("\n Enter Student Course Name =");
    gets(Course);

    printf("\n Enter Student City Name = ");
    gets(City);

    printf("\n ====================***********===================");

    printf("\n\n Student Name = %s",Stdname);
    printf("\n\n Student Roll No =%d ",Roll_No);
    printf("\n\n Student Course Name = %s",Course);
    printf("\n\n Student City Name =%s ",City);

    printf("\n ====================***********===================");


    getch();
    return 0;



}
