#include<stdio.h>
#include<conio.h>
#define Size 5

int main()
{
    int Arr[Size],i = 0,j = 0,Cnt = 0,fre_arr[Size];

    for(i = 0;i < Size;i++)
    {
        printf("\n Enter Number %d = ",i+1);
        scanf("%d",&Arr[i]);
    }

    for(i = 0;i < Size;i++)
    {
        Cnt = 1;
        for(j = i+1; j < Size;j++)
        {
            if(Arr[i] == Arr[j])
            {
                Cnt++;
                fre_arr[j] = 0;
            }
        }

        if(fre_arr[i] != 0)
        {
            fre_arr[i] = Cnt;
        }
    }

    for(i = 0;i < Size;i++)
    {
        if(fre_arr[i] != 0)
        {
            printf("  %d",Arr[i]);

            printf("  |");

            printf("index = [%d]  %d\n",i,fre_arr[i]);
        }
    }

    getch();
    return 0;
}
