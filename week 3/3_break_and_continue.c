#include <stdio.h>

int main()
{
    // break
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    // continue;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // break and continue
    int n = 1;
    int cnt = 0;
    while (1)
    {
        // limit output
        cnt++;
        if (cnt > 100)
        {
            break;
        }

        n++;
        if (n % 2 == 0)
        {
            continue;
        }
        printf("%d ", n);
    } // 3 5 7 9 ...

    return 0;
}