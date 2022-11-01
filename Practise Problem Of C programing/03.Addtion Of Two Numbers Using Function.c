#include<stdio.h>
#include<conio.h>

int Add(int ,int);

int main()
 {
            int No1 = 0, No2 = 0;

            printf("\n Entar Two Numbers = ");
            scanf("%d%d",&No1,&No2);

            Add(No1,No2);
 }

int Add(int N1,int N2)
 {
            int Sum = 0;

            Sum = N1 + N2;

            printf("%d",Sum);

            getch();
            return 0;
 }
