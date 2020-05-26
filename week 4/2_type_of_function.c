#include <stdio.h>

int sum_1_to_n(int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
        sum += i;
    return sum;
}

bool sum_1_to_n(void)
{
    int n, sum;
    bool is_break = false;
    printf("n을 입력하시오.\n");
    scanf("%d", &n);
    if (n == 0)
        is_break = true;
    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return is_break;
}

void sum_1_to_n(void)
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