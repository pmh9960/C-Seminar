#include <stdio.h>

int main()
{
    int n, arr[100];
    printf("n�� �Է��Ͻÿ� : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("������������ ���ĵ� ����� ������ �����ϴ�.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}