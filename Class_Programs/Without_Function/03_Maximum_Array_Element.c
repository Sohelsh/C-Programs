#include<stdio.h>
#include<conio.h>
#define Size 5

int main()
{
        int Arr[Size] = {},i = 0,Max = 0;

        for(i= 0;i < Size;i++)
        {
            printf("\n Enter Number %d = ",i + 1);
            scanf("%d",&Arr[i]);
        }

        for(i= 0;i < Size;i++)
        {
            printf("\n Numbers IS %d = %d",i + 1,Arr[i]);

        }


        for(i = 0;i < Size;i++)
        {
            if(Arr[i] > Max)
            {
                Max = Arr[i];
            }
        }

        printf("\n\n Maximum Number Is = %d",Max);

        getch();
        return 0;

}
