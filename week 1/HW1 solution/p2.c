#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    printf("두 수 a, b를 입력하시오\n");
    scanf("%d %d", &a, &b);

    printf("수열 : ");
    while (a <= b)
    {
        printf("%d ", a);
        sum += a;
        a += 3;
    }

    printf("\n합 : %d\n", sum);

    system("pause");
    return 0;
}