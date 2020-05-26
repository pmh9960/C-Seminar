#include <stdio.h>

// way 1
int main()
{
    int n, sum;
    while (1)
    {
        printf("n을 입력하시오.\n");
        scanf("%d", &n);
        if (n == 0)
            break;
        sum = 0;
        for (int i = 0; i <= n; i++)
        {
            sum += i;
        }
        printf("%d\n", sum);
    }
}

// way 2
int main()
{
    int n, sum;
    while (1)
    {
        printf("n을 입력하시오.\n");
        scanf("%d", &n);
        if (n == 0)
            break;
        sum = sum_1_to_n(n);
        printf("%d\n", sum);
    }
}

// way 3
int main()
{
    int is_break = 0;
    while (1)
    {
        is_break = sum_1_to_n();
        if (is_break)
            break;
    }
}

// way 4
int main()
{
    sum_1_to_n();
}