#include <stdio.h>
#define INF 999999999

int main()
{
    int n;
    int arr[100];
    printf("몇 개의 숫자를 입력하시겠습니까?\n");
    scanf("%d", &n);
    printf("숫자들을 입력하시오.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = INF;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("최솟값은 %d 입니다.\n", min);
}