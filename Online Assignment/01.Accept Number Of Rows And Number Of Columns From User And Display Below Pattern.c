#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,No = 1;

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1;j <= iCol;j++)
        {
             if(No <= 9)
             {
                printf(" %d ",No);
                No++;
             }
             else
             {
                 No = No - 9;
                 printf(" %d ",No);
                 No++;

             }
        }
        printf("\n");
    }

    return 0;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("\n Enter Numbers Of Rows And Columns = ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
