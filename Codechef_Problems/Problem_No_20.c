#include <stdio.h>

int main()
{
    int X = 30;

        if (X % 3 == 0)
        {
            printf("Number of questions incorrectly solved is 0\n");
        }
        else if ((X + 1) % 3 == 0)
        {
            printf("Number of questions incorrectly solved is 1\n");
        }
        else
        {
            printf("Number of questions incorrectly solved is 2\n");
        }

        X = 34;
        if (X % 3 == 0)
        {
            printf("Number of questions incorrectly solved is 0\n");
        }
        else if ((X + 1) % 3 == 0)
        {
            printf("Number of questions incorrectly solved is 1\n");
        }
        else
        {
            printf("Number of questions incorrectly solved is 2\n");
        }

    return 0;
}
