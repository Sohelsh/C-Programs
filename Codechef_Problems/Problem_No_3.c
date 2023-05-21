#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 10;

        printf("%d\n",No);

        char A[5] = "ABCD";

        printf("%s\n",A);

        int Arr[] = {1, 2,3,4};

        int i = 0;

        for(i = 0; i < 4;i++)
        {
            printf("%d",Arr[i]);
        }

        getch();
        return 0;
}
