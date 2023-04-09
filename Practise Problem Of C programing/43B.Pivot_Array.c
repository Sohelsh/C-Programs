#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[6] = {},i = 0,j = 0,Rsum = 0,Lsum = 0;

    for(i = 0;i < 6;i++ )
    {
         printf("\n Enter Number = ");
         scanf("%d",&Arr[i]);
    }

    i = 6 - 1;

    while(i >= 0)        /// 5 7 3 2 9 6
    {
        Rsum = Rsum + Arr[j];

        if(Rsum == Lsum)
        {
            printf("\nIndex =  %d",j);
            break;
        }
        else
        {
            return -1;
        }

          Lsum = Lsum + Arr[i];
        i--;
        j++;
    }

    getch();
    return 0;

}
