// for문과 재귀함수의 실행 시간 비교
// NUM 번 출력하는데 걸리는 시간 비교
#include <stdio.h>
#include <time.h>

#define NUM 1000

void recursive(int n)
{
    if (n == 0)
        return;
    printf("%d ", n);
    recursive(n - 1);
}

int main()
{
    clock_t start, end; // clock()의 반환형
    printf("for statement\n");
    start = clock(); // 시작 시간 측정
    for (int i = 0; i < NUM; i++)
    {
        printf("%d ", i);
    }
    end = clock(); // 종료 시간 측정
    printf("\n");
    printf("for문은 %.2lfus가 걸렸습니다.\n\n", (double)(end - start));

    printf("recursive function\n");
    start = clock();
    recursive(NUM);
    end = clock();
    printf("\n");
    printf("recursive function은 %.2lfus가 걸렸습니다.\n\n", (double)(end - start));

    // recursive function이 더 오래 걸리는 것을 알 수 있다.

    return 0;
}