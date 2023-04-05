#include<stdio.h>
#include<conio.h>
#define Size 5

int main()
{
        int Arr[Size] = {},i = 0,Min = 0;

        for(i = 0;i < Size;i++)
        {
            printf("\n Enter Numbers %d = ",i+1);
            scanf("%d",&Arr[i]);
        }

        for(i = 0;i < Size;i++)
        {
            printf("\n Enter Numbers Is = %d",Arr[i]);

        }

        Min = Arr[0];

        for(i = 0;i < Size;i++)
        {
           if(Arr[i] < Min && Min != 0)
           {
               Min = Arr[i];
           }
        }

        printf("\n\n\n Minimum Number Is = %d",Min);

        getch();
        return 0;
}
