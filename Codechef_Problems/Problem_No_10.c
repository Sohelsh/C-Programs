#include<stdio.h>
#include<conio.h>

int main()
 {
    int t,X;
    int i = 1;
      printf("\n Enter Number :");
    scanf("%d", &t );
    while (i <= t)
    {
          printf("\n Enter Number :");
        scanf("%d", &X);
        X = X * 2;
        printf("\n%d",X*5);
        i = i+1;
    }

    getch();
    return 0;
}
