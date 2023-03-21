#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[5],Ser = 0 ,Cnt = 0,i = 0;

    for(i = 0;i < 5;i++)
    {
        printf("\n Enter Number = ");
        scanf("%d",&Arr[i]);
    }
    system("cls");

    printf("\n Search Number = ");
    scanf("%d",&Ser);

     for(i = 0;i < 5;i++)
    {
        if(Ser == Arr[i])
        {
            break;
        }

    }
    if(i < 5)
    {
        printf("\n Number Is Here :%d and is Element No : %d",Arr[i],i+1);
    }
    else
    {
        printf("\n Element Not Found");
    }

    getch();
    return 0;

}
