#include <stdio.h>
#define INF 999999999

int main()
{
    int n, arr[100];
    printf("n을 입력하시오 : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int min = INF;
        int min_index;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        arr[min_index] = arr[i];
        arr[i] = min;
    }

    printf("오름차순으로 정렬된 결과는 다음과 같습니다.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}