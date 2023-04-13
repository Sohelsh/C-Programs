#include<stdio.h>
#include<conio.h>

static int Total_Page = 0;

int main()
{
        int Read_Page = 0;

        printf("\n How Many Pages In Books :");
        scanf("%d",&Total_Page);

        while(1)
        {
            Read_Page = Read_Book();

            if(Total_Page <= Read_Page)
            {
                break;
            }
        }

        printf("\n Congress Your Book Completed");

}
int Read_Book()
{
        int P_Cnt = 0,Pen_Page = 0;
        static int R_Page = 0;

        printf("\n You Have Read Pages : %d",R_Page);

        getch();

        printf("\n\n How Many Read Pages :");
        scanf("%d",&P_Cnt);

        R_Page = R_Page + P_Cnt;

        Pen_Page = Total_Page - R_Page;

        printf("\n Your Pending Pages : %d",Pen_Page);

        return R_Page;
}
