#include<stdio.h>
            // Max Of Three Array Using Pointer

int FindMax(int **P,int *Size,int N)
{
    int Max = 0,i = 0,j = 0;

    for(i = 0; i < N ;i++)
    {
        for(j = 0;j < Size[i];j++)
        {
            if(Max < P[i][j])
            {
                Max = P[i][j];
            }
        }
    }
    return Max;
}
int main()
{
    int A[] = {78,22,11};
    int B[] = {95,45,35,20,45};
    int C[] = {13,17,99,52,63,56};
    int *P[3];
    int Marks = 0;
    int Size[] = {3,5,6};

    P[0] = A;
    P[1] = B;
    P[2] = C;

    Marks = FindMax(P,Size,3);

    printf("\n Highest Mark Is = %d",Marks);
    return;
}
