#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 23 ,No2 = 66;
    int *ptr1 = &No1;
    int *ptr2 = &No1;

    printf("\n Value Of No = %d",No1);
    printf("\n Address Of No = %d",&No1);
    printf("\n Value Of No Using Its Pointer = %d",*ptr1);
    printf("\n Address Of No Using Ptr1 = %d ",ptr1);
    printf("\n Address Of ptr = %d",&ptr1);

    printf("\n\n Value Of No2 = %d",No2);
    printf("\n Address Of No2 = %d",&No2);
    printf("\n Value Of No Using Its Pointer = %d",*ptr2);
    printf("\n Address Of No Using Ptr1 = %d ",ptr2);
    printf("\n Address Of ptr = %d",&ptr2);

    getch();
    return 0;
}
