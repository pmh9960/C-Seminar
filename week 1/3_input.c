#include <stdio.h>

int main(void)
{
    int n;
    char c;
    float f;                          // �׻� ���� ����
    scanf("%d %c %f", &n, &c, &f);    // �Է� �ޱ�
    printf("%d %c %f\n", n, c, f);    // �Է� ���� �� ���
    printf("%p %p %p\n", &n, &c, &f); // �Է� ���� �ּ� ���

    system("pause");
    return 0;
}