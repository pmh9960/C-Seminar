#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    printf("�� �� a, b�� �Է��Ͻÿ�\n");
    scanf("%d %d", &a, &b);

    printf("���� : ");
    while (a <= b)
    {
        printf("%d ", a);
        sum += a;
        a += 3;
    }

    printf("\n�� : %d\n", sum);

    system("pause");
    return 0;
}