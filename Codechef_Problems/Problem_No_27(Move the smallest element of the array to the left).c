#include<stdio.h>
#include<conio.h>

int main()
{
    int T = 0;

    printf("\n How Many Input Do You Want = ");
    scanf("%d",&T);

    while(T--)
    {
        int Size = 0,i = 0,j = 0;

        printf("\n Enter Size = ");
        scanf("%d",&Size);

        int Arr[Size],Min_element= 0,Min_element_Index = 0;

        for(i = 0;i < Size;i++)
        {
            printf("\n Enter Element %d = ",i+1);
            scanf("%d",&Arr[i]);
        }
        Min_element = Arr[0];

        for(i = 1;i < Size;i++)
        {
            if(Arr[i] < Min_element)
            {
                Min_element = Arr[i];
                Min_element_Index = i;
            }
        }

        j = Min_element_Index;

        while(j > 0)
        {
            int Temp = Arr[j];
            Arr[j]   = Arr[j - 1];
            Arr[j-1] = Temp;

            j--;
        }

         printf("\n Your Ans Is = ");
         for(i = 0;i < Size;i++)
        {
           printf("%d ",Arr[i]);
        }
    }

    getch();
    return 0;
}
