#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int No = 0 ,Sum = 0 ,Cnt = 0;
    
    printf("\n Enter Numbers To Calculate Their Sum \n (Will Stop Summation After 0/-ve Input ) =>");
    
    for(Cnt = 1; ; Cnt ++)
    {
        printf("\n\t Enter Number %d = ",Cnt);
        scanf("%d",&No);
        
        if(No <= 0)
        {
             break;
        }
        
        Sum = Sum + No;
    }
    
    
    printf("\n Prese Any Key To Get Summation of Given Numbers => ");
    scanf("%d",&Cnt);       // getche();
    system("cls");
    
    printf("\n Summation Of Given Numbers = %d", Sum);
    
    printf("\n\n Thanks ");
    getch();
    return 0;
}
