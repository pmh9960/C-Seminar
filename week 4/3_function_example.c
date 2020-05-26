#include <stdio.h>

void sum_1_to_n(void);
int is_break = 0;

int main()
{
    int n, sum;
    while (1)
    {
        if (is_break)
            break;
        sum_1_to_n();
    }
}

void sum_1_to_n(void)
{
    int n, sum;
    printf("n을 입력하시오.\n");
    scanf("%d", &n);
    if (n == 0)
        is_break = 1;
    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return;
}