#include <stdio.h>

int main()
{
    int n;
    printf("n을 입력하시오 : ");
    scanf("%d", &n);

    printf("소수들은 다음과 같습니다.\n");
    for (int i = 2; i <= n; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                is_prime = 0;
        }
        if (is_prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}