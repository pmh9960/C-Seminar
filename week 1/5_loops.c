#include <stdio.h>

int main()
{
    // Hello World 100�� ���
    int i;
    for (i = 0; i < 100; i++)
    {
        printf("Hello World!\n");
    }
    printf("\n");

    // 1���� 100���� ���ϱ�
    int cnt = 1;
    int sum = 0;
    while (cnt <= 100)
    {
        sum += cnt;
        cnt++;
        // ���̸� sum += cnt++;
    }
    printf("%d\n", sum); // 5050
    printf("\n");

    // a�� b�� ������ �� ���� �� ���� ���� ���
    int a = 0; // 99�� 100 �־ ��
    int b = 100;
    do
    {
        printf("%d\n", b - a); // 100 99 ... 1
        a++;
    } while (a != b);
    printf("\n");

    system("pause");
    return 0;
}