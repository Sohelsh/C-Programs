#include<stdio.h>
#include<conio.h>

int main()
{
    int input = 0,j = 0,i = 0;

    printf("\n Enter Input = ");
    scanf("%d",&input);

    for(i = 0;i < input;i++)
    {
       int Size = 0,Arr[Size];

       printf("\ Enter Array Size = ");
       scanf("%d",&Size);

       for(j = 0; j < Size;j++)
       {
           printf("\n Enter Array Elements = ");
           scanf("%d",&Arr[j]);
       }

       int Right = 0, Large = 0;

       for(j = 0; j < Size;j++)
       {
           if(Arr[j] >= Large)
           {
               Large = Arr[j];
               Right = j;
           }
       }

       printf("\n Large Number Is = %d & Its Index Is = %d",Large,Right);
    }

    getch();
    return 0;
}
