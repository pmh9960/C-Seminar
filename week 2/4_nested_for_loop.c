#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("i = %d, j = %d\n", i, j);
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}