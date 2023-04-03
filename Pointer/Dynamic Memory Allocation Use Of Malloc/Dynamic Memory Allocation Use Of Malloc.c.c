#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()                         //Use Of Integar
{
    int Cnt =0,i =0;
    int *ptr = NULL ,sum=0;

    printf("\n Enter A Count = ");
    scanf("%d",&Cnt);

    ptr =(int*)malloc(Cnt * sizeof(int));

   /* if(ptr = NULL)
    {
        printf("\n Memory Invild");
    }*/

    for(i =0;i < Cnt; i++)
    {
        printf("\n Enter A Bill Numbar No%d = ",i +1);
        scanf("%d",&ptr[i]);

        sum =sum +ptr[i];
    }
     printf("\n Bill Sum = %d",sum);
    // syatem("cls");

    getch();
    return 0;
}
